/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404BF608 (RtlpHpLfhBucketUpdateStats.c)
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
