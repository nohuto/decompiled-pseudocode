/*
 * XREFs of xxxSwitchDesktop @ 0x1401F69E4
 * Callers:
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1401F6760 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x140224C24 (RemoteDisableScreen.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x140247830 (NtUserSwitchDesktop.c)
 * Callees:
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     FreeAllSpbs @ 0x140097C40 (FreeAllSpbs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsWindowUnderActiveLockScreen @ 0x1400F86A4 (IsWindowUnderActiveLockScreen.c)
 *     DwmSyncDesktopSwitch @ 0x14010AB40 (DwmSyncDesktopSwitch.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140116AE0 (xxxBroadcastDisplaySettingsChange.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140131E14 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x14019FBAC (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     SetTimerCoalescingTolerance @ 0x1401A5D30 (SetTimerCoalescingTolerance.c)
 *     IPostQuitMessage @ 0x1401BC764 (IPostQuitMessage.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     GreDesktopSwitch @ 0x1401E15CC (GreDesktopSwitch.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401E3788 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401E8478 (zzzDesktopSwitchSideEffects.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401EB664 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     GreLddmProcessDesktopSwitch @ 0x1401F9A88 (GreLddmProcessDesktopSwitch.c)
 *     DrvOcclusionStateChangeNotify @ 0x1401FB940 (DrvOcclusionStateChangeNotify.c)
 *     EraseBitmap @ 0x140207758 (EraseBitmap.c)
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x14020E9C8 (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     xxxRefreshDisplayOrientation @ 0x1402690E0 (xxxRefreshDisplayOrientation.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator() @ 0x140285F64 (_lambda_c536c12f7ba0511efb3a861cb960a4e0_--operator().c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140285FAC (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x140286238 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028880C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1402A417C (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  char v12; // bl
  bool v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bl
  char v22; // r15
  const char *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  HANDLE v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  bool v37; // bl
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  void *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct tagTHREADINFO *v45; // rax
  __int64 v46; // rdx
  ULONG_PTR v47; // r14
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbx
  int v74; // r13d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  struct tagEDGY_DATA *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 **v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rcx
  struct tagWND **v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  int v126; // r12d
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 **v133; // rax
  __int64 v134; // rbx
  void *v135; // rax
  __int64 **v136; // rax
  __int64 v137; // r15
  BOOL v138; // r14d
  _QWORD *v139; // rax
  int v140; // ebx
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r15
  __int64 v145; // rdx
  __int64 *v146; // rax
  __int64 v147; // rcx
  int v148; // ebx
  int v149; // eax
  unsigned int v150; // ebx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  struct tagWND *i; // rbx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // rcx
  HANDLE v173; // rbx
  int v174; // eax
  __int64 v175; // rcx
  bool v176; // bl
  __int64 v177; // rax
  int v178; // r8d
  int v179; // edx
  __int64 v180; // rdx
  __int64 v181; // [rsp+58h] [rbp-69h]
  void *Handle; // [rsp+60h] [rbp-61h] BYREF
  __int64 v183; // [rsp+68h] [rbp-59h] BYREF
  __int64 v184; // [rsp+70h] [rbp-51h]
  ULONG_PTR v185[2]; // [rsp+78h] [rbp-49h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-39h]
  _QWORD v187[2]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v188; // [rsp+A0h] [rbp-21h]
  _QWORD v189[2]; // [rsp+A8h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-9h] BYREF
  _QWORD v191[10]; // [rsp+C8h] [rbp+7h] BYREF
  int v192; // [rsp+130h] [rbp+6Fh] BYREF
  int v193; // [rsp+138h] [rbp+77h]
  unsigned int v194; // [rsp+140h] [rbp+7Fh]

  v194 = a4;
  v193 = a3;
  v5 = a1;
  v185[0] = (ULONG_PTR)PtiCurrent(a1, a2);
  v192 = 0;
  Handle = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19200) )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !v5 )
    v5 = *(_QWORD *)(a2 + 40);
  LOBYTE(v9) = 4;
  if ( (*(_DWORD *)(v5 + 64) & 4) != 0 )
    return 3221225485LL;
  v181 = *(_QWORD *)(v5 + 56);
  v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  v11 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
      ObQueryNameInfo(a2);
    UserSessionState = W32GetUserSessionState(v15, v14);
    LOBYTE(v17) = v13;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_SL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69416));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19200) )
  {
    v20 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v23 = 0LL;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 )
      {
        if ( ObQueryNameInfo(a2) )
          v26 = ObQueryNameInfo(a2) + 16;
        else
          v26 = 8LL;
        v23 = *(const char **)v26;
      }
      v27 = W32GetUserSessionState(v25, v24);
      WPP_RECORDER_AND_TRACE_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v22,
        *(_QWORD *)(v27 + 69416),
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids,
        v23);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( a2 != *(_QWORD *)(W32GetUserSessionState(v20, v19) + 63024)
    && !PsIsSystemThread(CurrentThread)
    && a2 != *(_QWORD *)(W32GetUserSessionState(v30, v29) + 63016)
    && (*(_DWORD *)(v5 + 64) & 1) != 0
    && (v193 & 2) == 0 )
  {
    v31 = *(HANDLE *)(W32GetUserSessionState(v30, v29) + 63584);
    if ( PsGetThreadProcessId(CurrentThread) != v31 )
      return 3221225506LL;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v30, v29) + 62872)
    && (!*(_QWORD *)(W32GetUserSessionState(v33, v32) + 63024)
     || a2 != *(_QWORD *)(W32GetUserSessionState(v35, v34) + 63024)) )
  {
    v36 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v40,
        v39,
        *(_QWORD *)(v38 + 69416),
        4,
        8,
        28,
        (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids);
    }
    v41 = W32GetUserSessionState(v36, v34);
    LockObjectAssignment(v41 + 19208, a2);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v191, (void *)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  v42 = Handle;
  v45 = PtiCurrent(v44, v43);
  v47 = v185[0];
  v187[0] = *((_QWORD *)v45 + 48);
  v48 = v187;
  *((_QWORD *)v45 + 48) = v187;
  v188 = (__int64)AllowDesktopDestruction;
  v187[1] = v42;
  if ( *(_QWORD *)(v47 + 496) )
  {
    zzzDesktopSwitchSideEffects();
    ResetPointerDevices(1LL);
    W32GetUserSessionState(v50, v49);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v48, v46) + 19200) )
  {
    v54 = *(_QWORD *)(W32GetUserSessionState(v52, v51) + 19200);
    if ( *(_QWORD *)(*(_QWORD *)(v54 + 8) + 24LL) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v54, v53) + 18944) )
      {
        v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19200);
        v60 = W32GetUserSessionState(v59, v58);
        tagUNIQUE_WINDOW_HANDLE::Set(
          (tagUNIQUE_WINDOW_HANDLE *)(v57 + 88),
          *(const struct tagWND **)(*(_QWORD *)(v60 + 18944) + 128LL));
        xxxSetForegroundWindow2(0LL, v47, 32LL);
      }
    }
  }
  UpdateKeyboardStateOnDesktopSwitch(1LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v62, v61) + 19200)
    && (v64 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v64, v63) + 19200) + 8LL),
        (*(_DWORD *)(v64 + 64) & 1) != 0) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v64, v63) + 43040) )
      StopFade(v66, v65);
    v67 = W32GetUserSessionState(v66, v65);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v67 + 57008) + 48LL), 0LL, 0LL, 0);
    v70 = W32GetUserSessionState(v69, v68);
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v70 + 19200) + 8LL) + 24LL), 6);
    v73 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v72, v71) + 57008) + 48LL);
    GreLockDynamicModeChange(v73);
    GreUnlockDynamicModeChange(v73);
    v64 = *(_QWORD *)(v5 + 120);
    if ( v64 )
      EraseBitmap();
    v74 = 1;
  }
  else
  {
    v74 = v192;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v64, v63) + 19200) )
  {
    v76 = *(_QWORD *)(W32GetUserSessionState(v76, v75) + 19200);
    if ( *(_QWORD *)(v76 + 248) )
    {
      v77 = W32GetUserSessionState(v76, v75);
      Edgy::FreeEdgyFrameData(*(Edgy **)(*(_QWORD *)(v77 + 19200) + 248LL), v78);
    }
  }
  v79 = W32GetUserSessionState(v76, v75);
  ResetWindowKeyProcessing(*(struct tagDESKTOP **)(v79 + 19200));
  if ( *(_QWORD *)(W32GetUserSessionState(v81, v80) + 19200) )
  {
    v84 = W32GetUserSessionState(v83, v82);
    *(_DWORD *)(*(_QWORD *)(v84 + 19200) + 48LL) |= 0x1000u;
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 == *(_QWORD *)(W32GetUserSessionState(v86, v85) + 63016) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v88, v87) + 14240) )
      {
        v91 = W32GetUserSessionState(v90, v89);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v91 + 14240)) + 25) & 1) == 0 )
        {
          v92 = *(_QWORD *)(W32GetUserSessionState(v90, v89) + 14240);
          v95 = W32GetUserSessionState(v94, v93);
          v189[1] = v92;
          v189[0] = v95 + 14248;
          HMAssignmentLock(v189, 0LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v90, v89) + 14272) )
      {
        v96 = W32GetUserSessionState(v86, v85);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v96 + 14272)) + 25) & 1) == 0 )
        {
          v97 = *(_QWORD *)(W32GetUserSessionState(v86, v85) + 14272);
          v100 = W32GetUserSessionState(v99, v98);
          v184 = v97;
          v183 = v100 + 14240;
          HMAssignmentLock(&v183, 0LL);
        }
      }
    }
    else
    {
      v101 = *(_QWORD *)(W32GetUserSessionState(v88, v87) + 19200);
      if ( v101 == *(_QWORD *)(W32GetUserSessionState(v103, v102) + 63016) )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v86, v85) + 14248) )
        {
          v104 = W32GetUserSessionState(v86, v85);
          if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v104 + 14248)) + 25) & 1) == 0 )
          {
            v105 = *(_QWORD *)(W32GetUserSessionState(v86, v85) + 14248);
            v108 = W32GetUserSessionState(v107, v106);
            v184 = v105;
            v183 = v108 + 14240;
            HMAssignmentLock(&v183, 0LL);
            v111 = W32GetUserSessionState(v110, v109);
            HMAssignmentUnlock(v111 + 14248);
          }
        }
      }
    }
  }
  v112 = W32GetUserSessionState(v86, v85);
  LockObjectAssignment(v112 + 19200, a2);
  v115 = *(__int64 ***)(*(_QWORD *)(W32GetUserSessionState(v114, v113) + 19200) + 8LL);
  v116 = **v115;
  *(_QWORD *)(W32GetUserSessionState(*v115, v117) + 18712) = v116;
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch(v119, v118);
  CitDesktopSwitch();
  v120 = *(struct tagWND ***)(a2 + 8);
  v121 = *((unsigned int *)*v120 + 16);
  if ( (v121 & 1) != 0 )
    ComposeWindow(v120[3], 5);
  FreeAllSpbs((__int64)v120, v121);
  v124 = W32GetUserSessionState(v123, v122);
  v126 = zzzSetDesktop(*(_QWORD *)(v124 + 18704), a2, 0LL);
  if ( v126 >= 0 )
  {
    v127 = *(_QWORD *)(v181 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v181 + 16) + 472LL) != v127 )
    {
      AllocQueue(0LL, v127);
      tagQ::zzzAttachToQueue(*(tagQ **)(v181 + 24), *(struct tagTHREADINFO **)(v181 + 16), 0LL, 0);
    }
    v126 = zzzSetDesktop(*(_QWORD *)(v181 + 16), a2, 0LL);
    if ( v126 >= 0 )
    {
      v130 = *(_QWORD *)(W32GetUserSessionState(v128, v125) + 19200);
      if ( *(_QWORD *)(*(_QWORD *)(v181 + 16) + 496LL) != v130 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4274LL);
      if ( a2 != *(_QWORD *)(W32GetUserSessionState(v130, v129) + 19200) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4275LL);
      v132 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v132 + 64) & 1) != 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v192, 1);
        v133 = *(__int64 ***)(a2 + 8);
        v134 = **v133;
        v135 = (void *)UserReferenceDwmApiPort(*v133);
        DwmSyncDesktopSwitch(v135, v134, v194);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v192);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v132, v131) + 19200) )
      {
        v192 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4289LL);
      }
      v136 = *(__int64 ***)(a2 + 8);
      v137 = **v136;
      v138 = v74
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(*v136, v131) + 19200) + 8LL) + 64LL) & 1) != 0;
      v139 = *(_QWORD **)(a2 + 8);
      v140 = *(_DWORD *)(*v139 + 64LL) & 1;
      v141 = W32GetUserSessionState(*v139, v131);
      GreDesktopSwitch(*(_QWORD *)(*(_QWORD *)(v141 + 57008) + 48LL), v140, v138, v137);
      if ( v74 == (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v143, v142) + 19200) + 8LL) + 64LL) & 1) )
        ResetCursorPointerInternal();
      else
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0LL);
      v144 = v185[0];
      Win32HM_LockIntoThread<1>(v185[0], *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), (__int64 *)BugCheckParameter3);
      GreLddmProcessDesktopSwitch();
      v146 = *(__int64 **)(a2 + 8);
      v147 = *v146;
      v148 = 4 * (*(_DWORD *)(*v146 + 64) & 1);
      if ( !v74
        || (v147 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v147, v145) + 19200) + 8LL),
            v149 = 9,
            (*(_DWORD *)(v147 + 64) & 1) == 0) )
      {
        v149 = 1;
      }
      v150 = v149 | v148;
      v151 = W32GetUserSessionState(v147, v145);
      GreSuspendDirectDraw(*(_QWORD *)(*(_QWORD *)(v151 + 57008) + 48LL), v150);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL), 0LL, 0LL, 0LL, 0, 0, 339);
      if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v153, v152) + 19200) )
      {
        v192 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4351LL);
      }
      v154 = W32GetUserSessionState(v153, v152);
      GreResumeDirectDraw(*(_QWORD *)(*(_QWORD *)(v154 + 57008) + 48LL), v150);
      i = tagUNIQUE_WINDOW_HANDLE::Get((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
      if ( !(unsigned __int8)lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator()(v156, i)
        || (unsigned int)IsWindowUnderActiveLockScreen((__int64)i, v157) )
      {
        for ( i = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
              i;
              i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          if ( (unsigned int)IsWindowUnderActiveLockScreen((__int64)i, v157) )
          {
            i = 0LL;
            break;
          }
          if ( (unsigned __int8)lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator()(v158, i) )
            break;
        }
      }
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v157);
      tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
      UpdateKeyboardStateOnDesktopSwitch(0LL);
      if ( i )
      {
        if ( !gbIgnoreStressedOutStuff
          && *(_QWORD *)(*((_QWORD *)i + 2) + 496LL) != *(_QWORD *)(W32GetUserSessionState(v160, v159) + 19200) )
        {
          v192 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4436LL);
        }
        Win32HM_LockIntoThread<0>(v144, (__int64)i, v185);
        xxxSetForegroundWindowWithOptions(i, 31LL, 32LL, 0LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v185, v163);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      v165 = *(_QWORD *)(W32GetUserSessionState(v162, v161) + 19136);
      if ( v165 )
        IPostQuitMessage(v165, 0);
      v166 = W32GetUserSessionState(v165, v164);
      KePulseEvent(*(PRKEVENT *)(v166 + 63008), 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      zzzUpdateCursorImage(v168, v167);
      if ( a2 == *(_QWORD *)(W32GetUserSessionState(v170, v169) + 63016) )
      {
        v173 = *(HANDLE *)(W32GetUserSessionState(v172, v171) + 63584);
        if ( PsGetThreadProcessId(Thread) == v173 && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 64LL) & 1) != 0 )
          SetTimerCoalescingTolerance(3);
      }
      v174 = *(_DWORD *)(a2 + 48);
      if ( (v174 & 0x20) != 0 )
      {
        v175 = *(_QWORD *)(a2 + 8);
        if ( v175 )
        {
          if ( *(_QWORD *)(v175 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v174 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      xxxRefreshDisplayOrientation();
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v11 = 0;
  }
  v176 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v177 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v125);
    LOBYTE(v178) = v176;
    LOBYTE(v179) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v179,
      v178,
      *(_QWORD *)(v177 + 69416),
      4,
      3,
      29,
      (__int64)&WPP_6e3958beb26f3f5b8556df48f81bef5f_Traceguids,
      v126);
  }
  PopAndFreeW32ThreadLock((__int64)v187, v125);
  v188 = -1LL;
  if ( v191[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v191, v180);
  return (unsigned int)v126;
}
