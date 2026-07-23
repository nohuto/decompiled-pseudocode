/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x18011E940
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800E1D40 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011E8E4 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800E1E40 (RtlAcquirePebLock.c)
 */

NTSTATUS RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlAcquirePebLock();
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801CFE20 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_1801CFE10 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlReleasePebLock();
  }
  return result;
}
