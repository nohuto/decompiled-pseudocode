/*
 * XREFs of RtlReleasePebLock @ 0x1800E1E60
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800E1D40 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011E8E4 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011E940 (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
