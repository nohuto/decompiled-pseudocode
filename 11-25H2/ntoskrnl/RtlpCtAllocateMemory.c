/*
 * XREFs of RtlpCtAllocateMemory @ 0x140777E18
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 RtlpCtAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
