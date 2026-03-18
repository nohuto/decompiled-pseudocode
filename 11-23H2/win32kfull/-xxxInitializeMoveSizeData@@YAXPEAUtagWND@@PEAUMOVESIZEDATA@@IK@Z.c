/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F41C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001CEA8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C005DEC0 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C005DEF8 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005E89C (GetMonitorWorkRectForWindow.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE74 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FE90 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C005FEAC (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C0080820 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C00AEBB0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00B03A0 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     GetCaptionHeight @ 0x1C00EA380 (GetCaptionHeight.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetScreenRectForWindow @ 0x1C01571C4 (GetScreenRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A5C10 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E9628 (-HitTargetAndMonitorFromPoint@@YA_NUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRE.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01ECF3C (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE0D0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1C01F20CC (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C022D5A4 (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022D5EC (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022D628 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022D654 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, int a3, int a4)
{
  char v8; // dl
  int HasForeground; // eax
  int v10; // ecx
  char v11; // dl
  char v12; // r11
  char v13; // r8
  int WindowState; // eax
  const char *StateString; // rax
  __int64 v16; // r10
  char v17; // r8
  char v18; // r11
  __int64 DesktopWindow; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 DispInfo; // rax
  int *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct tagRECT v27; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r12d
  __int64 v32; // r15
  __int128 v33; // xmm0
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // eax
  int v39; // edx
  unsigned int v40; // r8d
  BOOL v41; // eax
  int v42; // r8d
  char v43; // dl
  char v44; // r8
  const struct tagWND *v45; // rdx
  int v46; // ecx
  int v47; // ecx
  char v48; // r8
  __int128 v49; // xmm0
  _DWORD *v50; // r15
  int v51; // edi
  unsigned int v52; // eax
  bool v53; // al
  const struct tagWND *v54; // rdx
  WindowArrangement *v55; // rcx
  int v56; // r8d
  _BYTE *v57; // rcx
  int v58; // ecx
  bool v59; // al
  WindowArrangement *v60; // rcx
  int v61; // r8d
  int v62; // r10d
  _BYTE *v63; // rcx
  int v64; // eax
  unsigned int v65; // edx
  const struct tagWND *v66; // rdx
  WindowArrangement *v67; // rcx
  int v68; // r10d
  int v69; // r9d
  int v70; // edx
  __int64 v71; // rcx
  int v72; // r8d
  __int64 v73; // r9
  int v74; // eax
  __int128 *Prop; // rdi
  int v76; // edx
  int v77; // r8d
  unsigned int v78; // edx
  __int128 v79; // xmm0
  __int64 v80; // rcx
  bool v81; // al
  int v82; // edx
  int v83; // r10d
  int v84; // r9d
  const struct tagWND *v85; // rcx
  int v86; // edx
  const struct tagWND *v87; // rcx
  int v88; // r10d
  int v89; // r11d
  int v90; // edx
  int v91; // edx
  int v92; // r10d
  int v93; // r11d
  int v94; // edx
  char v95; // dl
  char v96; // r8
  int v97; // eax
  unsigned int v98; // edi
  int v99; // ecx
  int v100; // ecx
  char v101; // dl
  char v102; // r8
  const char *v103; // rdi
  const char *v104; // rax
  int v105; // eax
  __int64 v106; // rax
  int v107; // ecx
  int v108; // r9d
  int v109; // ecx
  int v110; // eax
  unsigned int v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // edx
  int v114; // r8d
  char v115; // dl
  const char *v116; // rax
  bool v117; // cf
  int v118; // eax
  int v119; // eax
  char v120; // dl
  char v121; // r8
  int v122; // [rsp+20h] [rbp-89h]
  int v123; // [rsp+28h] [rbp-81h]
  int v124; // [rsp+30h] [rbp-79h]
  int v125; // [rsp+38h] [rbp-71h]
  __int64 v126; // [rsp+40h] [rbp-69h]
  __int64 v127; // [rsp+48h] [rbp-61h]
  unsigned __int64 v128; // [rsp+70h] [rbp-39h]
  __int128 v129; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT v130; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT v131; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v132; // [rsp+B0h] [rbp+7h] BYREF

  v131 = 0LL;
  v129 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v126 = *(_QWORD *)a1;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control,
      v122,
      1u,
      0x4Au,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground
    || (HasForeground = CoreWindowProp::CompositeAppHasForeground(a1), v10 = 0, HasForeground) )
  {
    v10 = 16;
  }
  *((_DWORD *)a2 + 50) = v10 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x4Bu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(v16 + 24),
      v18,
      v17,
      (__int64)gFullLog,
      5u,
      1u,
      0x4Cu,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      StateString);
  }
  *((_DWORD *)a2 + 72) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v20 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v23 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetScreenRectForWindow((__m128i *)&v130, a1);
      v27 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v20, v21);
      v23 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetMonitorWorkRectForWindow(
                                                  (__int64)&v130,
                                                  *(_QWORD *)(DispInfo + 96),
                                                  a1);
      v27 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v25, v24, v26) + 96) + 40LL) + 44LL);
    }
    v131 = v27;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v29 )
      {
        v132 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v29, &v132) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, (int *)&v132);
      }
    }
    v23 = (int *)((char *)a2 + 88);
    v131 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v131, &v131, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v30 = *((_QWORD *)a1 + 13);
  v31 = SHIWORD(a4);
  LODWORD(v128) = (__int16)a4;
  HIDWORD(v128) = SHIWORD(a4);
  v32 = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 168LL);
  if ( v32 )
  {
    v33 = *(_OWORD *)((char *)a2 + 120);
    v34 = v128;
    *(_QWORD *)&v129 = v128;
    v132 = v33;
    TransformRectBetweenCoordinateSpaces(&v132, &v132, v30, a1);
    TransformPointBetweenCoordinateSpaces(&v129, &v129, *((_QWORD *)a1 + 13), a1);
    v35 = GreRectInRegion(v32, &v132);
    v36 = DWORD1(v129);
    v37 = (unsigned int)v129;
    *((_DWORD *)a2 + 50) = (v35 != 0 ? 0 : 0x40) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v38 = ((unsigned int)GrePtInRegion(v32, v37, v36) != 0 ? 0 : 0x100000) | *((_DWORD *)a2 + 50) & 0xFFEFFFFF;
  }
  else
  {
    v34 = v128;
    *((_DWORD *)a2 + 50) = ((unsigned int)IntersectRect(&v129, (int *)a2 + 30, v23) == 0 ? 0x40 : 0) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v41 = PtInRect(v23, v128);
    v40 = v42 & 0xFFEFFFFF;
    v38 = v40 | (!v41 ? 0x100000 : 0);
  }
  *((_DWORD *)a2 + 50) = v38;
  if ( (v38 & 0x40) != 0 )
  {
    LOBYTE(v39) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v39,
        v40,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        3,
        1,
        77,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x100000) != 0 )
  {
    LOBYTE(v39) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v39,
        v40,
        (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
        3,
        1,
        78,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x80000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v43 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v44 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v44 = 0;
    }
    if ( v43 || v44 )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v43,
        v44,
        (__int64)gFullLog,
        5u,
        1u,
        0x4Fu,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    v130 = v131;
    CCursorClip::SetClip(gpCursorClip, &v130);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v45 = (const struct tagWND *)gpsi;
    v46 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)a2 + 28) = v46;
    *((_DWORD *)a2 + 26) = v46;
    v47 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)a2 + 29) = v47;
    *((_DWORD *)a2 + 27) = v47;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v45) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v48 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v48 = 0;
    }
    if ( (_BYTE)v45 || v48 )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        (char)v45,
        v48,
        (__int64)gFullLog,
        5u,
        1u,
        0x50u,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  v49 = *(_OWORD *)((char *)a2 + 120);
  v50 = (_DWORD *)((char *)a2 + 240);
  v51 = v128;
  v52 = *((_DWORD *)a2 + 50) & 0xDE7FFF7C;
  *((_DWORD *)a2 + 60) = 4;
  *((_DWORD *)a2 + 50) = v52;
  *(_OWORD *)((char *)a2 + 24) = v49;
  *((_DWORD *)a2 + 61) = v128;
  *(_OWORD *)((char *)a2 + 40) = v49;
  *((_DWORD *)a2 + 62) = v31;
  *(_OWORD *)((char *)a2 + 56) = v49;
  *((_DWORD *)a2 + 63) = v128;
  *(_OWORD *)((char *)a2 + 72) = v49;
  *((_DWORD *)a2 + 64) = v31;
  v53 = WindowArrangement::SizeWithSnapAllowed(a1, v45);
  v56 = 0;
  if ( !v53
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v55)
    || (v57 = (_BYTE *)*((_QWORD *)a1 + 5), (v57[30] & 4) == 0)
    || (v57[24] & 0x40) != 0
    || (v57[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v54 = *(const struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL),
        v58 = 1024,
        *(_WORD *)v54 == *(_WORD *)(gpsi + 900LL)) )
  {
    v58 = v56;
  }
  *((_DWORD *)a2 + 50) = v58 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  v59 = WindowArrangement::MoveWithArrangementAllowed(a1, v54);
  v61 = 0;
  if ( !v59
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v60)
    || (v63 = (_BYTE *)*((_QWORD *)a1 + 5), (v63[30] & 4) == 0)
    || (v63[24] & 0x40) != 0
    || (v63[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v64 = v62, **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL)) )
  {
    v64 = v61;
  }
  v65 = v64 | *((_DWORD *)a2 + 50) & 0xFFFFF7FF;
  *((_DWORD *)a2 + 50) = v65;
  if ( (v65 & 0xC00) != 0xC00 )
  {
    if ( !IsSemiMaximized(a1) )
    {
      if ( !WindowArrangement::IsSupported(v67, v66) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_113;
      LODWORD(v66) = *((_DWORD *)a2 + 50);
      v68 = 2048;
    }
    if ( ((unsigned int)v66 & v68) == 0 )
    {
      LODWORD(v66) = v68 | (unsigned int)v66 | 0x400000;
      *((_DWORD *)a2 + 50) = (_DWORD)v66;
    }
    if ( ((unsigned __int16)v66 & 0x400) == 0 )
      *((_DWORD *)a2 + 50) = (unsigned int)v66 | 0x200400;
  }
LABEL_113:
  if ( (*((_DWORD *)a2 + 50) & 0xC00) != 0 )
  {
    if ( IsSemiMaximized(a1) || (v74 = v72, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
      v74 = 4096;
    *((_DWORD *)a2 + 50) = v74 | v70 & 0xFFFFEFFF;
    Prop = (__int128 *)GetProp(v71, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL, v73);
    if ( !Prop )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5751);
      Prop = (__int128 *)CkptRestore(*((struct tagWND **)a2 + 2), (struct MOVESIZEDATA *)((char *)a2 + 120));
      if ( !Prop )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v76) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v76) = 0;
        }
        if ( (_BYTE)v76 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v77) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v76,
            v77,
            (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            2,
            1,
            81,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
      }
    }
    v78 = *((_DWORD *)a2 + 50) | 0x800000;
    *((_DWORD *)a2 + 50) = v78;
    if ( Prop && (v78 & 0x1000) != 0 )
      v79 = *Prop;
    else
      v79 = *(_OWORD *)((char *)a2 + 120);
    v80 = *(_QWORD *)((char *)a2 + 268);
    *(_OWORD *)((char *)a2 + 152) = v79;
    HitTargetAndMonitorFromPoint(v80, (v78 >> 15) & 7, (__int64 *)a2 + 29, (_DWORD *)a2 + 60);
    if ( (*((_DWORD *)a2 + 50) & 0x38000) != 0 )
    {
      v84 = 0;
    }
    else
    {
      v81 = IsSemiMaximized(a1);
      v84 = 0;
      if ( v81 && a3 == 9 )
        *((_DWORD *)a2 + 50) = v83 | v82 & 0xFFFE7FFF;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsVerticallyMaximized(a1) )
    {
      *v50 = v84;
      if ( !IsVerticallyMaximized(a1) || (unsigned int)(a3 - 6) > 2 )
        goto LABEL_157;
      goto LABEL_156;
    }
    if ( IsLeftSemiMaximized(v85) )
    {
      v90 = v89 & v86;
      if ( v90 == v88 )
        goto LABEL_146;
      if ( v90 )
      {
LABEL_145:
        *v50 = 1;
LABEL_157:
        v51 = v128;
        *((_DWORD *)a2 + 50) ^= ((unsigned __int8)*((_DWORD *)a2 + 50) ^ (unsigned __int8)(*((_DWORD *)a2 + 50) >> 5)) & 0x80;
        goto LABEL_158;
      }
      if ( (unsigned int)(a3 - 6) > 2 )
      {
        if ( (unsigned int)(a3 - 3) > 2 )
          goto LABEL_145;
LABEL_146:
        *v50 = v69;
        goto LABEL_157;
      }
LABEL_156:
      *v50 = 3;
      goto LABEL_157;
    }
    if ( !IsRightSemiMaximized(v87) )
    {
      *v50 = 4;
      goto LABEL_157;
    }
    v94 = v93 & v91;
    if ( v94 == v92 )
      goto LABEL_146;
    if ( !v94 )
    {
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_156;
      if ( (unsigned int)(a3 - 3) <= 2 )
        goto LABEL_146;
    }
    *v50 = 2;
    goto LABEL_157;
  }
  *((_QWORD *)a2 + 29) = MonitorFromPoint(v34, 2LL, 0LL);
  LOWORD(v69) = 0;
LABEL_158:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v95 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v95 = v69;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v96 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v69) )
  {
    v96 = v69;
  }
  if ( v95 || v96 )
  {
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v95,
      v96,
      (__int64)gFullLog,
      5u,
      1u,
      0x52u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
    LOWORD(v69) = 0;
  }
  *((_DWORD *)a2 + 51) &= ~1u;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_180;
    a3 = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  v97 = *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = v51;
  *((_DWORD *)a2 + 48) = v31;
  v98 = v97 / 2;
  LODWORD(v128) = v97 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || a3 != 9 )
  {
    v31 = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
    HIDWORD(v128) = v31;
  }
  else
  {
    v31 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
    HIDWORD(v128) = v31;
  }
  v34 = v128;
  zzzInternalSetCursorPos(v98, HIDWORD(v128), 1, 0);
  xxxMS_FlushWigglies();
  v99 = *((_DWORD *)a2 + 50);
  if ( (v99 & 0x400) == 0 )
    *v50 = 4;
  *((_DWORD *)a2 + 61) = v98;
  *((_DWORD *)a2 + 50) = v99 & 0xFFFFFF7F;
  LOWORD(v69) = 0;
  *((_DWORD *)a2 + 62) = v31;
  *((_DWORD *)a2 + 63) = v98;
  *((_DWORD *)a2 + 64) = v31;
LABEL_180:
  v100 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ (gdwPUDFlags >> 15)) & 0x20;
  *((_DWORD *)a2 + 50) = v100;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v101 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v101 = v69;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v102 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v69) )
  {
    v102 = v69;
  }
  v103 = "yes";
  if ( v101 || v102 )
  {
    v104 = "yes";
    if ( (v100 & 0x20) == 0 )
      v104 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v101,
      v102,
      (__int64)gFullLog,
      5u,
      1u,
      0x53u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v104);
  }
  v105 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 62) -= v105;
  *((_DWORD *)a2 + 64) -= v105;
  v106 = *((_QWORD *)a2 + 29);
  v107 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 61) -= v107;
  *((_DWORD *)a2 + 63) -= v107;
  *((_QWORD *)a2 + 27) = v106;
  *((_DWORD *)a2 + 56) = *v50;
  *((_QWORD *)a2 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v109 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ ~(*((_DWORD *)a2 + 50) << 21)) & 0x4000000;
  *((_DWORD *)a2 + 50) = v109;
  v110 = v109 ^ ((unsigned __int16)v109 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x2000;
  *((_DWORD *)a2 + 50) = v110;
  v111 = v110 ^ ((unsigned __int16)v110 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x4000;
  v112 = ((unsigned __int16)v111 ^ (unsigned __int16)(v111 >> 5)) & 0x100 ^ v111;
  v113 = (((unsigned __int16)v112 ^ (unsigned __int16)(v112 >> 5)) & 0x200 ^ v112) & 0xF7FBFFFF;
  *((_DWORD *)a2 + 50) = v113;
  v114 = v113;
  if ( (v113 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v113 & 0xFFFFF3FF;
    if ( IsSemiMaximized(a1) )
    {
      v113 |= 0x600800u;
      v114 = v113 | 0x400;
      *((_DWORD *)a2 + 50) = v113 | 0x400;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v108) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v108) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v115 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v115 = 0;
  }
  if ( (_BYTE)v108 || v115 )
  {
    v116 = "yes";
    if ( (v114 & 0x800) == 0 )
      v116 = "no";
    v117 = (v114 & 0x400) != 0;
    LOBYTE(v114) = v115;
    if ( !v117 )
      v103 = "no";
    LOBYTE(v113) = v108;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      v113,
      v114,
      v108,
      v122,
      v123,
      v124,
      v125,
      (__int64)v103,
      (__int64)v116);
  }
  *((_DWORD *)a2 + 45) = dword_1C0320E78[a3];
  *((_DWORD *)a2 + 46) = dword_1C0320E18[a3];
  v118 = dword_1C0320EB8[a3];
  if ( v118 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v118 + 30) - v128;
  v119 = dword_1C0320E48[a3];
  if ( v119 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v119 + 30) - v31;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v120 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v120 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v121 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v121 = 0;
  }
  if ( v120 || v121 )
  {
    LODWORD(v127) = *((_DWORD *)a2 + 43);
    LODWORD(v126) = *((_DWORD *)a2 + 42);
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v120,
      v121,
      (__int64)gFullLog,
      5u,
      1u,
      0x55u,
      (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
      v126,
      v127);
  }
  *(_QWORD *)((char *)a2 + 260) = v34;
  *((_DWORD *)a2 + 44) = a3;
  *(_OWORD *)((char *)a2 + 300) = 0LL;
  *((_QWORD *)a2 + 40) = 0LL;
  *((_WORD *)a2 + 158) = 0;
  *((_DWORD *)a2 + 74) = 0;
  *((_BYTE *)a2 + 336) = 0;
  *((_DWORD *)a2 + 86) = 0;
  *((_QWORD *)a2 + 44) = 0LL;
}
