/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1403B3EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403B432C (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1403B44A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlReleasePushLock @ 0x1403B4708 (FsRtlReleasePushLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v6; // al
  struct _FSRTL_PER_STREAM_CONTEXT *v7; // rdi
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v12; // al
  void *AePushLock; // rcx

  if ( StreamContext && (StreamContext->Flags2 & 2) != 0 )
  {
    v6 = *((_BYTE *)StreamContext + 7) >> 4;
    if ( v6 < 3u )
    {
      if ( !v6 )
      {
        ExAcquireFastMutex(StreamContext->FastMutex);
LABEL_6:
        v7 = 0LL;
        p_FilterContexts = &StreamContext->FilterContexts;
        Flink = StreamContext->FilterContexts.Flink;
        if ( InstanceId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
              goto LABEL_10;
            Flink = Flink->Flink;
          }
        }
        else if ( OwnerId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId )
              goto LABEL_10;
            Flink = Flink->Flink;
          }
        }
        else if ( Flink != p_FilterContexts )
        {
LABEL_10:
          v7 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
          if ( Flink )
          {
            v10 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink
              || (Blink = Flink->Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v7) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v10;
            v10->Blink = Blink;
          }
        }
        v12 = *((_BYTE *)StreamContext + 7) >> 4;
        if ( v12 < 3u )
        {
          if ( !v12 )
          {
            KeReleaseGuardedMutex(StreamContext->FastMutex);
            return v7;
          }
        }
        else
        {
          AePushLock = StreamContext->AePushLock;
          if ( AePushLock )
          {
            FsRtlReleaseAutoExpandPushLockExclusive((ULONG_PTR)AePushLock);
            return v7;
          }
        }
        FsRtlReleasePushLock((ULONG_PTR)&StreamContext->PushLock);
        return v7;
      }
    }
    else if ( StreamContext->AePushLock )
    {
      FsRtlAcquireAutoExpandPushLockExclusive();
      goto LABEL_6;
    }
    FsRtlAcquirePushLockExclusive(&StreamContext->PushLock);
    goto LABEL_6;
  }
  return 0LL;
}
