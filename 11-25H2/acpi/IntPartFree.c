/*
 * XREFs of IntPartFree @ 0x1400707E8
 * Callers:
 *     IntPartArbInit @ 0x1400AC0E0 (IntPartArbInit.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1400C1580 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
