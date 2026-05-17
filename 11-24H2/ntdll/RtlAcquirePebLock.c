/*
 * XREFs of RtlAcquirePebLock @ 0x1800F4700
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800F4600 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D010 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D06C (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlAcquirePebLock()
{
  return RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
