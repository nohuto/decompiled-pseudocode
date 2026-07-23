/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x180104C78
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 */

int LdrpInitParallelLoadingSupport()
{
  qword_1801D16D8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801D1678 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
