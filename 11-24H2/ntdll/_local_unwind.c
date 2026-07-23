/*
 * XREFs of _local_unwind @ 0x1801201E0
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800EE760 (EvtIntReportEventWorker.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlUnwind @ 0x1800D2950 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
