/*
 * XREFs of PopEtInternerFree @ 0x140905D70
 * Callers:
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtInternerFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54456F50u);
}
