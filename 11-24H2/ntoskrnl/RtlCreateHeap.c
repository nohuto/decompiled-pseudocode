/*
 * XREFs of RtlCreateHeap @ 0x140783180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  return RtlpCreateHeap(Flags, (char *)HeapBase, (void *)ReserveSize, CommitSize, (__int64)Lock, (__int128 *)Parameters);
}
