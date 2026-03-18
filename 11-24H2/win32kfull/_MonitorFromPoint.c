/*
 * XREFs of _MonitorFromPoint @ 0x140027270
 * Callers:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     GetDPITransformationMonitor @ 0x14006E2CC (GetDPITransformationMonitor.c)
 *     NtUserCalculatePopupWindowPosition @ 0x140098D20 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x140207810 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     zzzResetSharedDesktops @ 0x14024E3F0 (zzzResetSharedDesktops.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x140255950 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A5B7C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v3; // rbp
  INT v6; // ebx
  __int64 DispInfo; // rdi
  INT v9; // esi
  __int64 v10; // r13
  unsigned int v11; // r8d
  __int64 v12; // rcx
  INT v13; // r14d
  INT v14; // edx
  INT v15; // edi
  INT v16; // r15d
  INT v17; // esi
  __m128i v18; // xmm6
  INT v19; // ebp
  INT v20; // eax
  int v21; // esi
  INT v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // edx
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  __int64 v29; // rbp
  INT v30; // r14d
  int v31; // edx
  int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  INT a[4]; // [rsp+30h] [rbp-78h] BYREF
  int v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+50h] [rbp-58h]

  v3 = 0LL;
  v37 = a1;
  v38 = 0LL;
  v6 = a1;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*((_QWORD *)PtiCurrent() + 62)
       || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  if ( a2 == 2 )
  {
    v9 = HIDWORD(v37);
    if ( (unsigned int)(v6 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(v37) + 0x8000) > 0xFFFF )
    {
      v27 = *(_QWORD *)(DispInfo + 112);
      v28 = -1LL;
      while ( v27 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 24LL) & 1) != 0 )
        {
          GetMonitorRectForDpi((__m128i *)a, v27, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
          if ( v6 < a[0] )
            v31 = a[0] - v6;
          else
            v31 = v6 < a[2] ? 0 : v6 - a[2] + 1;
          if ( v31 < v28 )
          {
            if ( v9 < a[1] )
            {
              v32 = a[1] - v9;
            }
            else if ( v9 < a[3] )
            {
              if ( !v31 )
                return v27;
              v32 = 0;
            }
            else
            {
              v32 = v9 - a[3] + 1;
            }
            v33 = v31 * (__int64)v31;
            if ( v33 < v28 && v32 + v33 < v28 )
            {
              v34 = v32 * (__int64)v32 + v33;
              if ( v34 < v28 )
              {
                v28 = v34;
                v3 = v27;
              }
            }
          }
        }
        v27 = *(_QWORD *)(v27 + 56);
      }
    }
    else
    {
      v10 = *(_QWORD *)(DispInfo + 112);
      v11 = -1;
      v36 = -1;
      while ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 40);
        if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
        {
          v13 = *(unsigned __int16 *)(v12 + 60);
          v14 = *(unsigned __int16 *)(v12 + 62);
          *(_OWORD *)a = *(_OWORD *)(v12 + 28);
          if ( ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) != 0 )
          {
            v15 = v14;
            v16 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
            v17 = EngMulDiv(a[0], v16, v14);
            v18 = *(__m128i *)a;
            v19 = EngMulDiv(a[1], v16, v15);
            v20 = v17 + EngMulDiv(0, v16, v13);
            v21 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a, 4));
            a[0] = v20;
            a[1] = v19 + EngMulDiv(v21 - a[1], v16, v13);
            a[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - _mm_cvtsi128_si32(v18), v16, v13) + a[0];
            v22 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v18, 12)) - v21, v16, v13);
            v9 = HIDWORD(v37);
            v3 = v38;
            v11 = v36;
            a[3] = v22 + a[1];
          }
          if ( v6 < a[0] )
            v23 = a[0] - v6;
          else
            v23 = v6 >= a[2] ? v6 - a[2] + 1 : 0;
          if ( v23 < v11 )
          {
            if ( v9 < a[1] )
            {
              v24 = a[1] - v9;
            }
            else if ( v9 >= a[3] )
            {
              v24 = v9 - a[3] + 1;
            }
            else
            {
              if ( !v23 )
                return v10;
              v24 = 0;
            }
            v25 = v23 * v23;
            if ( v25 < v11 && v25 + v24 < v11 )
            {
              v26 = v24 * v24 + v25;
              if ( v26 < v11 )
              {
                v11 = v26;
                v36 = v26;
                v3 = v10;
                v38 = v10;
              }
            }
          }
        }
        v10 = *(_QWORD *)(v10 + 56);
      }
    }
    return v3;
  }
  else
  {
    if ( a2 >= 2 )
      return 0LL;
    v29 = *(_QWORD *)(DispInfo + 112);
    v30 = HIDWORD(v37);
    while ( v29 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__m128i *)a, v29, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
        if ( v6 >= a[0] && v6 < a[2] && v30 >= a[1] && v30 < a[3] )
          return v29;
      }
      v29 = *(_QWORD *)(v29 + 56);
    }
    if ( a2 == 1 )
      return *(_QWORD *)(GetDispInfo() + 104);
    else
      return 0LL;
  }
}
