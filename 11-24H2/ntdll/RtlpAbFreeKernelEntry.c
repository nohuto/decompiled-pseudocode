/*
 * XREFs of RtlpAbFreeKernelEntry @ 0x180019D70
 * Callers:
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     LdrSetDllDirectory @ 0x180026100 (LdrSetDllDirectory.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004AC20 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlpAbFreeKernelEntry(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = (signed __int64)(a1 - (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
  return NtSetInformationThread(-2LL, 56LL, v2);
}
