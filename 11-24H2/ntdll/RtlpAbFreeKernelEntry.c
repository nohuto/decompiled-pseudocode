/*
 * XREFs of RtlpAbFreeKernelEntry @ 0x180046770
 * Callers:
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180048350 (RtlTryAcquireSRWLockExclusive.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180060800 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall RtlpAbFreeKernelEntry(__int64 a1)
{
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  ThreadInformation[1] = 0LL;
  ThreadInformation[0] = (signed __int64)(a1 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
  return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
}
