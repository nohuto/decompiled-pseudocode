/*
 * XREFs of _MonitorFromRect @ 0x140026BB0
 * Callers:
 *     _GetWindowPlacement @ 0x140025CD8 (_GetWindowPlacement.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1400F7E44 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80 (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014E9BC (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     CitGetWindowInfo @ 0x140150420 (CitGetWindowInfo.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z @ 0x140248C08 (-AdjustFinalDragRectToKeepCaptionOnScreen@@YAXPEBUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A6100 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A7BD4 (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C0CD0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C61F0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CD9E0 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(INT *a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v3; // rsi
  __int64 DispInfo; // r14
  unsigned __int16 v9; // bx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __int64 v13; // r9
  unsigned __int16 v14; // dx
  int v15; // ebx
  __int64 v16; // rcx
  INT v17; // eax
  INT v18; // r14d
  INT v19; // ebx
  INT v20; // edi
  INT v21; // ebx
  __m128i v22; // xmm6
  INT v23; // eax
  int v24; // edi
  INT v25; // eax
  INT v26; // r11d
  INT v27; // r8d
  INT v28; // ecx
  INT v29; // eax
  INT v30; // ecx
  INT v31; // edx
  __int64 v32; // r10
  int v33; // edx
  __int64 v34; // rdi
  __m128i si128; // xmm2
  int v36; // r14d
  __m128i *MonitorRectForDpi; // rax
  INT v38; // r9d
  INT v39; // r8d
  INT v40; // edx
  __m128i v41; // xmm0
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // xmm0_8
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r13d
  unsigned int v47; // edi
  __int64 v48; // rbx
  unsigned __int16 v49; // r12
  __int32 v50; // r8d
  __int32 v51; // ecx
  unsigned int v52; // ecx
  __int32 v53; // r8d
  __int32 v54; // edx
  __int32 v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  INT v58; // edx
  unsigned __int64 v59; // rdi
  __int64 v60; // rbx
  unsigned __int16 v61; // r12
  __int32 v62; // edx
  __int32 v63; // eax
  __int32 v64; // eax
  __int64 v65; // rdx
  __int32 v66; // eax
  INT v67; // ecx
  __int32 v68; // ecx
  __int32 v69; // ecx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  int v72; // [rsp+28h] [rbp-79h]
  int v73; // [rsp+38h] [rbp-69h]
  int v74; // [rsp+38h] [rbp-69h]
  unsigned __int16 v75; // [rsp+40h] [rbp-61h]
  int v76; // [rsp+40h] [rbp-61h]
  INT v77; // [rsp+4Ch] [rbp-55h]
  INT a[4]; // [rsp+58h] [rbp-49h] BYREF
  __m128i v79; // [rsp+68h] [rbp-39h] BYREF
  __int64 v80; // [rsp+78h] [rbp-29h]
  __m128i v81; // [rsp+80h] [rbp-21h] BYREF
  __m128i v82; // [rsp+90h] [rbp-11h] BYREF
  __int128 v83; // [rsp+A0h] [rbp-1h]

  v3 = 0LL;
  v80 = 0LL;
  v83 = 0LL;
  DispInfo = GetDispInfo();
  v79.m128i_i64[0] = DispInfo;
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( *a1 >= a1[2] || a1[1] >= a1[3] )
    return MonitorFromPoint(*(_QWORD *)a1, a2, CurrentThreadDpiAwarenessContext);
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
  v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v10 = (__int64 *)GetDispInfo();
  v11 = *v10;
  if ( v9 )
  {
    if ( *(_DWORD *)v11 != 1 )
    {
      v34 = v10[14];
      si128 = 0LL;
      *(_OWORD *)a = 0LL;
      if ( v34 )
      {
        v72 = _mm_cvtsi128_si32((__m128i)0LL);
        v36 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v76 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v74 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = GetMonitorRectForDpi(&v81, v34, v9);
            v38 = v72;
            v39 = v76;
            v40 = v74;
            v41 = *MonitorRectForDpi;
            v42 = MonitorRectForDpi->m128i_i64[0];
            v43 = _mm_srli_si128(v41, 8).m128i_u64[0];
            if ( v72 >= (int)v42 )
              v38 = v42;
            v44 = HIDWORD(v42);
            a[0] = v38;
            v72 = v38;
            if ( v76 >= (int)v44 )
              v39 = v44;
            a[1] = v39;
            v76 = v39;
            if ( v74 <= (int)v43 )
              v40 = v43;
            a[2] = v40;
            v74 = v40;
            if ( v36 <= SHIDWORD(v43) )
              v36 = HIDWORD(v43);
            a[3] = v36;
            si128 = _mm_load_si128((const __m128i *)a);
          }
          v34 = *(_QWORD *)(v34 + 56);
        }
        while ( v34 );
        DispInfo = v79.m128i_i64[0];
      }
      *(__m128i *)a = si128;
      goto LABEL_10;
    }
    v45 = GetDispInfo();
    v12 = *GetMonitorRectForDpi(&v82, *(_QWORD *)(v45 + 104), v9);
  }
  else
  {
    v12 = *(__m128i *)(v11 + 24);
  }
  *(__m128i *)a = v12;
LABEL_10:
  if ( *a1 <= a[0] && a1[1] <= a[1] && a1[2] >= a[2] && a1[3] >= a[3] )
    return *(_QWORD *)(GetDispInfo() + 104);
  v13 = *(_QWORD *)(DispInfo + 112);
  v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  v15 = 0;
  v73 = 0;
  while ( 1 )
  {
    v81.m128i_i64[0] = v13;
    if ( !v13 )
      break;
    v16 = *(_QWORD *)(v13 + 40);
    if ( (*(_DWORD *)(v16 + 24) & 1) != 0 )
    {
      v17 = *(unsigned __int16 *)(v16 + 62);
      v75 = *(_WORD *)(v16 + 60);
      *(_OWORD *)a = *(_OWORD *)(v16 + 28);
      if ( v14 )
      {
        v18 = v14;
        v19 = v17;
        v77 = a[1];
        v20 = EngMulDiv(a[0], v14, v17);
        v21 = EngMulDiv(v77, v18, v19);
        v22 = *(__m128i *)a;
        v82.m128i_i64[0] = *(_QWORD *)a;
        v23 = v20 + EngMulDiv(0, v18, v75);
        v24 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
        a[0] = v23;
        a[1] = v21 + EngMulDiv(v24 - v82.m128i_i32[1], v18, v75);
        a[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) - _mm_cvtsi128_si32(v22), v18, v75) + a[0];
        v25 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v22, 12)) - v24, v18, v75);
        v3 = v80;
        v15 = v73;
        v13 = v81.m128i_i64[0];
        a[3] = v25 + a[1];
      }
      v26 = a[0];
      v27 = a[2];
      if ( *a1 > a[0] )
        v26 = *a1;
      v28 = a1[2];
      LODWORD(v83) = v26;
      if ( v28 < a[2] )
        v27 = v28;
      DWORD2(v83) = v27;
      if ( v26 >= v27 )
        goto LABEL_26;
      v29 = a[1];
      if ( a1[1] > a[1] )
        v29 = a1[1];
      v30 = a1[3];
      v31 = a[3];
      DWORD1(v83) = v29;
      if ( v30 < a[3] )
        v31 = v30;
      HIDWORD(v83) = v31;
      if ( v29 < v31 )
      {
        v32 = v83 - *(_QWORD *)a1;
        if ( (_QWORD)v83 == *(_QWORD *)a1 )
          v32 = *((_QWORD *)&v83 + 1) - *((_QWORD *)a1 + 1);
        if ( !v32 )
          return v13;
        v33 = (v27 - v26) * (v31 - v29);
        if ( v33 > v15 )
        {
          v15 = v33;
          v73 = v33;
          v3 = v13;
          v80 = v13;
        }
      }
      else
      {
LABEL_26:
        v83 = 0LL;
      }
      v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    }
    v13 = *(_QWORD *)(v13 + 56);
  }
  if ( v15 > 0 )
    return v3;
  if ( !a2 )
    return 0LL;
  v46 = a2 - 1;
  if ( !v46 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( v46 == 1 )
  {
    if ( (unsigned int)(*a1 + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[1] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[2] + 0x8000) <= 0xFFFF
      && (unsigned int)(a1[3] + 0x8000) <= 0xFFFF )
    {
      v47 = -1;
      v48 = *(_QWORD *)(v79.m128i_i64[0] + 112);
      if ( v48 )
      {
        v49 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
        while ( 1 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v48 + 40) + 24LL) & 1) == 0 )
            goto LABEL_84;
          GetMonitorRectForDpi(&v79, v48, v49);
          v50 = a1[2];
          if ( v50 <= v79.m128i_i32[0] )
            break;
          if ( *a1 >= v79.m128i_i32[2] )
          {
            v51 = *a1 - v79.m128i_i32[2];
            goto LABEL_75;
          }
          v52 = 0;
LABEL_76:
          if ( v52 < v47 )
          {
            v53 = a1[3];
            if ( v53 <= v79.m128i_i32[1] )
            {
              v54 = v79.m128i_i32[1] - v53;
              goto LABEL_79;
            }
            v58 = a1[1];
            if ( v58 < v79.m128i_i32[3] )
            {
              v55 = 0;
            }
            else
            {
              v54 = v58 - v79.m128i_i32[3];
LABEL_79:
              v55 = v54 + 1;
            }
            v56 = v52 * v52;
            if ( v56 < v47 && v56 + v55 < v47 )
            {
              v57 = v55 * v55 + v56;
              if ( v57 < v47 )
              {
                v47 = v57;
                v3 = v48;
              }
            }
          }
LABEL_84:
          v48 = *(_QWORD *)(v48 + 56);
          if ( !v48 )
            return v3;
        }
        v51 = v79.m128i_i32[0] - v50;
LABEL_75:
        v52 = v51 + 1;
        goto LABEL_76;
      }
      return v3;
    }
    v59 = -1LL;
    v60 = *(_QWORD *)(v79.m128i_i64[0] + 112);
    if ( !v60 )
      return v3;
    v61 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    while ( 1 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v60 + 40) + 24LL) & 1) == 0 )
        goto LABEL_108;
      GetMonitorRectForDpi(&v79, v60, v61);
      v62 = a1[2];
      if ( v62 <= v79.m128i_i32[0] )
        break;
      if ( *a1 >= v79.m128i_i32[2] )
      {
        v63 = *a1 - v79.m128i_i32[2];
LABEL_98:
        v64 = v63 + 1;
        goto LABEL_99;
      }
      v64 = 0;
LABEL_99:
      v65 = v64;
      if ( v64 < v59 )
      {
        v66 = a1[3];
        if ( v66 <= v79.m128i_i32[1] )
        {
          v68 = v79.m128i_i32[1] - v66;
LABEL_103:
          v69 = v68 + 1;
        }
        else
        {
          v67 = a1[1];
          if ( v67 >= v79.m128i_i32[3] )
          {
            v68 = v67 - v79.m128i_i32[3];
            goto LABEL_103;
          }
          v69 = 0;
        }
        v70 = v65 * v65;
        if ( v70 < v59 && v70 + v69 < v59 )
        {
          v71 = v69 * (__int64)v69 + v70;
          if ( v71 < v59 )
          {
            v59 = v71;
            v3 = v60;
          }
        }
      }
LABEL_108:
      v60 = *(_QWORD *)(v60 + 56);
      if ( !v60 )
        return v3;
    }
    v63 = v79.m128i_i32[0] - v62;
    goto LABEL_98;
  }
  return 0LL;
}
