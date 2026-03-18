/*
 * XREFs of PopDirectedDripsUmTestDeviceFree @ 0x140764B30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsUmTestDeviceFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x4D554444u);
}
