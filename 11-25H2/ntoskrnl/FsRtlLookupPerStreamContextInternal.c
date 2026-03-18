/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1402058E0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x140205AD0 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140205BC0 (ExReleaseAutoExpandPushLockShared.c)
 *     FsRtlReleasePushLock @ 0x140205F3C (FsRtlReleasePushLock.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _FSRTL_PER_STREAM_CONTEXT *v3; // rbp
  unsigned __int8 v4; // al
  ULONG_PTR v8; // r8
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  unsigned __int8 v11; // cl

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
  else if ( StreamContext->AePushLock )
  {
    v8 = FsRtlAcquireAutoExpandPushLockShared();
    goto LABEL_4;
  }
  PfLockSharedAcquire(&StreamContext->PushLock);
LABEL_22:
  v8 = 0LL;
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
  v11 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v11 < 3u )
  {
    if ( !v11 )
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
  ExReleaseAutoExpandPushLockShared(v8, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v3;
}
