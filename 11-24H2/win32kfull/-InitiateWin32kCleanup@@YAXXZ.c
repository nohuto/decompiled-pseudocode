/*
 * XREFs of ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     FreeAllSpbs @ 0x140097C40 (FreeAllSpbs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1400A7854 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1401CA448 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1401DFF30 (UnregisterDeviceClassNotifications.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401F63F0 (IsCurrentSessionHostServiceSession.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1402079E8 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x14020C62C (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     CleanupIAMAccess @ 0x140212B70 (CleanupIAMAccess.c)
 *     InitializePointerDevicesPresenceState @ 0x140219210 (InitializePointerDevicesPresenceState.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338 (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1402737D8 (-NumHandles@@YAKPEAX@Z.c)
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140274E24 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EA648 (--1InkProcessor@@AEAA@XZ.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 */

void InitiateWin32kCleanup(void)
{
  __int64 v0; // rcx
  Gre::Base *RemoteContext; // r15
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  InteractiveControlManager *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rbx
  struct tagTHREADINFO *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  char v54; // bl
  bool v55; // si
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // rcx
  char v61; // si
  bool v62; // bp
  int v63; // ebx
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rcx
  void *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  _QWORD *i; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  char v118; // bl
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  signed __int32 v132[8]; // [rsp+0h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-58h] BYREF
  char v134; // [rsp+B0h] [rbp+8h] BYREF
  char v135; // [rsp+B8h] [rbp+10h] BYREF
  int v136; // [rsp+C0h] [rbp+18h]
  HANDLE EventHandle; // [rsp+C8h] [rbp+20h] BYREF

  RemoteContext = (Gre::Base *)GreGetRemoteContext();
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v0 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v0 & 4) == 0)
    || (v2 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v2 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      20,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  SetWaitForWinstaRundown();
  if ( !(unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
    CleanupIAMAccess(0LL, v7);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(W32GetUserSessionState(v9, v8) + 2728) = 0;
  _InterlockedOr(v132, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  LOBYTE(v10) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v134, v10);
  if ( !IsRemoteConnection(v12, v11) )
    UnregisterDeviceClassNotifications();
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v134);
  InitializePointerDevicesPresenceState(0LL, v13);
  *(_DWORD *)(W32GetUserSessionState(v15, v14) + 68692) = 1;
  HYDRA_HINT(1024LL, v16);
  v19 = W32GetUserSessionState(v18, v17);
  v22 = v19 + 69312;
  v23 = *(_QWORD **)(v19 + 69312);
  *(_DWORD *)(v19 + 69332) = 1;
  while ( v23 != (_QWORD *)v22 )
  {
    v21 = v23 + 14;
    if ( v23[14] )
      HMAssignmentUnlock(v21);
    v23 = (_QWORD *)*v23;
  }
  *(_DWORD *)(v22 + 20) = 0;
  v24 = W32GetUserSessionState(v21, v20);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v24 + 3264));
  v27 = W32GetUserSessionState(v26, v25);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v27 + 16544));
  v28 = (struct tagMOUSE_PROMOTION_QUEUE *)(v27 + 16432);
  v29 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v28);
    v28 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v28 + 24);
    --v29;
  }
  while ( v29 );
  v33 = W32GetUserSessionState(v31, v30);
  v34 = *(InteractiveControlManager **)(v33 + 17120);
  if ( v34 )
  {
    InteractiveControlManager::Deinitialize(v34);
    Win32FreePool(*(void **)(v33 + 17120));
    *(_QWORD *)(v33 + 17120) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v34, v32) + 3280) )
  {
    v37 = W32GetUserSessionState(v36, v35);
    v40 = *(void **)(v37 + 3280);
    if ( v40 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v37 + 3280));
      Win32FreePool(v40);
    }
    *(_QWORD *)(W32GetUserSessionState(v39, v38) + 3280) = 0LL;
  }
  v41 = PtiCurrent(v36, v35);
  v43 = *(_QWORD *)&gbIgnoreStressedOutStuff;
  v44 = v41;
  if ( !gbIgnoreStressedOutStuff && *((_DWORD *)v41 + 236) )
  {
    v136 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2059);
  }
  v45 = *((_QWORD *)v44 + 82);
  Timeout.QuadPart = -6000000000LL;
  v48 = W32GetUserSessionState(v43, v42);
  if ( v45 )
  {
    while ( 1 )
    {
      v49 = *(_QWORD *)(v45 + 16);
      if ( !v49
        || v49 == *(_QWORD *)(W32GetUserSessionState(v47, v46) + 63024)
        && !*(_QWORD *)(v49 + 32)
        && !*(_QWORD *)(*(_QWORD *)(v45 + 56) + 48LL)
        && NumHandles(*(void **)(v48 + 69144)) <= 1 )
      {
        break;
      }
      LOBYTE(v46) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v135, v46);
      v52 = W32GetUserSessionState(v51, v50);
      KeWaitForSingleObject(*(PVOID *)(v52 + 62984), WrUserRequest, 0, 0, &Timeout);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v135);
    }
  }
  v53 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v54 = 0;
  }
  v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v46);
    LOBYTE(v57) = v55;
    LOBYTE(v58) = v54;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v58,
      v57,
      *(_QWORD *)(v56 + 69416),
      4,
      20,
      21,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  *(_DWORD *)(W32GetUserSessionState(v53, v46) + 36460) = 1;
  v60 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v61 = 0;
  }
  v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v63 = *((_DWORD *)v44 + 236);
    v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v59);
    LOBYTE(v65) = v62;
    LOBYTE(v66) = v61;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v66,
      v65,
      *(_QWORD *)(v64 + 69416),
      4,
      20,
      22,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids,
      (char)v44,
      v63);
  }
  *(_QWORD *)(W32GetUserSessionState(v60, v59) + 19232) = 0LL;
  ForceCapture(3LL, 0LL);
  FreeScancodeMap();
  if ( *(_QWORD *)(W32GetUserSessionState(v68, v67) + 57008) )
    FreeAllSpbs(v70, v69);
  v71 = *(void **)(v48 + 69152);
  if ( v71 )
  {
    ZwClose(v71);
    *(_QWORD *)(v48 + 69152) = 0LL;
  }
  v72 = *(void **)(v48 + 69144);
  if ( v72 )
  {
    ObCloseHandle(v72, 0);
    *(_QWORD *)(v48 + 69144) = 0LL;
  }
  v73 = W32GetUserSessionState(v72, v69);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v73 + 63016), v74, v75);
  v78 = W32GetUserSessionState(v77, v76);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v78 + 63024), v79, v80);
  for ( i = (_QWORD *)(W32GetUserSessionState(v82, v81) + 57584);
        (_QWORD *)*i != i;
        FreeTimer((struct tagTIMER *)(*i - 72LL)) )
  {
    ;
  }
  TerminateDesktopThreads(v84, v83);
  if ( *(_DWORD *)(W32GetUserSessionState(v87, v86) + 69012) )
  {
    if ( *(_DWORD *)(v48 + 69020) )
      bDrvDisconnect(*(_QWORD *)(v48 + 69064), *(_QWORD *)(v48 + 69056), *(_QWORD *)(v48 + 69088));
    else
      GreDrvDisconnect(RemoteContext);
  }
  v90 = W32GetUserSessionState(v89, v88);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v90 + 19200), v91, v92);
  v95 = W32GetUserSessionState(v94, v93);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v95 + 62880), v96, v97);
  v100 = W32GetUserSessionState(v99, v98);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v100 + 19208), v101, v102);
  if ( *(_QWORD *)(W32GetUserSessionState(v104, v103) + 71544) )
  {
    v107 = W32GetUserSessionState(v106, v105);
    ObfDereferenceObject(*(PVOID *)(v107 + 71544));
    *(_QWORD *)(W32GetUserSessionState(v109, v108) + 71544) = 0LL;
  }
  v110 = W32GetUserSessionState(v106, v105);
  HMAssignmentUnlock(v110 + 36312);
  v113 = W32GetUserSessionState(v112, v111);
  HMAssignmentUnlock(v113 + 36320);
  _InterlockedAnd((volatile signed __int32 *)v44 + 132, 0xFFFFF7FF);
  *(_QWORD *)(W32GetUserSessionState(v115, v114) + 18704) = 0LL;
  v117 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v118 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v118 = 0;
  }
  v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v116);
    LOBYTE(v121) = v119;
    LOBYTE(v122) = v118;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v122,
      v121,
      *(_QWORD *)(v120 + 69416),
      4,
      20,
      23,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v117);
  if ( !IsCurrentSessionHostServiceSession() )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 128, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  HYDRA_HINT(4096LL, v123);
  if ( *(_QWORD *)(W32GetUserSessionState(v125, v124) + 68640) )
  {
    v128 = W32GetUserSessionState(v127, v126);
    KeSetEvent(*(PRKEVENT *)(v128 + 68640), 1, 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v127, v126) + 68648) )
  {
    v131 = W32GetUserSessionState(v130, v129);
    KeSetEvent(*(PRKEVENT *)(v131 + 68648), 1, 0);
  }
}
