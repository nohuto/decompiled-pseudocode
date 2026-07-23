/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x14035DC90
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapBackend(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  int v4; // r10d

  v4 = 512;
  if ( a3 <= *(unsigned int *)(a1 + 336) )
    v4 = 320;
  return RtlpHpSegAlloc(v4 + (int)a1, a2, a3, a3, a4);
}
