/*
 * XREFs of RtlAcquirePebLock @ 0x1800E1E40
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800E1D40 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011E8E4 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011E940 (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlAcquirePebLock()
{
  return RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
