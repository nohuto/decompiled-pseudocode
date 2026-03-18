/*
 * XREFs of PiDmFreeGenericTableEntry @ 0x140726E00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x5A706E50u);
}
