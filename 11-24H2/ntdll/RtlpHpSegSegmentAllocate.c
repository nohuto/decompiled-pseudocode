/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x18009BC50
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180067200 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x18009B5A0 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpHpSegSegmentFree @ 0x180026FA4 (RtlpHpSegSegmentFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18009BEDC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x18009C1EC (RtlpHpSegMgrAllocate.c)
 *     RtlpHpTlLogMemStats @ 0x180104B9C (RtlpHpTlLogMemStats.c)
 *     RtlpHeapLogRangeReserve @ 0x180111834 (RtlpHeapLogRangeReserve.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // r12
  _BOOL8 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = a2 + 2;
  v5 = 0LL;
  v6 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( v6 )
  {
    v8 = -*(_DWORD *)a1;
    v9 = v8;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v8 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v10 = v8 != 0x100000;
    v11 = 2 * ((unsigned __int64)(v6 - qword_1801CD918) >> 20);
    v12 = v11 + 2 * ((unsigned __int64)v8 >> 20);
    while ( v11 < v12 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&BaseAddress, v11, v7, v10 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v6, v3, 0);
        return v5;
      }
      v11 += 2LL;
    }
    v13 = *(_QWORD *)(a1 + 56);
    if ( *(char *)(v13 + 20) < 0 )
      RtlpLogHeapCommit(v13, v6, v3 << 12, 12);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v14 = 2147353480LL;
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v6, v9);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    return v6;
  }
  return v5;
}
