/*
 * XREFs of RtlpCtAllocateMemory @ 0x140787068
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 RtlpCtAllocateMemory()
{
  return ExAllocatePool2(0x100uLL);
}
