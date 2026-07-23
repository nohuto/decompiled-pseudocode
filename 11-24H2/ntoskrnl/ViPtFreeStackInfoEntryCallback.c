/*
 * XREFs of ViPtFreeStackInfoEntryCallback @ 0x140B8E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ViPtFreeStackInfoEntryCallback(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x6E496956u);
}
