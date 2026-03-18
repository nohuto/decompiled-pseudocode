/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x14071B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PiDcAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
