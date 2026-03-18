/*
 * XREFs of VidSchQueryVidPnSourceStatistics @ 0x140051520
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x140043D54 (-GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z.c)
 *     CopyVidPnSourceStatistics @ 0x1400A6BEC (CopyVidPnSourceStatistics.c)
 */

__int64 __fastcall VidSchQueryVidPnSourceStatistics(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // eax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned __int8 v11; // al
  __m128i *v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+78h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 40);
  v6 = a2;
  if ( a2 < v3 )
  {
    CopyVidPnSourceStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 6712));
    if ( *(_BYTE *)(a1 + 2468) )
      v11 = *(_BYTE *)(v10 + a1 + 2064);
    else
      v11 = *(_BYTE *)(a1 + 2064);
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    *(_QWORD *)(v9 + 16) = v11;
    DXGADAPTER::GetVSyncTimeCounters(*(_QWORD *)(a1 + 16), v10, 0, (__int64)&v15);
    if ( *(_BYTE *)(a1 + 59) )
    {
      _mm_lfence();
      v12 = *(__m128i **)(a1 + 8 * v6 + 3432);
      v13 = v12[4917];
      v14 = v12[4917].m128i_i64[0];
      v18 = v12[4918].m128i_i64[0];
      a3[3] = v15 + v14;
      a3[4] = v16 + _mm_srli_si128(v13, 8).m128i_u64[0];
      a3[5] = v18 + v17;
    }
    else
    {
      a3[3] = v15;
      a3[4] = v16;
      a3[5] = v17;
    }
    CopyVidPnSourceStatistics(
      a3 + 10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v6 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, a2, v3);
    WdLogGlobalForLineNumber = 12572;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
