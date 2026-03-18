/*
 * XREFs of ExpAllocateStringRoutine @ 0x1409F6CD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 ExpAllocateStringRoutine()
{
  return ExAllocatePool2(0x100uLL);
}
