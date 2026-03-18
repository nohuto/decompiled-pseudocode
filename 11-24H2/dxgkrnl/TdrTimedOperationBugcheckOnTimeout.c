/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1400721FC
 * Callers:
 *     TdrTimedOperationDelay @ 0x140043FE0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1401D0DC0 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
