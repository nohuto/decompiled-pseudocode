/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x1402F89B0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExAllocateHeapPages @ 0x1402F7304 (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  int v4; // r10d

  v4 = 512;
  if ( a3 <= *(unsigned int *)(a1 + 336) )
    v4 = 320;
  return RtlpHpSegAlloc(v4 + (int)a1, a2, a3, a3, a4);
}
