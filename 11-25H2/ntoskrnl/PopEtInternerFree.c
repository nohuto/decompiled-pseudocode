/*
 * XREFs of PopEtInternerFree @ 0x1409621D0
 * Callers:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtInternerFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54456F50u);
}
