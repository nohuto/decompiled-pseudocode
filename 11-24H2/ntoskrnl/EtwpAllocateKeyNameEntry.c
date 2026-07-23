/*
 * XREFs of EtwpAllocateKeyNameEntry @ 0x14064EA90
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateKeyNameEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x74777445u);
}
