/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1404F87B0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404C5934 (RtlpHpLfhBucketUpdateStats.c)
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
