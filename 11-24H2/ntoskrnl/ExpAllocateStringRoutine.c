/*
 * XREFs of ExpAllocateStringRoutine @ 0x1409F6D00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 ExpAllocateStringRoutine()
{
  return ExAllocatePool2(0x100uLL);
}
