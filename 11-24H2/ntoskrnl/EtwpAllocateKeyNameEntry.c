/*
 * XREFs of EtwpAllocateKeyNameEntry @ 0x1406504B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateKeyNameEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(0x100uLL);
}
