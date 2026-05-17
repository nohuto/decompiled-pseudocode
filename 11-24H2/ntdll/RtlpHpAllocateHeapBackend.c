/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x180051334
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x180051440 (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  return RtlpHpSegAlloc((*(unsigned int *)(a1 + 336) < a3 ? 512 : 320) + (int)a1, a2, a3, a3, a4);
}
