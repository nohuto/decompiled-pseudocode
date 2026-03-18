/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x140025C9C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     GetCaptionHeight @ 0x140073078 (GetCaptionHeight.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F14 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F54 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F98 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016DFE0 (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     GetScreenRectForWindow @ 0x1401D3188 (GetScreenRectForWindow.c)
 *     GetPhysicalScreenRect @ 0x1401DA3D0 (GetPhysicalScreenRect.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x140210A0C (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1402189EC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A5B7C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402A8A84 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402AA9F8 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1402AAD68 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     ?ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ @ 0x1402DC724 (-ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, unsigned int a3, int a4)
{
  __int64 v5; // rdx
  char v7; // r13
  __int64 v9; // rcx
  char v10; // di
  bool v11; // si
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int *v20; // r14
  char v21; // r13
  __int64 v22; // rax
  char v23; // si
  char v24; // r13
  char v25; // di
  int WindowState; // eax
  const char *StateString; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 DesktopWindow; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  _DWORD **v37; // rcx
  __int64 DispInfo; // rax
  int *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct tagRECT v42; // xmm0
  __int64 v43; // rdx
  __int64 TopLevelWindow; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rsi
  struct tagRECT v48; // xmm0
  __int64 v49; // rbx
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned int *v53; // rdx
  __int64 v54; // rcx
  BOOL v55; // eax
  int v56; // r8d
  char v57; // di
  bool v58; // si
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // di
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rcx
  char v68; // r14
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  const struct tagWND *v75; // rdx
  char v76; // r14
  int v77; // edi
  int v78; // esi
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  __int128 v82; // xmm0
  unsigned int v83; // eax
  const struct tagWND *v84; // rdx
  WindowArrangement *v85; // rcx
  char v86; // r14
  _BYTE *v87; // rcx
  bool v88; // al
  int v89; // ecx
  const struct tagWND *v90; // rdx
  WindowArrangement *v91; // rcx
  _BYTE *v92; // rcx
  bool v93; // al
  __int64 v94; // rcx
  int v95; // eax
  int v96; // eax
  __int64 v97; // rax
  __int64 Prop; // rdi
  int v99; // ecx
  unsigned int v100; // eax
  __int128 v101; // xmm0
  int v102; // r13d
  __int64 v103; // rdx
  int v104; // ecx
  unsigned int v105; // eax
  __int64 v106; // rdx
  char v107; // di
  bool v108; // si
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  int v112; // eax
  __int64 v113; // rcx
  bool v114; // si
  int v115; // edi
  __int64 v116; // rax
  int v117; // r8d
  int v118; // edx
  __int64 v119; // rax
  __int64 v120; // rdx
  unsigned int v121; // esi
  unsigned int v122; // edi
  bool v123; // r14
  char v124; // si
  const char *v125; // r13
  __int64 v126; // rax
  int v127; // r8d
  int v128; // edx
  __int64 v129; // r9
  const char *v130; // rax
  bool v131; // al
  __int64 v132; // rdx
  int v133; // eax
  char v134; // r14
  char v135; // si
  int v136; // edi
  __int64 v137; // rax
  int v138; // r8d
  int v139; // edx
  __int64 v140; // r9
  const char *v141; // rax
  int v142; // eax
  int v143; // eax
  char v144; // r12
  char v145; // r14
  int v146; // edi
  int v147; // esi
  __int64 v148; // rax
  int v149; // r8d
  int v150; // edx
  int v151; // [rsp+20h] [rbp-99h]
  int v152; // [rsp+28h] [rbp-91h]
  int v153; // [rsp+30h] [rbp-89h]
  int v154; // [rsp+38h] [rbp-81h]
  char v155; // [rsp+70h] [rbp-49h]
  unsigned int v156; // [rsp+74h] [rbp-45h]
  unsigned __int64 v157; // [rsp+78h] [rbp-41h]
  __int128 v159; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT v160; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v161; // [rsp+B0h] [rbp-9h] BYREF

  v156 = a3;
  v5 = 0LL;
  v7 = a3;
  v161 = 0LL;
  v159 = 0LL;
  v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      81,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v12,
      v7,
      a4,
      SBYTE2(a4));
  }
  v16 = PtiCurrent(v9, v5);
  if ( *((_QWORD *)v16 + 59) == *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18944)
    || (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
  {
    v19 = 16;
  }
  else
  {
    v19 = 0;
  }
  v20 = (int *)((char *)a2 + 120);
  *((_DWORD *)a2 + 50) = v19 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v21 = 0;
  }
  v155 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v155,
      *(_QWORD *)(v22 + 69416),
      4u,
      1u,
      0x52u,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    v20 = (int *)((char *)a2 + 120);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
  {
    v24 = 0;
    v23 = 0;
  }
  else
  {
    v23 = 1;
    v24 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v25 = 0;
  }
  if ( v23 || v25 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    v30 = W32GetUserSessionState(v29, v28);
    LOBYTE(v31) = v25;
    LOBYTE(v32) = v23;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v32,
      v31,
      *(_QWORD *)(v30 + 69416),
      5,
      1,
      83,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      (__int64)StateString);
  }
  *((_DWORD *)a2 + 70) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v34 == DesktopWindow )
  {
    LOBYTE(v35) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL);
    if ( (v35 & 8) != 0
      || (v35 & 0x80u) != 0LL
      || (v37 = *(_DWORD ***)(W32GetUserSessionState(v35, v34) + 57008), **v37 > 1u) )
    {
      v39 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetScreenRectForWindow((__m128i *)&v160, a1);
      v42 = (struct tagRECT)*GetPhysicalScreenRect(&v160, v43);
    }
    else
    {
      DispInfo = GetDispInfo(v37, v36);
      v39 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetMonitorWorkRectForWindow(
                                                  (__int64)&v160,
                                                  *(_QWORD *)(DispInfo + 104),
                                                  a1);
      v42 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v41, v40) + 104) + 40LL) + 44LL);
    }
    v161 = v42;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v34 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v45 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v45 )
      {
        v160 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v45, &v160) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, &v160.left);
      }
    }
    v39 = (int *)((char *)a2 + 88);
    v161 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v161, &v161, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v46 = *((_QWORD *)a1 + 13);
  HIDWORD(v157) = SHIWORD(a4);
  LODWORD(v157) = (__int16)a4;
  v47 = *(_QWORD *)(*(_QWORD *)(v46 + 40) + 168LL);
  if ( v47 )
  {
    v48 = *(struct tagRECT *)v20;
    v49 = v157;
    *(_QWORD *)&v159 = v157;
    v160 = v48;
    TransformRectBetweenCoordinateSpaces(&v160, &v160, v46, a1);
    TransformPointBetweenCoordinateSpaces(&v159, &v159, *((_QWORD *)a1 + 13), a1);
    v50 = GreRectInRegion(v47, &v160);
    v51 = DWORD1(v159);
    v52 = (unsigned int)v159;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | (v50 != 0 ? 0 : 0x40);
    v54 = *((_DWORD *)a2 + 50) & 0xFFFEFFFF | ((unsigned int)GrePtInRegion(v47, v52, v51) != 0 ? 0 : 0x10000);
  }
  else
  {
    v49 = v157;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | ((unsigned int)IntersectRect(&v159, v20, v39) != 0
                                                              ? 0
                                                              : 0x40);
    v55 = PtInRect(v39, v157);
    v54 = v56 & 0xFFFEFFFF | (!v55 ? 0x10000 : 0);
  }
  *((_DWORD *)a2 + 50) = v54;
  if ( (v54 & 0x40) != 0 )
  {
    v54 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v57 = 0;
    }
    v53 = &WPP_RECORDER_INITIALIZED;
    v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v57;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v61,
        v60,
        *(_QWORD *)(v59 + 69416),
        3,
        1,
        84,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x10000) != 0 )
  {
    v54 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v62 = 0;
    }
    v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v53);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v62;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v66,
        v65,
        *(_QWORD *)(v64 + 69416),
        3,
        1,
        85,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x8000) != 0 )
  {
    v67 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v24 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v68 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v68 = 0;
    }
    if ( v24 || v68 )
    {
      v69 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v53);
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v68,
        *(_QWORD *)(v69 + 69416),
        5u,
        1u,
        0x56u,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    v70 = W32GetUserSessionState(v67, v53);
    v160 = v161;
    CCursorClip::SetClip(*(CCursorClip **)(v70 + 36296), &v160);
    v24 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v71 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19928);
    v72 = *(_DWORD *)(v71 + 2124);
    *((_DWORD *)a2 + 28) = v72;
    *((_DWORD *)a2 + 26) = v72;
    v74 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v71, v73) + 19928) + 2128LL);
    *((_DWORD *)a2 + 29) = v74;
    *((_DWORD *)a2 + 27) = v74;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v24 = 1;
    }
    v75 = (const struct tagWND *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v76 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v76 = 0;
    }
    if ( v24 || v76 )
    {
      v77 = *((_DWORD *)a2 + 27);
      v78 = *((_DWORD *)a2 + 26);
      v79 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v80) = v76;
      LOBYTE(v81) = v24;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v81,
        v80,
        *(_QWORD *)(v79 + 69416),
        5,
        1,
        87,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v78,
        v77);
    }
  }
  v82 = *(_OWORD *)((char *)a2 + 120);
  v83 = *((_DWORD *)a2 + 50) & 0xFFF7FFFC;
  *((_DWORD *)a2 + 62) = 4;
  *((_DWORD *)a2 + 50) = v83 & 0xFF7FFF7F;
  *(_OWORD *)((char *)a2 + 24) = v82;
  *(_OWORD *)((char *)a2 + 40) = v82;
  *(_OWORD *)((char *)a2 + 56) = v82;
  *(_OWORD *)((char *)a2 + 72) = v82;
  v86 = 0;
  if ( !WindowArrangement::SizeWithSnapAllowed(a1, v75)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v85, (__int64)v84)
    || (v87 = (_BYTE *)*((_QWORD *)a1 + 5), (v87[30] & 4) == 0)
    || (v87[24] & 0x40) != 0
    || (v87[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v88 = IsGhostWindowClass(a1, (__int64)v84), v89 = 256, v88) )
  {
    v89 = 0;
  }
  *((_DWORD *)a2 + 50) = v89 | *((_DWORD *)a2 + 50) & 0xFFFFFEFF;
  if ( !WindowArrangement::MoveWithArrangementAllowed(a1, v84)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v91, (__int64)v90)
    || (v92 = (_BYTE *)*((_QWORD *)a1 + 5), (v92[30] & 4) == 0)
    || (v92[24] & 0x40) != 0
    || (v92[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v93 = IsGhostWindowClass(a1, (__int64)v90), v94 = 512LL, v93) )
  {
    v94 = 0LL;
  }
  v95 = v94 | *((_DWORD *)a2 + 50) & 0xFFFFFDFF;
  *((_DWORD *)a2 + 50) = v95;
  if ( (v95 & 0x300) != 0x300
    && (IsArranged(a1) || WindowArrangement::IsSupported(a1, v90) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
  {
    v96 = *((_DWORD *)a2 + 50);
    if ( (v96 & 0x200) == 0 )
    {
      v96 |= 0x40200u;
      *((_DWORD *)a2 + 50) = v96;
    }
    if ( (v96 & 0x100) == 0 )
      *((_DWORD *)a2 + 50) = v96 | 0x20100;
  }
  v97 = W32GetUserSessionState(v94, v90);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v97 + 41398), 1u);
  if ( IsArranged(a1) || (v99 = 0, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
    v99 = 1024;
  v100 = v99 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  *((_DWORD *)a2 + 50) = v100;
  if ( Prop && (v100 & 0x400) != 0 )
    v101 = *(_OWORD *)(Prop + 20);
  else
    v101 = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)a2 + 152) = v101;
  if ( (v100 & 0x300) == 0 )
  {
    v102 = v156;
    *((_QWORD *)a2 + 30) = MonitorFromPoint(v49, 2u, 0);
    goto LABEL_146;
  }
  v102 = v156;
  if ( (v100 & 0x400) == 0 || (v104 = 128, v156 != 9) )
    v104 = 0;
  v105 = v104 | v100 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = v105;
  if ( !Prop )
  {
    if ( (v105 & 0x400) != 0 )
    {
      LODWORD(v159) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5925LL);
    }
    if ( !CHECKPOINT::Restore(*((struct tagWND **)a2 + 2), (const struct tagRECT *)((char *)a2 + 120)) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v107 = 0;
      }
      v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v107 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v106);
        LOBYTE(v110) = v108;
        LOBYTE(v111) = v107;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v111,
          v110,
          *(_QWORD *)(v109 + 69416),
          2,
          1,
          88,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
    }
  }
  HitTargetAndMonitorFromPoint(v156, v49, (*((_DWORD *)a2 + 50) >> 11) & 7, (char *)a2 + 240, (char *)a2 + 248);
  if ( (unsigned int)Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsArranged(a1) )
    {
      v112 = *((_DWORD *)a2 + 50);
      *((_DWORD *)a2 + 62) = 0;
      if ( (v112 & 0x3800) == 0 && v156 == 9 )
        goto LABEL_145;
    }
  }
  else if ( IsArranged(a1) )
  {
    v112 = *((_DWORD *)a2 + 50);
    if ( (v112 & 0x3800) == 0 && v156 == 9 )
    {
      *((_DWORD *)a2 + 62) = 0;
LABEL_145:
      *((_DWORD *)a2 + 50) = v112 & 0xFFFFC7FF | 0x2000;
    }
  }
LABEL_146:
  v113 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
  {
    v86 = 1;
  }
  v114 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v86 || v114 )
  {
    v115 = *((_DWORD *)a2 + 62);
    v116 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v103);
    LOBYTE(v117) = v114;
    LOBYTE(v118) = v86;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v118,
      v117,
      *(_QWORD *)(v116 + 69416),
      5,
      1,
      89,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v115);
  }
  *((_DWORD *)a2 + 50) &= ~0x8000000u;
  if ( v102 )
  {
    if ( v102 != 10 )
      goto LABEL_169;
    v102 = 9;
    v156 = 9;
  }
  v119 = W32GetUserSessionState(v113, v103);
  zzzSetCursor(*(struct tagCURSOR **)(v119 + 26904), v120);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = (__int16)a4;
  *((_DWORD *)a2 + 48) = SHIWORD(a4);
  v121 = (*((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8)) / 2;
  LODWORD(v157) = v121;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || v102 != 9 )
    HIDWORD(v157) = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
  else
    HIDWORD(v157) = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
  v49 = v157;
  zzzInternalSetCursorPos(v121, HIDWORD(v157), 1, 0);
  xxxMS_FlushWigglies();
  v113 = *((unsigned int *)a2 + 50);
  if ( (v113 & 0x100) == 0 )
    *((_DWORD *)a2 + 62) = 4;
  LODWORD(v113) = v113 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = v113;
LABEL_169:
  v122 = ((*(_DWORD *)(W32GetUserSessionState(v113, v103) + 67056) & 0x100000) != 0 ? 0x20 : 0) | *((_DWORD *)a2 + 50) & 0xFFFFFFDF;
  *((_DWORD *)a2 + 50) = v122;
  v123 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v124 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v124 = 0;
  }
  v125 = "yes";
  if ( v123 || v124 )
  {
    v126 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v127) = v124;
    LOBYTE(v128) = v123;
    v129 = *(_QWORD *)(v126 + 69416);
    v130 = "yes";
    if ( (v122 & 0x20) == 0 )
      v130 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v128,
      v127,
      v129,
      5,
      1,
      90,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      (__int64)v130);
  }
  *((_QWORD *)a2 + 28) = *((_QWORD *)a2 + 30);
  *((_DWORD *)a2 + 58) = *((_DWORD *)a2 + 62);
  *((_QWORD *)a2 + 27) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v131 = IsArranged(a1);
  v132 = (v131 << 29) | *((_DWORD *)a2 + 50) & 0xDFFFFFFF;
  v133 = (v132 ^ (v132 ^ (((v131 << 29) | *((_DWORD *)a2 + 50) & 0xDFFFFFFF) >> 1)) & 0x10000000) & 0xFFDFBFFF;
  *((_DWORD *)a2 + 50) = v133;
  if ( (v133 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v133 & 0xFFFFFCFF;
    if ( IsArranged(a1) )
      *((_DWORD *)a2 + 50) |= 0x60300u;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v134 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v134 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v135 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v135 = 0;
  }
  if ( v134 || v135 )
  {
    v136 = *((_DWORD *)a2 + 50);
    v137 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v132);
    LOBYTE(v138) = v135;
    LOBYTE(v139) = v134;
    v140 = *(_QWORD *)(v137 + 69416);
    v141 = "yes";
    if ( (v136 & 0x200) == 0 )
      v141 = "no";
    if ( (v136 & 0x100) == 0 )
      v125 = "no";
    WPP_RECORDER_AND_TRACE_SF_ss(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v139,
      v138,
      v140,
      v151,
      v152,
      v153,
      v154,
      (__int64)v125,
      (__int64)v141);
  }
  *((_DWORD *)a2 + 45) = dword_14035A650[v156];
  *((_DWORD *)a2 + 46) = dword_14035A620[v156];
  v142 = dword_14035A6C0[v156];
  if ( v142 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v142 + 30) - v157;
  v143 = dword_14035A690[v156];
  if ( v143 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v143 + 30) - HIDWORD(v157);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v144 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v144 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v145 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v145 = 0;
  }
  if ( v144 || v145 )
  {
    v146 = *((_DWORD *)a2 + 43);
    v147 = *((_DWORD *)a2 + 42);
    v148 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v132);
    LOBYTE(v149) = v145;
    LOBYTE(v150) = v144;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v150,
      v149,
      *(_QWORD *)(v148 + 69416),
      5,
      1,
      92,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v147,
      v146);
  }
  *(_QWORD *)((char *)a2 + 252) = v49;
  *((_DWORD *)a2 + 44) = v156;
  *(_OWORD *)((char *)a2 + 356) = 0LL;
  *((_QWORD *)a2 + 47) = 0LL;
  *((_WORD *)a2 + 186) = 0;
  *((_DWORD *)a2 + 88) = 0;
  *((_BYTE *)a2 + 392) = 0;
  *((_DWORD *)a2 + 100) = 0;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_DWORD *)a2 + 74) |= 0xFu;
    *((_QWORD *)a2 + 36) = a2;
    MoveSizeReadAndClearMouseMoveBoundHitFlags();
    MoveSizeHaptic::ResetStateForNewRound((struct MOVESIZEDATA *)((char *)a2 + 288));
  }
}
