/*
 * XREFs of _local_unwind @ 0x180123A90
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800F5D70 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
