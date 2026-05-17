/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x180109D48
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  qword_1801D26D8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801D2688 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx((__int64)&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
