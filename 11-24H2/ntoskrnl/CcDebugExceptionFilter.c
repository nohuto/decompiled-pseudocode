/*
 * XREFs of CcDebugExceptionFilter @ 0x1405778A4
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x14027AAB0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155FuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
