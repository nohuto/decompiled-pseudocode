/*
 * XREFs of ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0
 * Callers:
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140049B34 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x140072D0C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     GetResizeBorderWidthForDpi @ 0x140079418 (GetResizeBorderWidthForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     Get96DpiServerInfo @ 0x1402F15E0 (Get96DpiServerInfo.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpiWithAppCompat2(unsigned int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int DpiDependentMetric; // eax

  if ( (a2 & 0x10000000) != 0 )
  {
    return 1;
  }
  else
  {
    v5 = *(_DWORD *)(Get96DpiServerInfo() + 4) * a1 + 48;
    v6 = (int)v5 / 96;
    if ( (a2 & 0x20000000) != 0 )
    {
      LODWORD(v4) = (unsigned __int64)(715827883LL * (int)v5) >> 32;
      v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928);
      if ( a1 == *(unsigned __int16 *)(v8 + 6998) )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19928) + 2400LL);
      }
      else if ( a1 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19928) + 2520LL);
      }
      else if ( (unsigned int)GetDpiCacheIndex(a1) == -1 )
      {
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a1);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(29LL, a1);
      }
      v6 += DpiDependentMetric;
    }
  }
  return v6;
}
