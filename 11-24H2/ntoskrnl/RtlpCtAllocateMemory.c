/*
 * XREFs of RtlpCtAllocateMemory @ 0x140786F98
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtAllocateMemory(ULONG_PTR a1)
{
  return ExAllocatePool2(0x100uLL, a1, 0x67744364u);
}
