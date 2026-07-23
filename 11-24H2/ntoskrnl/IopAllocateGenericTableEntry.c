/*
 * XREFs of IopAllocateGenericTableEntry @ 0x14070F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateGenericTableEntry(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x65546F49u);
}
