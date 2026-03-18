/*
 * XREFs of PopPowerRequestTableAllocate @ 0x140A6A970
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PopPowerRequestTableAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
