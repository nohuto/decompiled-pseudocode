/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1402A21D0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlReleasePushLock @ 0x140205F3C (FsRtlReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x1402A2500 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1402A26A4 (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1402A2908 (FsRtlAcquirePushLockExclusive.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  ULONG_PTR *p_AePushLock; // rdi
  unsigned __int8 v5; // al
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v8; // al

  if ( PerStreamContext && (PerStreamContext->Flags2 & 2) != 0 )
  {
    p_AePushLock = (ULONG_PTR *)&PerStreamContext->AePushLock;
    v5 = *((_BYTE *)PerStreamContext + 7) >> 4;
    if ( v5 >= 3u && *p_AePushLock )
    {
      FsRtlAcquireAutoExpandPushLockExclusive();
    }
    else if ( v5 )
    {
      FsRtlAcquirePushLockExclusive(&PerStreamContext->PushLock);
    }
    else
    {
      ExAcquireFastMutex(PerStreamContext->FastMutex);
    }
    p_FilterContexts = &PerStreamContext->FilterContexts;
    Flink = PerStreamContext->FilterContexts.Flink;
    if ( Flink->Blink != &PerStreamContext->FilterContexts )
      __fastfail(3u);
    Ptr->Links.Blink = p_FilterContexts;
    Ptr->Links.Flink = Flink;
    Flink->Blink = &Ptr->Links;
    p_FilterContexts->Flink = &Ptr->Links;
    v8 = *((_BYTE *)PerStreamContext + 7) >> 4;
    if ( v8 < 3u )
    {
      if ( !v8 )
      {
        KeReleaseGuardedMutex(PerStreamContext->FastMutex);
        return 0;
      }
    }
    else if ( *p_AePushLock )
    {
      FsRtlReleaseAutoExpandPushLockExclusive(*p_AePushLock);
      return 0;
    }
    FsRtlReleasePushLock((signed __int64 *)&PerStreamContext->PushLock);
    return 0;
  }
  return -1073741808;
}
