/*
 * XREFs of RtlReleasePebLock @ 0x1800F4720
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800F4600 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D010 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D06C (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
