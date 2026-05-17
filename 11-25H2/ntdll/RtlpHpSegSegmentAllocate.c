/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1800BA444
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18000D260 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1800B9D94 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegSegmentFree @ 0x1800B96A4 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800BA6D0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x1800BA9E0 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpTlLogMemStats @ 0x18010C67C (RtlpHpTlLogMemStats.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     RtlpHeapLogRangeReserve @ 0x1801197F0 (RtlpHeapLogRangeReserve.c)
 */

unsigned __int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r12
  _BOOL8 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = a2 + 2;
  v4 = 0LL;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  if ( v5 )
  {
    v7 = -*(_DWORD *)a1;
    v8 = v7;
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v7 >> 12);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v9 = v7 != 0x100000;
    v10 = 2 * ((v5 - qword_1801D0978) >> 20);
    v11 = v10 + 2 * ((unsigned __int64)v7 >> 20);
    while ( v10 < v11 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&unk_1801D0980, v10, v6, v9 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v5, v2, 0);
        return v4;
      }
      v10 += 2LL;
    }
    v12 = *(_QWORD *)(a1 + 56);
    if ( *(char *)(v12 + 20) < 0 )
      RtlpLogHeapCommit(v12, v5, v2 << 12, 12LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v13 = 2147353480LL;
    if ( *(_BYTE *)v13 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v5, v8);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    return v5;
  }
  return v4;
}
