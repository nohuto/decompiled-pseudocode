/*
 * XREFs of ViPtFreeStackInfoEntryCallback @ 0x140B8C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ViPtFreeStackInfoEntryCallback(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6E496956u);
}
