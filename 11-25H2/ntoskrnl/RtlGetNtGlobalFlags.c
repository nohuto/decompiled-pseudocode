/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140AB8150
 * Callers:
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x1405DE67C (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
