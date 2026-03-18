/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1402F8E24
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1405F9D28 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x1402F742C (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x1402F93D0 (RtlpHpSegMgrAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14035DFA0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpLogHeapCommit @ 0x1404F6504 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // edx
  _BOOL8 v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // rcx

  v2 = a2 + 2;
  v4 = 0LL;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  if ( v5 )
  {
    v6 = -*(_DWORD *)a1;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v6 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v7 = v6 != 0x100000;
    v8 = (unsigned __int64)v6 >> 20;
    v9 = 2 * ((unsigned __int64)(v5 - qword_140E68048) >> 20);
    v10 = v9 + 2 * v8;
    while ( v9 < v10 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&dword_140E68050, v9, v8, v7 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v5, v2, 0);
        return v4;
      }
      v9 += 2LL;
    }
    v11 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v11 + 20) & 0x80u) != 0 )
      RtlpLogHeapCommit(v11, v5, v2 << 12, 12LL);
    return v5;
  }
  return v4;
}
