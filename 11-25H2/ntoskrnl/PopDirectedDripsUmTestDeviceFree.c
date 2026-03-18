/*
 * XREFs of PopDirectedDripsUmTestDeviceFree @ 0x140755070
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsUmTestDeviceFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x4D554444u);
}
