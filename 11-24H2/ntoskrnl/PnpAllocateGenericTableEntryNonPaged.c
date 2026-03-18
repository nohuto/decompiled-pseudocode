/*
 * XREFs of PnpAllocateGenericTableEntryNonPaged @ 0x1405A59C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntryNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
