/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x140A485C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x58706E50u);
}
