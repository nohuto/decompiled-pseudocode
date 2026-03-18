/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x14007187C
 * Callers:
 *     TdrTimedOperationDelay @ 0x140044300 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1401CBB30 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
