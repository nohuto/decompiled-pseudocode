/*
 * XREFs of RawInputThread @ 0x140230DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140065F00 (xxxRemoveQueueCompletion.c)
 *     IsCurrentSessionServiceSession @ 0x1400A4078 (IsCurrentSessionServiceSession.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ @ 0x14012B468 (-UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1401A5E30 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1401CA448 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1401DCFB4 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F2EC4 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401F63F0 (IsCurrentSessionHostServiceSession.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x140203CA4 (-WakeRit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x14020EF48 (CheckPointerDeviceConfiguration.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140210E44 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x140212458 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     xxxClientEnableMMCSS @ 0x140217CA0 (xxxClientEnableMMCSS.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x140218184 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RitTakeOver @ 0x140219CD0 (RitTakeOver.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x14021B2EC (-InitTimerPowerSaving@@YAXXZ.c)
 *     InitKeyboard @ 0x14021F0C0 (InitKeyboard.c)
 *     GreStartTimers @ 0x14021F19C (GreStartTimers.c)
 *     InitMice @ 0x1402281DC (InitMice.c)
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x140229DD8 (-Initialize@InkProcessor@@SAJXZ.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1402329E4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxTimersProc @ 0x14023F100 (xxxTimersProc.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CreatePointerDeviceProcessEvents @ 0x14026F024 (CreatePointerDeviceProcessEvents.c)
 *     ??4?$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z @ 0x140272AB0 (--4-$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x1402739B4 (-RegisterSystemHotkeys@@YAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140274CD4 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline @ 0x140274DD0 (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline.c)
 *     RegisterCDROMNotify @ 0x140279BF4 (RegisterCDROMNotify.c)
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall RawInputThread(__int64 *a1)
{
  _QWORD *v2; // rsi
  BOOL v3; // eax
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KTIMER *v55; // rax
  __int64 v56; // rdx
  char v57; // r15
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  PVOID v65; // rbx
  ULONG v66; // edi
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct tagTHREADINFO *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  struct _KEVENT *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  NTSTATUS v79; // ebx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  HANDLE v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rdx
  int v140; // ebx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  InteractiveControlManager *v155; // rax
  __int64 v156; // rdx
  IVContainerForegroundSync *v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rbx
  __int64 v164; // rdi
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rcx
  bool v171; // zf
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rax
  _BYTE v178[8]; // [rsp+48h] [rbp-69h] BYREF
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  LegacyInputDispatcher *v180; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  PVOID v182[2]; // [rsp+68h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v184[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v185; // [rsp+98h] [rbp-19h]
  __int64 v186; // [rsp+A8h] [rbp-9h]
  __int64 v187; // [rsp+B8h] [rbp+7h]
  PVOID Event; // [rsp+C8h] [rbp+17h] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v182 = 0LL;
  v180 = 0LL;
  Object = (PVOID)GreGetRemoteContext();
  v2 = Object;
  memset_0(v184, 0, 0x50uLL);
  v3 = IsCurrentSessionServiceSession();
  CurrentThread = KeGetCurrentThread();
  v5 = v3;
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18728) = CurrentThread;
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v8 = *a1;
  SetThreadBasePriority(KeGetCurrentThread(), 16LL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard(v10, v9);
  InitMice(v12, v11);
  UserSessionSwitchLeaveCrit(v13);
  InkProcessor::Initialize(v15, v14);
  LODWORD(CurrentThread) = InitSystemThread(&DestinationString);
  UserSessionState = W32GetUserSessionState(v17, v16);
  v20 = *(_QWORD *)(UserSessionState + 18768);
  if ( (int)CurrentThread < 0 )
    goto LABEL_98;
  v187 = *(_QWORD *)(UserSessionState + 18768);
  UserGdiSessionState = W32GetUserGdiSessionState(v20);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
  {
    v24 = -*(_QWORD *)ProcessWin32Process;
    v23 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    ProcessWin32Process &= v23;
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v25 = *(_QWORD *)(GetDispInfo(v24, v23) + 104);
  v26 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 36LL) / 2;
  v28 = *(_QWORD *)(W32GetUserSessionState(v27, (unsigned int)(*(int *)(*(_QWORD *)(v25 + 40) + 36LL) >> 31)) + 19928);
  *(_DWORD *)(v28 + 4960) = v26;
  v29 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) / 2;
  v30 = *(_QWORD *)(W32GetUserSessionState(v28, (unsigned int)(*(int *)(*(_QWORD *)(v25 + 40) + 40LL) >> 31)) + 19928);
  *(_DWORD *)(v30 + 4964) = v29;
  v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v30, v31) + 19928) + 4960LL);
  *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19240) = v32;
  ClearLogicalCursorPos();
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  if ( !v5 )
    RegisterSystemHotkeys();
  v37 = W32GetUserSessionState(v36, v35);
  CInputGlobals::UpdateLastInputTime(
    *(_QWORD *)(v37 + 3064),
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v38);
  v39 = Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  *(_QWORD *)(W32GetUserSessionState(v41, v40) + 57616) = v39;
  if ( !*(_QWORD *)(W32GetUserSessionState(v43, v42) + 57616) )
    goto LABEL_98;
  v44 = W32GetUserSessionState(v20, v19);
  KeInitializeTimer(*(PKTIMER *)(v44 + 57616));
  v185 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 57616);
  v48 = W32GetUserSessionState(v185, v47);
  if ( !*(_DWORD *)(W32GetUserSessionState(v50, v49) + 68868) || *(_DWORD *)(W32GetUserSessionState(v52, v51) + 68876) )
  {
    v55 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    *(_QWORD *)(v48 + 69200) = v55;
    if ( !v55 )
      goto LABEL_98;
    KeInitializeTimerEx(v55, SynchronizationTimer);
  }
  v186 = *(_QWORD *)(v48 + 69200);
  if ( IsRemoteConnection(v54, v53) )
  {
    v57 = 1;
    v58 = W32GetUserSessionState(v20, v56);
    v59 = *(_QWORD *)(v48 + 69200);
    v60 = *(_QWORD *)(v58 + 57008);
    v61 = *((_QWORD *)Object + 5);
    v62 = *(_QWORD *)(v60 + 16);
    v64 = W32GetUserSessionState(v60, v63);
    if ( !(unsigned int)DrvEscapeRemoteDrivers(v62, *(unsigned __int16 *)(v64 + 69008), v61, 2LL, v59, 8) )
      goto LABEL_98;
    v2 = Object;
  }
  else
  {
    v57 = 0;
  }
  if ( v5 )
  {
    LODWORD(Object) = 1;
    SGRDPgbFirstConnectionDone<int>::operator=(v20, &Object);
  }
  if ( IsCurrentSessionHostServiceSession() )
  {
    v66 = 1;
    if ( PoRequestShutdownEvent(&Event) < 0 )
      goto LABEL_98;
    v65 = Event;
  }
  else
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_98;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v65 = Object;
    v66 = 2;
    Event = Object;
    v182[1] = Object;
  }
  if ( !v5 )
  {
    CreatePointerDeviceProcessEvents();
    v65 = Event;
  }
  if ( v65 )
  {
    *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18736) = v65;
    v69 = PtiCurrent(v68, v67);
    *(_QWORD *)(W32GetUserSessionState(v71, v70) + 18704) = v69;
    HYDRA_HINT(0x2000LL, v72);
    v75 = W32GetUserSessionState(v74, v73);
    v76 = (struct _KEVENT *)a1[1];
    v184[0] = *(_QWORD *)(*(_QWORD *)(v75 + 18704) + 1608LL);
    KeSetEvent(v76, 1, 0);
    v182[0] = *(PVOID *)(v8 + 56);
    ObReferenceObjectByPointer(v182[0], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v79 = KeWaitForMultipleObjects(v66, v182, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v79 == 1 && (*(_DWORD *)(W32GetUserSessionState(v78, v77) + 18748) & 2) == 0 );
    ObfDereferenceObject(v182[0]);
    if ( v79 == 1 && (*(_DWORD *)(W32GetUserSessionState(v81, v80) + 18748) & 2) != 0 )
    {
      KeSetEvent((PRKEVENT)v182[1], 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v182[1]);
      v83 = Handle;
      if ( Handle )
        ZwClose(Handle);
      v84 = W32GetUserSessionState(v83, v82);
      KeSetEvent(*(PRKEVENT *)(v84 + 18760), 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v86, v85);
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL, v80) )
    {
      v89 = W32GetUserSessionState(v88, v87);
      KeSetEvent(*(PRKEVENT *)(v89 + 18736), 1, 0);
    }
    EnterCrit(1LL, 0LL);
    v93 = *(_QWORD *)(W32GetUserSessionState(v91, v90) + 18704);
    if ( !*(_QWORD *)(v93 + 496) )
    {
      v94 = *(_QWORD *)(W32GetUserSessionState(v93, v92) + 18704);
      v95 = *(_QWORD *)(*(_QWORD *)(v94 + 656) + 16LL);
      v97 = W32GetUserSessionState(v94, v96);
      if ( (int)xxxSwitchDesktop(*(_QWORD *)(*(_QWORD *)(v97 + 18704) + 656LL), v95, 0, 0) >= 0 )
        W32GetUserSessionState(v93, v92);
    }
    v98 = W32GetUserSessionState(v93, v92);
    KeSetEvent(*(PRKEVENT *)(v98 + 18760), 1, 0);
    if ( v5 )
    {
      v121 = W32GetUserSessionState(v100, v99);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v121 + 16840));
      v124 = W32GetUserSessionState(v123, v122);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v124 + 12928));
    }
    else
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v178, 1);
      v103 = W32GetUserSessionState(v102, v101);
      if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v103 + 12928)) >= 0 )
      {
        if ( v57 )
        {
          EnterCrit(1LL, 0LL);
          v108 = W32GetUserSessionState(v107, v106);
          CBaseInput::HandleTSRequest(*(_QWORD *)(v108 + 12928), 0LL);
          UserSessionSwitchLeaveCrit(v109);
        }
        v110 = W32GetUserSessionState(v105, v104);
        CBaseInput::Read(*(CBaseInput **)(v110 + 12928));
      }
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        || !*(_DWORD *)(W32GetUserSessionState(v112, v111) + 19152) )
      {
        v113 = W32GetUserSessionState(v112, v111);
        if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v113 + 16840)) >= 0 )
        {
          v114 = W32GetUserSessionState(v112, v111);
          CBaseInput::Read(*(CBaseInput **)(v114 + 16840));
        }
      }
      if ( !v57 && !*(_DWORD *)(W32GetUserSessionState(v112, v111) + 68864) )
      {
        RegisterCDROMNotify();
        LODWORD(Object) = 1;
        SGRDPgbFirstConnectionDone<int>::operator=(v115, &Object);
      }
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v178);
      InitTimerPowerSaving(v117, v116);
      ConfigureRITDelayableTimers(0LL, v118);
    }
    *(_DWORD *)(W32GetUserSessionState(v120, v119) + 18724) = 1;
    GreStartTimers();
    UserSessionSwitchLeaveCrit(v125);
    LegacyInputDispatcher::Create(&v180);
    LegacyInputDispatcher::Initialize(v180, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v184);
    v128 = W32GetUserSessionState(v127, v126);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v128 + 12928), v180);
    v131 = W32GetUserSessionState(v130, v129);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v131 + 16840), v180);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_53:
        v132 = LegacyInputDispatcher::WaitAndDispatch(v180);
        if ( !v132 )
        {
          EnterCrit(1LL, 0LL);
          xxxRemoveQueueCompletion(v136, v135);
          goto LABEL_87;
        }
        if ( v132 == 4 )
        {
          LODWORD(Object) = 0;
          v138 = W32GetUserSessionState(v134, v133);
          KeClearEvent(*(PRKEVENT *)(v138 + 18736));
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( !(unsigned int)GetRITWakeReason((unsigned int *)&Object, v139) )
                  goto LABEL_53;
                v140 = (int)Object;
                InputTraceLogging::Win32k::WakeRit((unsigned int)Object);
                if ( v140 == 1 )
                {
                  EnterCrit(1LL, 0LL);
                  xxxProcessMouseEvent(v142);
                  goto LABEL_74;
                }
                if ( v140 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( Handle )
                  {
                    EnterCrit(1LL, 0LL);
                    *(_QWORD *)(W32GetUserSessionState(v167, v166) + 18736) = 0LL;
                    ObfDereferenceObject(Event);
                    UserSessionSwitchLeaveCrit(v168);
                    if ( Handle )
                      ZwClose(Handle);
                  }
                  EnterCrit(1LL, 0LL);
                  CleanupSensorExplicitly(1LL);
                  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
                    v171 = *(_DWORD *)(W32GetUserSessionState(v170, v169) + 19152) == 0;
                  else
                    v171 = *(_DWORD *)(W32GetUserSessionState(v170, v169) + 18800) == 0;
                  if ( v171 )
                    CleanupSensorExplicitly(2LL);
                  UserSessionSwitchLeaveCrit(v172);
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v174, v173);
                  if ( v180 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v180);
                  return;
                }
                if ( v140 != 4 )
                  break;
                v144 = W32GetUserSessionState(v141, v139);
                xxxClientEnableMMCSS((**(_DWORD **)(v144 + 19928) >> 12) & 1);
              }
              if ( v140 == 8 )
              {
                EnterCrit(1LL, 0LL);
                RitTakeOver(v146, v145);
                v149 = W32GetUserSessionState(v148, v147);
                CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v149 + 16840), v180);
                goto LABEL_74;
              }
              if ( v140 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v180);
            }
            if ( v140 == 128 )
            {
              EnterCrit(1LL, 0LL);
              v152 = W32GetUserSessionState(v151, v150);
              ZwSetEvent(*(HANDLE *)(v152 + 18752), 0LL);
              goto LABEL_74;
            }
            if ( v140 == 32 )
            {
              EnterCrit(1LL, 0LL);
              goto LABEL_74;
            }
            if ( v140 == 64 )
              break;
            if ( v140 == 256 )
            {
              EnterCrit(1LL, 0LL);
              IVContainerForegroundSync::xxxIVSyncForeground(v157);
LABEL_74:
              UserSessionSwitchLeaveCrit(v143);
            }
          }
          EnterCrit(1LL, 0LL);
          CheckPointerDeviceConfiguration();
          v155 = InteractiveControlManager::Instance(v154, v153);
          InteractiveControlManager::UpdateExternalParameters(v155, v156);
          TraceLoggingMouseWheelRoutingValueAtStartup();
          goto LABEL_74;
        }
        if ( v132 != 2 )
          break;
        EnterCrit(1LL, 0LL);
        v160 = W32GetUserSessionState(v159, v158);
        if ( v57 )
        {
          v162 = *(_QWORD *)(v160 + 57008);
          v163 = v2[5];
          v164 = *(_QWORD *)(v162 + 16);
          v165 = W32GetUserSessionState(v162, v161);
          DrvEscapeRemoteDrivers(v164, *(unsigned __int16 *)(v165 + 69008), v163, 1LL, 0LL, 0);
        }
        else if ( *(_DWORD *)(v160 + 69020) )
        {
          v137 = *(_QWORD *)(v160 + 69064);
          if ( v137 )
            HDXDrvEscape(v137, 1LL, 0LL, 0LL);
        }
LABEL_87:
        UserSessionSwitchLeaveCrit(v137);
      }
      if ( ((v132 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(1LL, 0LL);
        if ( (unsigned int)Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline() )
          xxxTimersProc();
        else
          xxxTimersProc_Old();
        goto LABEL_87;
      }
    }
  }
LABEL_98:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v20, v19);
  if ( v180 )
    LegacyInputDispatcher::`scalar deleting destructor'(v180);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v177 = W32GetUserSessionState(v176, v175);
  KeSetEvent(*(PRKEVENT *)(v177 + 18760), 1, 0);
}
