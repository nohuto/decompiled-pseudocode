/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x140232970 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1402329E4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     NtUserSetForegroundWindow @ 0x1402461D0 (NtUserSetForegroundWindow.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x140289480 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029A540 (NtUserRaiseLowerShellWindow.c)
 *     NtUserSetForegroundWindowForApplication @ 0x14029D910 (NtUserSetForegroundWindowForApplication.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A6280 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D7D40 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsImmersiveBandOrShellManaged @ 0x14014E58C (IsImmersiveBandOrShellManaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1401C228C (WPP_RECORDER_AND_TRACE_SF_DqDDD.c)
 *     _anonymous_namespace_::DSW_GetTopLevelCreatorWindow @ 0x140202648 (_anonymous_namespace_--DSW_GetTopLevelCreatorWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqD @ 0x140203D8C (WPP_RECORDER_AND_TRACE_SF_DqD.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140276114 (_anonymous_namespace_--RemoveForegroundActivate.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, __int64 a2, __int16 a3, char a4)
{
  char v4; // bp
  bool v5; // r12
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rbx
  char v12; // r15
  char v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  char v17; // r15
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagWND *v21; // rsi
  bool v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rsi
  bool v31; // r13
  char v32; // bl
  unsigned int *v33; // rdx
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // r9
  const char *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // esi
  int v51; // r8d
  int v52; // edx
  __int64 v53; // r9
  const char *v54; // rax
  char v55; // bl
  bool v56; // di
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  PETHREAD *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  char v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  bool v70; // bl
  bool v71; // di
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  __int64 v75; // rax
  struct tagTHREADINFO **v76; // rbx
  char v77; // al
  unsigned __int8 v78; // di
  struct tagTHREADINFO *v79; // rsi
  _DWORD *v80; // rax
  __int64 v81; // rdx
  char v82; // bl
  bool v83; // di
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  char v87; // bl
  bool v88; // di
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  char v92; // bl
  bool v93; // di
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  __int16 v97; // r8
  char v98; // bl
  bool v99; // di
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  char v103; // bl
  bool v104; // di
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  unsigned int v109; // [rsp+20h] [rbp-D8h]
  int v110; // [rsp+28h] [rbp-D0h]
  int v111; // [rsp+30h] [rbp-C8h]
  int v112; // [rsp+38h] [rbp-C0h]
  char v113; // [rsp+71h] [rbp-87h]
  int v114; // [rsp+74h] [rbp-84h]
  struct tagTHREADINFO *v115; // [rsp+78h] [rbp-80h]
  __int64 v116; // [rsp+80h] [rbp-78h]
  int CanSetForegroundWindow; // [rsp+80h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR v119[12]; // [rsp+98h] [rbp-60h] BYREF
  bool v120; // [rsp+100h] [rbp+8h]
  unsigned int v121; // [rsp+108h] [rbp+10h]

  v121 = a2;
  v4 = 1;
  v113 = 1;
  v5 = 0;
  v7 = a1;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944);
  v9 = *(_QWORD *)(v7 + 16);
  BugCheckParameter3[0] = v8;
  v116 = *(_QWORD *)(v9 + 472);
  v120 = v116 == v8;
  v114 = a3 & 0x1000;
  v11 = PtiCurrent(v8, v10);
  v115 = v11;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(**(PETHREAD **)(v7 + 16));
    PsGetThreadId(*(PETHREAD *)v11);
    UserSessionState = W32GetUserSessionState(v15, v14);
    WPP_RECORDER_AND_TRACE_SF_DqDDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v13,
      *(_QWORD *)(UserSessionState + 69416),
      v109,
      v110,
      v111,
      v112);
  }
  v119[0] = -1LL;
  v17 = 0;
  v119[1] = 0LL;
  v18 = _GhostWindowFromHungWindow((const struct tagWND *)v7);
  v21 = v18;
  if ( v18 )
  {
    Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v18, v119);
    v20 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0 )
    {
      v17 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = *(_QWORD *)v7;
      v24 = *(_QWORD *)v21;
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v26) = v22;
      LOBYTE(v27) = v17;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416),
        4,
        2,
        73,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
        v24,
        v23);
      v11 = v115;
    }
    v7 = (__int64)v21;
    v17 = 0;
  }
  if ( v116 == BugCheckParameter3[0] )
  {
    v28 = W32GetUserSessionState(v20, v19);
    v29 = *((_QWORD *)v11 + 59);
    v30 = *(_QWORD *)(v28 + 18944);
    v31 = v30 == v29;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v33 = 0LL;
      v32 = 0;
    }
    else
    {
      v32 = 1;
      v33 = 0LL;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v37,
        v36,
        *(_QWORD *)(v35 + 69416),
        4,
        2,
        74,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
      v33 = 0LL;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v38 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      v43 = *(_QWORD *)(v40 + 69416);
      v44 = "Synchronously";
      if ( v30 != v29 )
        v44 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        v43,
        4,
        2,
        75,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
        (__int64)v44);
    }
    goto LABEL_92;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow((struct tagWND *)v7, v121);
  if ( CanSetForegroundWindow == 2 )
  {
    v46 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v47 = 0;
    }
    v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v47 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      v50 = v114;
    }
    else
    {
      v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
      v50 = v114;
      LOBYTE(v51) = v48;
      LOBYTE(v52) = v47;
      v53 = *(_QWORD *)(v49 + 69416);
      v54 = "Remove";
      if ( v114 )
        v54 = "Preserve";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v52,
        v51,
        v53,
        4,
        2,
        76,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
        (__int64)v54);
    }
    if ( !v50 )
      anonymous_namespace_::RemoveForegroundActivate(v46, v45);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v55 = 0;
    }
    v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
      LOBYTE(v58) = v56;
      LOBYTE(v59) = v55;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v59,
        v58,
        *(_QWORD *)(v57 + 69416),
        4,
        2,
        77,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    v60 = (PETHREAD *)v115;
    if ( (a3 & 0x400) != 0 )
      v60 = 0LL;
    if ( (unsigned int)xxxSetForegroundWindow2(v7, v60, a3 & 0x7FF) )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      if ( *((_QWORD *)v115 + 62) != *(_QWORD *)(W32GetUserSessionState(v61, v33) + 19200) )
      {
        v62 = *(_QWORD *)(v7 + 40);
        if ( *(char *)(v62 + 19) >= 0 && *(_DWORD *)(v62 + 236) != 15 && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
        {
          LOBYTE(v63) = IAMThreadAccessGranted(v115);
          if ( v63 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2438);
          NonChildAncestor = GetNonChildAncestor(v7);
          TopLevelCreatorWindow = (__int64 *)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessage(34LL, *TopLevelCreatorWindow);
        }
      }
    }
    v31 = 0;
LABEL_92:
    if ( !v120 )
      goto LABEL_138;
    goto LABEL_101;
  }
  v113 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
  {
    v17 = 1;
  }
  v33 = &WPP_RECORDER_INITIALIZED;
  v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(**(PETHREAD **)(v7 + 16));
    PsGetThreadId(*(PETHREAD *)v11);
    v69 = W32GetUserSessionState(v68, v67);
    WPP_RECORDER_AND_TRACE_SF_DqD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v66,
      *(_QWORD *)(v69 + 69416),
      v109,
      v110,
      v111,
      v112);
    v33 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (a4 & 1) != 0 )
  {
    v70 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v71 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v70 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v74,
        v73,
        *(_QWORD *)(v72 + 69416),
        4,
        2,
        79,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    v75 = GetNonChildAncestor(v7);
    v76 = (struct tagTHREADINFO **)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(v75);
    v77 = IsTrayWindow(v76, 1LL);
    if ( !v77 )
      v76 = (struct tagTHREADINFO **)v7;
    v78 = v77 ^ 1;
    if ( *((_DWORD *)v76[5] + 59) != 15 )
    {
      if ( !(unsigned int)IsImmersiveBandOrShellManaged((__int64)v76) )
      {
        v79 = v115;
        Win32HM_LockIntoThread<0>((__int64)v115, (__int64)v76, BugCheckParameter3);
        v80 = (_DWORD *)UPDWORDPointer(8196LL);
        xxxFlashWindow(v76, ((unsigned __int16)*v80 << 16) | (v78 + 2) | 0xCu, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v81);
        goto LABEL_90;
      }
      PostIAMShellHookMessage(34LL, (__int64)*v76);
    }
  }
  v79 = v115;
LABEL_90:
  if ( CanSetForegroundWindow == 1 )
  {
    v31 = 0;
    goto LABEL_92;
  }
  v31 = *((_QWORD *)v79 + 59) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 472LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v82 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v82 = 0;
  }
  v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v82 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
    LOBYTE(v85) = v83;
    LOBYTE(v86) = v82;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v86,
      v85,
      *(_QWORD *)(v84 + 69416),
      4,
      2,
      80,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
  }
LABEL_101:
  v33 = &WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v87 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v87 = 0;
  }
  v88 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v87 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v89 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v90) = v88;
    LOBYTE(v91) = v87;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v91,
      v90,
      *(_QWORD *)(v89 + 69416),
      4,
      2,
      81,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    v33 = &WPP_GLOBAL_Control;
  }
  if ( v31 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v92 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v92 = 0;
    }
    v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v92 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v94 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v95) = v93;
      LOBYTE(v96) = v92;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v96,
        v95,
        *(_QWORD *)(v94 + 69416),
        4,
        2,
        82,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    v33 = (unsigned int *)(a3 & 0x100);
    LODWORD(v33) = (unsigned int)v33 | 0x80;
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0) == 0x40 )
      goto LABEL_120;
    v97 = (unsigned __int16)v33 | 2;
    if ( (a3 & 4) == 0 )
      v97 = (__int16)v33;
    if ( !anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7, 0LL, v97) )
    {
LABEL_120:
      v5 = 0;
      goto LABEL_138;
    }
LABEL_129:
    v5 = 1;
    goto LABEL_138;
  }
  if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 472LL) + 128LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v98 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v98 = 0;
    }
    v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v98 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v101) = v99;
      LOBYTE(v102) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v102,
        v101,
        *(_QWORD *)(v100 + 69416),
        4,
        2,
        83,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    goto LABEL_129;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v103 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v103 = 0;
  }
  v104 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v103 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v105 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v106) = v104;
    LOBYTE(v107) = v103;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v107,
      v106,
      *(_QWORD *)(v105 + 69416),
      4,
      2,
      84,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
  }
  v5 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v7 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 472LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_138:
  if ( !v113 || !v5 )
    v4 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v119, (__int64)v33);
  return v4;
}
