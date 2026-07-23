/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140B8E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ViPtAllocPoolInfoCallback(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x40uLL, a2, 0x6E496956uLL);
}
