/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x14071B720
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x47706E50u);
}
