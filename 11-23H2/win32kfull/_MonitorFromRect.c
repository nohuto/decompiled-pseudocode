/*
 * XREFs of _MonitorFromRect @ 0x1C00AE960
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0045FC8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C005DA2C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     CitGetWindowInfo @ 0x1C005FC80 (CitGetWindowInfo.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxSetWindowPlacement @ 0x1C00D87B8 (xxxSetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     CkptUpdate @ 0x1C00E1E24 (CkptUpdate.c)
 *     GetNewMonitor @ 0x1C010C10C (GetNewMonitor.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C01242E4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8228 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BB7B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EB3CC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1C01F26BC (xxxSetInternalWindowPos.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C02262B8 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023B1B4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D090 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     GetScreenRectForDpi @ 0x1C00AE544 (GetScreenRectForDpi.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C00AEBB0 (_MonitorFromPoint.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v5; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 DispInfo; // r13
  unsigned __int16 v12; // r14
  int v13; // r12d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // r15
  __int32 v23; // eax
  __int32 v24; // ecx
  unsigned int v25; // ecx
  __int32 v26; // eax
  __int32 v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned __int32 v30; // ecx
  __int64 v31; // rbx
  unsigned __int64 v32; // rsi
  __int32 v33; // edx
  __int32 v34; // eax
  __int32 v35; // eax
  __int64 v36; // rdx
  __int32 v37; // eax
  __int32 v38; // ecx
  __int32 v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int16 v42; // [rsp+30h] [rbp-40h]
  __m128i v43; // [rsp+40h] [rbp-30h] BYREF
  __int64 v44; // [rsp+50h] [rbp-20h]
  __int128 v45; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  CurrentThreadDpiAwarenessContext = a3;
  v44 = 0LL;
  v5 = a2;
  v45 = 0LL;
  DispInfo = GetDispInfo(a1, a2, a3);
  if ( **(_DWORD **)DispInfo == 1 && v5 )
    return *(_QWORD *)(GetDispInfo(v8, v7, v9) + 96);
  if ( *(_DWORD *)a1 >= *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) >= *(_DWORD *)(a1 + 12) )
    return MonitorFromPoint(*(_QWORD *)a1, v5, CurrentThreadDpiAwarenessContext);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*((_QWORD *)PtiCurrentShared() + 57)
       || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  GetScreenRectForDpi(&v43, v12, v9);
  if ( *(_DWORD *)a1 <= v43.m128i_i32[0]
    && *(_DWORD *)(a1 + 4) <= v43.m128i_i32[1]
    && *(_DWORD *)(a1 + 8) >= v43.m128i_i32[2]
    && *(_DWORD *)(a1 + 12) >= v43.m128i_i32[3] )
  {
    return *(_QWORD *)(GetDispInfo(v8, v7, v9) + 96);
  }
  v13 = 0;
  v14 = *(_QWORD *)(DispInfo + 104);
  if ( v14 )
  {
    do
    {
      v8 = *(_QWORD *)(v14 + 40);
      if ( (*(_DWORD *)(v8 + 24) & 1) != 0 )
      {
        v15 = *(unsigned __int16 *)(v8 + 62);
        v42 = *(_WORD *)(v8 + 60);
        v16 = *(__m128i *)(v8 + 28);
        v43 = v16;
        if ( v12 )
        {
          v17 = v43.m128i_i64[0];
          v18 = ExpandMonitorSpaceVertex(v12, v15, v43.m128i_i64[0]);
          ScaleDPIRect((unsigned int)&v43, (unsigned int)&v43, v12, v42, v18, v17);
          v16 = v43;
          v3 = v44;
        }
        v43 = v16;
        if ( (unsigned int)IntersectRect(&v45, a1, &v43) )
        {
          v8 = v45 - *(_QWORD *)a1;
          if ( (_QWORD)v45 == *(_QWORD *)a1 )
            v8 = *((_QWORD *)&v45 + 1) - *(_QWORD *)(a1 + 8);
          if ( !v8 )
            return v14;
          v7 = (unsigned int)(DWORD2(v45) - v45);
          if ( (int)v7 * (HIDWORD(v45) - DWORD1(v45)) > v13 )
          {
            v3 = v14;
            v13 = v7 * (HIDWORD(v45) - DWORD1(v45));
            v44 = v14;
          }
        }
      }
      v14 = *(_QWORD *)(v14 + 56);
    }
    while ( v14 );
    if ( v13 > 0 )
      return v3;
  }
  if ( !v5 )
    return 0LL;
  v19 = v5 - 1;
  if ( !v19 )
    return *(_QWORD *)(GetDispInfo(v8, v7, v9) + 96);
  if ( v19 != 1 )
    return 0LL;
  if ( (unsigned int)(*(_DWORD *)a1 + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 4) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 8) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 12) + 0x8000) <= 0xFFFF )
  {
    v20 = *(_QWORD *)(DispInfo + 104);
    v21 = -1;
    v22 = v44;
    while ( 1 )
    {
      if ( !v20 )
        return v22;
      if ( (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 24LL) & 1) != 0 )
        break;
LABEL_57:
      v20 = *(_QWORD *)(v20 + 56);
    }
    GetMonitorRectForDpi(v43.m128i_i64, v20, v12);
    v23 = *(_DWORD *)(a1 + 8);
    if ( v23 > v43.m128i_i32[0] )
    {
      if ( *(_DWORD *)a1 < v43.m128i_i32[2] )
      {
        v25 = 0;
        goto LABEL_47;
      }
      v24 = *(_DWORD *)a1 - v43.m128i_i32[2];
    }
    else
    {
      v24 = v43.m128i_i32[0] - v23;
    }
    v25 = v24 + 1;
LABEL_47:
    if ( v25 < v21 )
    {
      v26 = *(_DWORD *)(a1 + 12);
      if ( v26 > v43.m128i_i32[1] )
      {
        v28 = *(_DWORD *)(a1 + 4);
        if ( v28 >= v43.m128i_i32[3] )
          v27 = v28 - v43.m128i_i32[3] + 1;
        else
          v27 = 0;
      }
      else
      {
        v27 = v43.m128i_i32[1] - v26 + 1;
      }
      v29 = v25 * v25;
      if ( v29 < v21 && v29 + v27 < v21 )
      {
        v30 = v27 * v27 + v29;
        if ( v30 < v21 )
        {
          v21 = v30;
          v22 = v20;
        }
      }
    }
    goto LABEL_57;
  }
  v31 = *(_QWORD *)(DispInfo + 104);
  v32 = -1LL;
  v22 = v44;
  while ( v31 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 24LL) & 1) == 0 )
      goto LABEL_79;
    GetMonitorRectForDpi(v43.m128i_i64, v31, v12);
    v33 = *(_DWORD *)(a1 + 8);
    if ( v33 <= v43.m128i_i32[0] )
    {
      v34 = v43.m128i_i32[0] - v33;
LABEL_68:
      v35 = v34 + 1;
      goto LABEL_69;
    }
    if ( *(_DWORD *)a1 >= v43.m128i_i32[2] )
    {
      v34 = *(_DWORD *)a1 - v43.m128i_i32[2];
      goto LABEL_68;
    }
    v35 = 0;
LABEL_69:
    v36 = v35;
    if ( v35 < v32 )
    {
      v37 = *(_DWORD *)(a1 + 12);
      if ( v37 > v43.m128i_i32[1] )
      {
        v39 = *(_DWORD *)(a1 + 4);
        v38 = v39 >= v43.m128i_i32[3] ? v39 - v43.m128i_i32[3] + 1 : 0;
      }
      else
      {
        v38 = v43.m128i_i32[1] - v37 + 1;
      }
      v40 = v36 * v36;
      if ( v40 < v32 && v38 + v40 < v32 )
      {
        v41 = v38 * (__int64)v38 + v40;
        if ( v41 < v32 )
        {
          v32 = v41;
          v22 = v31;
        }
      }
    }
LABEL_79:
    v31 = *(_QWORD *)(v31 + 56);
  }
  return v22;
}
