/*
 * XREFs of _local_unwind @ 0x180121FB0
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x1800D75E0 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
