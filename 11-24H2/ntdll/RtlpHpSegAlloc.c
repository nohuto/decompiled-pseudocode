/*
 * XREFs of RtlpHpSegAlloc @ 0x180051440
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpHpSegSubAllocate @ 0x180051270 (RtlpHpSegSubAllocate.c)
 *     RtlpHpAllocateHeapBackend @ 0x180051334 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegLfhAllocate @ 0x180051370 (RtlpHpSegLfhAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeAllocate @ 0x180051620 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F7560 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpSegAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  int v8; // r13d
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  int v14; // ecx
  __int64 v15; // rbx
  unsigned int v17; // eax
  int v19; // [rsp+80h] [rbp+28h]

  v6 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = a5 & 4;
  v10 = v7 + 1;
  if ( (a5 & 4) == 0 )
    v10 = v7;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v11 = RtlpHpSegPageRangeAllocate(a1, v10, a5);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = *(unsigned __int8 *)(v11 + 31);
  v14 = (unsigned __int16)~*(_WORD *)(v11 + 28);
  v19 = v14;
  if ( !(_DWORD)v6 )
    goto LABEL_6;
  v17 = a5 & 0xFFFFFFFD;
  if ( !v14 )
    v17 = a5;
  if ( (int)RtlpHpSegPageRangeCommit(a1, v12, 0, v6, v17, 0LL) < 0 )
  {
    RtlpHpSegPageRangeShrink(a1, v12, 0LL);
    return 0LL;
  }
  else
  {
LABEL_6:
    if ( v8 )
      RtlpHpSegPageRangeCommit(a1, v12, v10 - 1, v10 - (v13 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v12 + 4) = (v13 << *(_BYTE *)(a1 + 8)) - a2;
    v15 = (v12 & *(_QWORD *)a1) + ((v12 - (v12 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (a5 & 2) != 0
      && (v19
       || (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(unsigned __int8)BYTE1(*(_QWORD *)(a1 + 40))] > 0x100000
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v15, (unsigned int)a2) <= 2) )
    {
      RtlHeapZero(v15, (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    return v15;
  }
}
