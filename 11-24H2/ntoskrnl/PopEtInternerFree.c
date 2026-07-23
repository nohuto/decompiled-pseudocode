/*
 * XREFs of PopEtInternerFree @ 0x14099C9F0
 * Callers:
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtInternerFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54456F50u);
}
