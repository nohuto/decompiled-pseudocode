/*
 * XREFs of LkmdTelpFreeMem @ 0x14081FBDC
 * Callers:
 *     WheapReportLiveDump @ 0x1407B9128 (WheapReportLiveDump.c)
 *     LkmdTelCreateReport @ 0x14081F8EC (LkmdTelCreateReport.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall LkmdTelpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
