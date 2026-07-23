/*
 * XREFs of RtlCreateHeap @ 0x180036360
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  return (PVOID)RtlpCreateHeap(Flags, (_DWORD)HeapBase, ReserveSize, CommitSize, (__int64)Lock, (__int64)Parameters, 0);
}
