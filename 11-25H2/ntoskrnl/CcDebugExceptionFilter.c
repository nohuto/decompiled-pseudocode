/*
 * XREFs of CcDebugExceptionFilter @ 0x140577114
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x1403AB228 (CcAsyncLazywriteWorker.c)
 *     CcCachemapUninitWorkerThread @ 0x1403ABE90 (CcCachemapUninitWorkerThread.c)
 *     CcWorkerThread @ 0x1404DBCE0 (CcWorkerThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155FuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
