/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1403B3FF0
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
    FsRtlReleasePushLock((ULONG_PTR)&PerStreamContext->PushLock);
    return 0;
  }
  return -1073741808;
}
