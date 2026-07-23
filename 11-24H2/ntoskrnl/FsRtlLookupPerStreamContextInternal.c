/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x14028FE70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14028E600 (ExReleaseAutoExpandPushLockShared.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14028F100 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     FsRtlReleasePushLock @ 0x1403B4708 (FsRtlReleasePushLock.c)
 *     PfLockSharedAcquire @ 0x14047A884 (PfLockSharedAcquire.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _FSRTL_PER_STREAM_CONTEXT *v3; // rbp
  unsigned __int8 v4; // al
  void *AePushLock; // rcx
  ULONG_PTR v9; // r8
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  unsigned __int8 v12; // cl

  v3 = 0LL;
  v4 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v4 < 3u )
  {
    if ( !v4 )
    {
      ExAcquireFastMutex(StreamContext->FastMutex);
      goto LABEL_22;
    }
  }
  else
  {
    AePushLock = StreamContext->AePushLock;
    if ( AePushLock )
    {
      v9 = FsRtlAcquireAutoExpandPushLockShared((__int64)AePushLock);
      goto LABEL_4;
    }
  }
  PfLockSharedAcquire(&StreamContext->PushLock);
LABEL_22:
  v9 = 0LL;
LABEL_4:
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  if ( InstanceId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
        goto LABEL_9;
      Flink = Flink->Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId )
      {
LABEL_9:
        v3 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
        break;
      }
      Flink = Flink->Flink;
    }
  }
  else if ( Flink != p_FilterContexts )
  {
    v3 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
  v12 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v12 < 3u )
  {
    if ( !v12 )
    {
      KeReleaseGuardedMutex(StreamContext->FastMutex);
      return v3;
    }
    goto LABEL_19;
  }
  if ( !StreamContext->AePushLock )
  {
LABEL_19:
    FsRtlReleasePushLock((ULONG_PTR)&StreamContext->PushLock);
    return v3;
  }
  ExReleaseAutoExpandPushLockShared(v9, 0LL);
  KeLeaveCriticalRegionThread();
  return v3;
}
