/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4
 * Callers:
 *     ?RealGetSystemMetricsForDpi@@YAHHI@Z @ 0x140073188 (-RealGetSystemMetricsForDpi@@YAHHI@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x14007946C (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     NtUserScaleSystemMetricForDPIWithoutCache @ 0x14020FB40 (NtUserScaleSystemMetricForDPIWithoutCache.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310 (_EnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetCursorSizesIndexFromDpi @ 0x140078FDC (GetCursorSizesIndexFromDpi.c)
 *     GetCursorSizeFromIndex @ 0x1400799DC (GetCursorSizeFromIndex.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     Get96DpiServerInfo @ 0x1402F15E0 (Get96DpiServerInfo.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(int a1, unsigned __int16 a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  INT v9; // ebx
  __int64 v10; // rcx
  int CursorSizesIndexFromDpi; // eax
  int v13; // edi
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  INT DpiDependentMetric; // eax
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // ebx
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  __int64 v35; // rcx
  __int64 DpiMetricsForDpi; // rax
  unsigned int v37; // edi
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // edi

  if ( (unsigned int)a1 <= 0x1D && a2 )
  {
    if ( a1 <= 16 )
    {
      if ( a1 != 16 )
      {
        v4 = a1 - 2;
        if ( v4 )
        {
          v5 = v4 - 5;
          if ( !v5 || (v6 = v5 - 1) == 0 )
          {
            CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(a2);
            return (unsigned int)GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
          }
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( (unsigned int)(v7 - 5) <= 1 )
            {
              v8 = Get96DpiServerInfo();
              return (unsigned int)(EngMulDiv(*(_DWORD *)(v8 + 4), a2, 96) + 3);
            }
            goto LABEL_21;
          }
          v10 = 26LL;
        }
        else
        {
          v10 = 13LL;
        }
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v10, a2) + 1);
      }
      v13 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
      v14 = ScaleSystemMetricForDPIWithoutCache(14LL, a2) + v13;
      v15 = 2 * (v14 + 2 * *(_DWORD *)(GetDpiServerInfoForDpi(a2) + 16));
      v16 = ScaleSystemMetricForDPIWithoutCache(12LL, a2);
      v17 = v16 + v15 + 2 * v16;
      v18 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) + 4;
      return (unsigned int)(v18 + v17);
    }
    v19 = a1 - 17;
    if ( !v19 )
    {
      v46 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
      v17 = 2 * (ScaleSystemMetricForDPIWithoutCache(15LL, a2) + v46);
      v18 = ScaleSystemMetricForDPIWithoutCache(2LL, a2);
      return (unsigned int)(v18 + v17);
    }
    v20 = v19 - 3;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( (unsigned int)(v22 - 5) < 2 )
          {
            DpiMetricsForDpi = GetDpiMetricsForDpi(a2);
            return (unsigned int)(((*(_DWORD *)(DpiMetricsForDpi + 28) + *(_DWORD *)(DpiMetricsForDpi + 20) + 1) & 0xFFFE)
                                - 1);
          }
LABEL_21:
          DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
          v9 = EngMulDiv(DpiDependentMetric, a2, 96);
          if ( a1 <= 13 )
          {
            if ( a1 != 13 )
            {
              if ( a1 )
              {
                v24 = a1 - 1;
                if ( v24 )
                {
                  v25 = v24 - 2;
                  if ( v25 )
                  {
                    v26 = v25 - 1;
                    if ( v26 )
                    {
                      v27 = v26 - 6;
                      if ( v27 )
                      {
                        if ( (unsigned int)(v27 - 1) > 1 )
                          return (unsigned int)v9;
                      }
                    }
                  }
                }
              }
              goto LABEL_29;
            }
            if ( v9 > *(_DWORD *)(GetDpiServerInfoForDpi(a2) + 20) + 2 )
              return (unsigned int)v9;
            v28 = *(_DWORD *)(GetDpiServerInfoForDpi(a2) + 20);
            return (unsigned int)(v28 + 2);
          }
          v29 = a1 - 18;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 4;
              if ( v31 )
              {
                v32 = v31 - 1;
                if ( !v32 )
                {
                  if ( v9 > *(_DWORD *)(GetDpiMetricsForDpi(a2) + 52) + 2 )
                    return (unsigned int)v9;
                  v28 = *(_DWORD *)(GetDpiMetricsForDpi(a2) + 52);
                  return (unsigned int)(v28 + 2);
                }
                v33 = v32 - 1;
                if ( v33 )
                {
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    if ( v34 == 3 )
                    {
                      if ( v9 >= 100 )
                      {
                        return 100;
                      }
                      else if ( v9 <= 0 )
                      {
                        return 0;
                      }
                    }
                  }
                  else if ( v9 <= *(_DWORD *)(GetDpiMetricsForDpi(a2) + 36) )
                  {
                    return *(unsigned int *)(GetDpiMetricsForDpi(a2) + 36);
                  }
                  return (unsigned int)v9;
                }
              }
LABEL_29:
              if ( v9 <= 8 )
                return 8;
              return (unsigned int)v9;
            }
            if ( v9 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, a2) )
              return (unsigned int)v9;
            v35 = 6LL;
          }
          else
          {
            if ( v9 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, a2) )
              return (unsigned int)v9;
            v35 = 5LL;
          }
          return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v35, a2);
        }
        v10 = 24LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v10, a2) + 1);
      }
      v37 = a2;
      v38 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
      v39 = ScaleSystemMetricForDPIWithoutCache(6LL, a2);
      v40 = v37;
      if ( v38 < v39 / 2 )
      {
        v41 = 13LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v41, v40) - 2);
      }
      v42 = 6LL;
    }
    else
    {
      v43 = a2;
      v44 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
      v45 = ScaleSystemMetricForDPIWithoutCache(5LL, a2);
      v40 = v43;
      if ( v44 < v45 / 2 )
      {
        v41 = 12LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v41, v40) - 2);
      }
      v42 = 5LL;
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v42, v40) / 2);
  }
  UserSetLastError(87);
  return 0LL;
}
