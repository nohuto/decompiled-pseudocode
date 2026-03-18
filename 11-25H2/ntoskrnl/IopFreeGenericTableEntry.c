/*
 * XREFs of IopFreeGenericTableEntry @ 0x140706060
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeGenericTableEntry(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x65546F49u);
}
