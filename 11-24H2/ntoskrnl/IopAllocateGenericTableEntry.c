/*
 * XREFs of IopAllocateGenericTableEntry @ 0x140711A10
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 IopAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
