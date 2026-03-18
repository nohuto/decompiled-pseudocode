/*
 * XREFs of ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x140045AF4
 * Callers:
 *     VidSchQueryVidPnSourceStatistics @ 0x140051AA0 (VidSchQueryVidPnSourceStatistics.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::GetVSyncTimeCounters(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // xmm1_8
  __int64 v9; // rcx

  result = *(unsigned int *)(a1 + 1856);
  if ( a2 >= (unsigned int)result )
  {
    WdLogSingleEntry2(2LL, a2, *(unsigned int *)(a1 + 1856));
    WdLogGlobalForLineNumber = 2435;
    return DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  else if ( a4 )
  {
    v6 = *(_QWORD *)(a1 + 4408);
    if ( v6 )
    {
      if ( (*(_DWORD *)(a1 + 2976) & 0x10) != 0 )
        v7 = v6 + 112LL * a2;
      else
        v7 = v6;
      result = a3;
      v8 = *(_QWORD *)(v7 + 24LL * a3 + 32);
      *(_OWORD *)a4 = *(_OWORD *)(v7 + 24LL * a3 + 16);
      *(_QWORD *)(a4 + 16) = v8;
    }
  }
  return result;
}
