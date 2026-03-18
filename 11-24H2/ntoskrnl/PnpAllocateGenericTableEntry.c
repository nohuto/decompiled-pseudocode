/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x140A89580
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PnpAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
