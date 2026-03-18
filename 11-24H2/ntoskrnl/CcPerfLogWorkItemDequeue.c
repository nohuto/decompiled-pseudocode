/*
 * XREFs of CcPerfLogWorkItemDequeue @ 0x1402A8D2C
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1402A7660 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogWorkItemDequeue(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = a1;
  v3 = &v2;
  v5 = 0;
  v4 = 8;
  return EtwTraceKernelEvent((int)&v3, 1, 0x80020000, 5633, 5249282);
}
