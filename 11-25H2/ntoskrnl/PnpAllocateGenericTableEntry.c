/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140A86B30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
