/*
 * XREFs of LkmdTelpFreeMem @ 0x140830114
 * Callers:
 *     WheapReportLiveDump @ 0x1407C8DE8 (WheapReportLiveDump.c)
 *     LkmdTelCreateReport @ 0x14082FE24 (LkmdTelCreateReport.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall LkmdTelpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
