/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x1402C15F0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     ExAllocateHeapPages @ 0x140440774 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402C162C (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  int v4; // r10d

  v4 = 512;
  if ( a3 <= *(unsigned int *)(a1 + 336) )
    v4 = 320;
  return RtlpHpSegAlloc(v4 + (int)a1, a2, a3, a3, a4);
}
