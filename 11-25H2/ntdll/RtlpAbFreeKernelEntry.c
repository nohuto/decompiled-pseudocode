/*
 * XREFs of RtlpAbFreeKernelEntry @ 0x180047D90
 * Callers:
 *     RtlTryAcquireSRWLockExclusive @ 0x180047570 (RtlTryAcquireSRWLockExclusive.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18009E900 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall RtlpAbFreeKernelEntry(__int64 a1)
{
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  ThreadInformation[1] = 0LL;
  ThreadInformation[0] = (signed __int64)(a1 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
  return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
}
