/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x18011B29C
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x180001008 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011B240 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x180001100 (RtlAcquirePebLock.c)
 */

NTSTATUS RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlAcquirePebLock();
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801CCE20 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_1801CCE10 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlReleasePebLock();
  }
  return result;
}
