/*
 * XREFs of RtlReleasePebLock @ 0x180001120
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x180001008 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011B240 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011B29C (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
