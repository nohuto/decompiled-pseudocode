/*
 * XREFs of PiDqFreeGenericTableEntry @ 0x140A5A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x58706E50u);
}
