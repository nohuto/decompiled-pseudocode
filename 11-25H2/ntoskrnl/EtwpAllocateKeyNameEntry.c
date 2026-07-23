/*
 * XREFs of EtwpAllocateKeyNameEntry @ 0x1406444A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateKeyNameEntry(_RTL_AVL_TABLE *a1)
{
  return ExAllocatePool2(0x100uLL);
}
