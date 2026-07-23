/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x140A94280
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x5A706E50u);
}
