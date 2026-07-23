/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x14035E15C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1406036A8 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402196D4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x14035D548 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x14045D818 (RtlpHpSegSegmentFree.c)
 *     RtlpLogHeapCommit @ 0x1404F65E4 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // edx
  _BOOL8 v8; // r15
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rcx

  v3 = a2 + 2;
  v5 = 0LL;
  v6 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( v6 )
  {
    v7 = -*(_DWORD *)a1;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v7 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v8 = v7 != 0x100000;
    v9 = (unsigned __int64)v7 >> 20;
    v10 = 2 * ((unsigned __int64)(v6 - qword_140E68508) >> 20);
    v11 = v10 + 2 * v9;
    while ( v10 < v11 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite((__int64)&dword_140E68510, v10, v9, v8 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v6, v3, 0LL);
        return v5;
      }
      v10 += 2LL;
    }
    v12 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v12 + 20) & 0x80u) != 0 )
      RtlpLogHeapCommit(v12, v6, v3 << 12, 12LL);
    return v6;
  }
  return v5;
}
