/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x140A9D320
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PiSwAllocateGenericTableEntry()
{
  return ExAllocatePool2(0x100uLL);
}
