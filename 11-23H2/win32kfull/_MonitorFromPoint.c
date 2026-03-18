/*
 * XREFs of _MonitorFromPoint @ 0x1C00AEBB0
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001D69C (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01B93B4 (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01CC790 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D1000 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9628 (-HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRE.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225348 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C00AF334 (CalculateLogicalMonitorRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v4; // esi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // rdi
  __int64 v10; // r8
  __int64 i; // rdi
  unsigned int v13; // r9d
  unsigned int k; // ebp
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 j; // rbp
  int v20; // eax
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int128 v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+94h] [rbp+Ch]

  v26 = HIDWORD(a1);
  CurrentThreadDpiAwarenessContext = a3;
  v4 = a2;
  v6 = 0LL;
  DispInfo = GetDispInfo(a1, a2, a3);
  if ( **(_DWORD **)DispInfo == 1 && v4 )
    return *(_QWORD *)(GetDispInfo(v8, v7, v10) + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      if ( !*((_QWORD *)PtiCurrentShared() + 57)
        || (v8 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL), (*(_DWORD *)(v8 + 64) & 1) == 0) )
      {
        CurrentThreadDpiAwarenessContext = 18;
      }
    }
  }
  if ( v4 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v10 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v10 + 24) & 1) != 0 )
      {
        v13 = CurrentThreadDpiAwarenessContext >> 8;
        LOWORD(v13) = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
        CalculateLogicalMonitorRect(
          (unsigned int)&v24,
          v10 + 28,
          *(unsigned __int16 *)(v10 + 60),
          v13,
          *(_WORD *)(v10 + 62));
        v25 = v24;
        if ( (unsigned int)PtInRect(&v25, a1) )
          return i;
      }
    }
    if ( v4 == 1 )
      return *(_QWORD *)(GetDispInfo(v8, v7, v10) + 96);
    return 0LL;
  }
  if ( v4 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v26 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( j = -1LL; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__int64 *)&v24, i, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
        if ( (int)a1 >= (int)v24 )
          v20 = (int)a1 >= SDWORD2(v24) ? a1 - DWORD2(v24) + 1 : 0;
        else
          v20 = v24 - a1;
        if ( v20 < j )
        {
          if ( v26 >= SDWORD1(v24) )
          {
            if ( v26 >= SHIDWORD(v24) )
            {
              v21 = v26 - HIDWORD(v24) + 1;
            }
            else
            {
              if ( !v20 )
                return i;
              v21 = 0;
            }
          }
          else
          {
            v21 = DWORD1(v24) - v26;
          }
          v22 = v20 * (__int64)v20;
          if ( v22 < j && v21 + v22 < j )
          {
            v23 = v21 * (__int64)v21 + v22;
            if ( v23 < j )
            {
              j = v23;
              v6 = i;
            }
          }
        }
      }
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 104);
    for ( k = -1; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__int64 *)&v24, i, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
        if ( (int)a1 >= (int)v24 )
          v15 = (int)a1 >= SDWORD2(v24) ? a1 - DWORD2(v24) + 1 : 0;
        else
          v15 = v24 - a1;
        if ( v15 < k )
        {
          if ( v26 >= SDWORD1(v24) )
          {
            if ( v26 >= SHIDWORD(v24) )
            {
              v16 = v26 - HIDWORD(v24) + 1;
            }
            else
            {
              if ( !v15 )
                return i;
              v16 = 0;
            }
          }
          else
          {
            v16 = DWORD1(v24) - v26;
          }
          v17 = v15 * v15;
          if ( v17 < k && v17 + v16 < k )
          {
            v18 = v16 * v16 + v17;
            if ( v18 < k )
            {
              k = v18;
              v6 = i;
            }
          }
        }
      }
    }
  }
  return v6;
}
