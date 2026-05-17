/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x18011D06C
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800F4600 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D010 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800F4700 (RtlAcquirePebLock.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlAcquirePebLock();
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801CDE20 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_1801CDE10 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlReleasePebLock();
  }
  return result;
}
