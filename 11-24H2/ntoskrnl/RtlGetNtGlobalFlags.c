/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140ABC2D0
 * Callers:
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpAllocateHeap @ 0x1405EA9AC (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
