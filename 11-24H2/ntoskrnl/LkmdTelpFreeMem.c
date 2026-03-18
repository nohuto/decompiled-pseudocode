/*
 * XREFs of LkmdTelpFreeMem @ 0x14082F91C
 * Callers:
 *     WheapReportLiveDump @ 0x1407C88F8 (WheapReportLiveDump.c)
 *     LkmdTelCreateReport @ 0x14082F62C (LkmdTelCreateReport.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall LkmdTelpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
