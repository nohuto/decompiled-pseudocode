/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x18010C758
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 */

__int64 __fastcall LdrpInitParallelLoadingSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  qword_1801D4738 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801D46D8 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx((__int64)&LdrpWorkQueueLock, 0, 0LL, a4);
  return LdrpCreateLoaderEvents();
}
