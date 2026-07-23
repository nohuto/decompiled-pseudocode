/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140AB72F0
 * Callers:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
