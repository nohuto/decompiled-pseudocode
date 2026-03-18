/*
 * XREFs of RtlpHpSegAlloc @ 0x1402F89EC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpSegSubAllocate @ 0x1402F84F4 (RtlpHpSegSubAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1402F82A0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x1402F97D8 (RtlpHpSegPageRangeCommit.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
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
  int v15; // r8d
  __int64 v16; // rbx
  int v18; // [rsp+70h] [rbp+18h]
  __int64 v19; // [rsp+78h] [rbp+20h]

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v9 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v9 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v10 = RtlpHpSegPageRangeAllocate(a1, v9, a5);
  v19 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~*(_WORD *)(v10 + 28);
  v18 = v13;
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v14 = a5 & 0xFFFFFFFD;
  if ( !v13 )
    v14 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v11, 0, v5, v14, 0LL) < 0 )
  {
    v16 = 0LL;
    RtlpHpSegPageRangeShrink(a1, v19, v15);
  }
  else
  {
LABEL_9:
    if ( (a5 & 4) != 0 )
      RtlpHpSegPageRangeCommit(a1, v11, v9 - 1, v9 - (v12 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
    v16 = (v11 & *(_QWORD *)a1) + ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0
      && (v18
       || (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v16, a2) <= 2) )
    {
      RtlHeapZero(v16, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    }
  }
  return v16;
}
