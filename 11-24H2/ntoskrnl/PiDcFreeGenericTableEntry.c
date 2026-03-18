/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x1407276A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x47706E50u);
}
