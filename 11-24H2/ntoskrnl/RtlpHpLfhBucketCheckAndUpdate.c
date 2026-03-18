/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1404FAC50
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404C61AC (RtlpHpLfhBucketUpdateStats.c)
 */

__int64 __fastcall RtlpHpLfhBucketCheckAndUpdate(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 8LL * a2 + 448) & 1) == 0 )
    result = *(_QWORD *)(a1 + 8LL * a2 + 448);
  if ( !result )
    return RtlpHpLfhBucketUpdateStats(a1, a2, 1);
  return result;
}
