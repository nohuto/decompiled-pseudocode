/*
 * XREFs of RtlpHpSegAlloc @ 0x14035DCCC
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapBackend @ 0x14035DC90 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegSubAllocate @ 0x140368214 (RtlpHpSegSubAllocate.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14035CD40 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x14035F6F0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r14d
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rbx
  int v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v9 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v9 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v10 = RtlpHpSegPageRangeAllocate(a1, v9, a5);
  v18 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~*(_WORD *)(v10 + 28);
  v17 = v13;
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v14 = a5 & 0xFFFFFFFD;
  if ( !v13 )
    v14 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v11, 0, v5, v14, 0LL) < 0 )
  {
    v15 = 0LL;
    RtlpHpSegPageRangeShrink(a1, v18);
  }
  else
  {
LABEL_9:
    if ( (a5 & 4) != 0 )
      RtlpHpSegPageRangeCommit(a1, v11, v9 - 1, v9 - (v12 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
    v15 = (v11 & *(_QWORD *)a1) + ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0
      && (v17
       || (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v15, a2) <= 2) )
    {
      RtlHeapZero(v15, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return v15;
}
