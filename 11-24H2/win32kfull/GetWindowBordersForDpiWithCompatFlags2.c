/*
 * XREFs of GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428
 * Callers:
 *     GetWindowBordersForDpi @ 0x140074F80 (GetWindowBordersForDpi.c)
 * Callees:
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall GetWindowBordersForDpiWithCompatFlags2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v7; // bp
  int v8; // r15d
  int v9; // r8d
  unsigned int v10; // esi
  int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int DpiDependentMetric; // eax

  v7 = a2;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = v9 + 1;
  LOBYTE(a1) = (a1 & 0xC00000) == 0;
  if ( ((unsigned __int8)a1 & ((a2 & 1) == 0)) != 0 )
    v10 = v9;
  if ( (a6 & 0x10000000) != 0 || (a6 & 0x20000000) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v14 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
    if ( a5 == *(unsigned __int16 *)(v14 + 6998) )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 2400LL);
    }
    else if ( a5 == 96 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheIndex(a5) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
      else
        DpiDependentMetric = GetDpiDependentMetric(29LL, a5);
      v11 = DpiDependentMetric;
    }
  }
  if ( (v8 & 0x40000) != 0 || (result = v10, v11 > 0) && (v8 & 0xC00000) == 0xC00000 && (a6 & 0x30000000) == 0 )
    result = v11 + v10 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, a6);
  if ( a4 )
  {
    if ( (v7 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
