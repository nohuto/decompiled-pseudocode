/*
 * XREFs of RawInputThread @ 0x1C00D6580
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 *     xxxRemoveQueueCompletion @ 0x1C002B524 (xxxRemoveQueueCompletion.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C0072280 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00863AC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     InitKeyboard @ 0x1C0088EB0 (InitKeyboard.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C00893DC (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x1C0093890 (-Initialize@InkProcessor@@SAJXZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x1C0094AA8 (CreatePointerDeviceProcessEvents.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0098A94 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C009AD24 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C009C0FC (xxxRegisterForDeviceClassNotifications.c)
 *     CheckPointerDeviceConfiguration @ 0x1C009C2EC (CheckPointerDeviceConfiguration.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C009DE54 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C009E670 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C009E770 (-SetPenHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C009E840 (SetDebugHotKeys.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C009F378 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     GreStartTimers @ 0x1C009F738 (GreStartTimers.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x1C009F8C0 (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C009FD4C (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RitTakeOver @ 0x1C009FDD8 (RitTakeOver.c)
 *     xxxTimersProc @ 0x1C00D7480 (xxxTimersProc.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1C00D7D5C (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage @ 0x1C0139400 (Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ??B?$SGDgSessionId@K@@QEBAKXZ @ 0x1C01A3D58 (--B-$SGDgSessionId@K@@QEBAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01A8B58 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01AD980 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxClientEnableMMCSS @ 0x1C02117B8 (xxxClientEnableMMCSS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C023F70C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C023F7C4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r15
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTIMER *v21; // rax
  struct _KTIMER *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG v27; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v29; // rcx
  NTSTATUS v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // ebx
  char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rdx
  struct InteractiveControlManager *v70; // rbx
  int v71; // r8d
  int v72; // r9d
  int Settings; // eax
  int v74; // ebx
  IVContainerForegroundSync *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  LegacyInputDispatcher *v93; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v95[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v97[3]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v98; // [rsp+80h] [rbp-88h] BYREF
  PRKEVENT Event; // [rsp+88h] [rbp-80h]
  _QWORD SystemInformation[2]; // [rsp+90h] [rbp-78h] BYREF
  int v101; // [rsp+A0h] [rbp-68h]
  int v102; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v104[8]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v105; // [rsp+F8h] [rbp-10h] BYREF

  DestinationString = 0LL;
  Handle = 0LL;
  Event = 0LL;
  v102 = 0;
  v93 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset_0(v104, 0, 0x50uLL);
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  SystemInformation[0] = PsGetThreadProcessId(KeGetCurrentThread());
  SystemInformation[1] = PsGetThreadId(KeGetCurrentThread());
  v101 = 16;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi, v4, v5, v6);
  InkProcessor::Initialize(v7);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_36;
  v104[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
  {
    v10 = -*(_QWORD *)ProcessWin32Process;
    v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    ProcessWin32Process &= v9;
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v12 = *(_QWORD *)(GetDispInfo(v10, v9, v11) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(0xAu, 1);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  EnterCrit(1LL, 0LL);
  RegisterCoreMsgProviderPreferences(14LL, 3LL, 1LL);
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
  {
    _RegisterHotKey((struct tagWND *)1, 0LL, 4294967289LL, 4104, 0, 0LL);
    _RegisterHotKey((struct tagWND *)1, 0LL, 61744LL, 4098, 0x1Bu, 0LL);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  v21 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  gptmrMaster = v21;
  if ( !v21 )
    goto LABEL_36;
  KeInitializeTimer(v21);
  v104[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v22 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    gptmrWD = v22;
    if ( !v22 )
      goto LABEL_36;
    KeInitializeTimerEx(v22, SynchronizationTimer);
  }
  v104[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_36;
  }
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(1LL, 0LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  }
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( (unsigned int)Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId || gServiceSessionId )
    {
LABEL_20:
      if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v27 = 2;
        v105 = Object;
        Event = (PRKEVENT)Object;
        goto LABEL_22;
      }
LABEL_36:
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      if ( v93 )
        LegacyInputDispatcher::`scalar deleting destructor'(v93);
      KeSetEvent((PRKEVENT)a1[1], 1, 0);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      return;
    }
  }
  else if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() )
  {
    goto LABEL_20;
  }
  Handle = 0LL;
  v27 = 1;
  if ( PoRequestShutdownEvent(&v105) < 0 )
    goto LABEL_36;
LABEL_22:
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
    CreatePointerDeviceProcessEvents(gServiceSessionId);
  if ( !v105 )
    goto LABEL_36;
  CurrentThread = KeGetCurrentThread();
  WPP_MAIN_CB.Dpc.DeferredContext = v105;
  gptiRit = W32GetThreadWin32Thread(CurrentThread);
  gdwHydraHint |= 0x2000u;
  *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
  v29 = (struct _KEVENT *)a1[1];
  v104[0] = *(_QWORD *)(gptiRit + 1456LL);
  KeSetEvent(v29, 1, 0);
  v98 = *(PVOID *)(v3 + 56);
  ObReferenceObjectByPointer(v98, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  do
    v30 = KeWaitForMultipleObjects(v27, &v98, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
  while ( v30 == 1 && (gdwRITWakeReason & 2) == 0 );
  ObfDereferenceObject(v98);
  if ( v30 == 1 && (gdwRITWakeReason & 2) != 0 )
  {
    KeSetEvent(Event, 1, 0);
    InitiateWin32kCleanup();
    ObfDereferenceObject(Event);
    if ( Handle )
      ZwClose(Handle);
    KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
    CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
    return;
  }
  if ( (unsigned int)GetRITWakeReason(0LL) )
    KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext, 1, 0);
  EnterCrit(1LL, 0LL);
  if ( !*(_QWORD *)(gptiRit + 456LL) )
    xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
  if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() == gServiceSessionId )
  {
    v43 = SGDGetUserSessionState(gServiceSessionId);
    CBaseInput::InitializeSensor(*(CBaseInput **)(v43 + 16840));
    v45 = SGDGetUserSessionState(v44);
    CBaseInput::InitializeSensor(*(CBaseInput **)(v45 + 12672));
  }
  else
  {
    if ( gProtocolType )
    {
      *(_OWORD *)&v97[1] = 0LL;
      RtlInitUnicodeString((PUNICODE_STRING)&v97[1], 0LL);
      v35 = 1;
      while ( v35 != 2 )
      {
        if ( v35 == 1
          && (v36 = SGDGetUserSessionState(v34), (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v36 + 12672)) >= 0) )
        {
          v37 = SGDGetUserSessionState(v34);
          CBaseInput::HandleTSRequest(*(_QWORD *)(v37 + 12672), 0LL);
          v39 = SGDGetUserSessionState(v38);
          CBaseInput::Read(*(CBaseInput **)(v39 + 12672));
          ++v35;
        }
        else if ( (unsigned int)++v35 > 2 )
        {
          goto LABEL_56;
        }
      }
      v40 = SGDGetUserSessionState(v34);
      if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v40 + 16840)) >= 0 )
      {
        v42 = SGDGetUserSessionState(v41);
        CBaseInput::Read(*(CBaseInput **)(v42 + 16840));
      }
    }
    else
    {
      xxxRegisterForDeviceClassNotifications(gServiceSessionId, v31, v32, v33);
    }
LABEL_56:
    InitTimerPowerSaving();
    ConfigureRITDelayableTimers(0);
  }
  gbIsRITReady = 1;
  GreStartTimers();
  UserSessionSwitchLeaveCrit(v47, v46, v48, v49);
  LegacyInputDispatcher::Create(&v93);
  LegacyInputDispatcher::Initialize(v93, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v104);
  v51 = SGDGetUserSessionState(v50);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v51 + 12672), v93);
  v53 = SGDGetUserSessionState(v52);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v53 + 16840), v93);
  while ( 1 )
  {
LABEL_59:
    while ( 1 )
    {
      v54 = LegacyInputDispatcher::WaitAndDispatch(v93);
      if ( v54 )
        break;
      EnterCrit(1LL, 0LL);
      xxxRemoveQueueCompletion();
      UserSessionSwitchLeaveCrit(v56, v55, v57, v58);
LABEL_122:
      if ( gspwndAltTab )
      {
        EnterCrit(1LL, 0LL);
        v77 = gptiRit;
        v79 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
        if ( (v79 & 0x40) != 0 )
        {
          do
          {
            xxxReceiveMessage(v77);
            v77 = gptiRit;
            v76 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
          }
          while ( (v76 & 0x40) != 0 );
        }
        goto LABEL_125;
      }
    }
    if ( v54 == 4 )
      break;
    if ( v54 != 2 )
    {
      if ( ((v54 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(1LL, 0LL);
        xxxTimersProc();
        UserSessionSwitchLeaveCrit(v81, v80, v82, v83);
        v84 = dword_1C035E158;
        if ( gnRetryReadInput != dword_1C035E158 )
          v84 = gnRetryReadInput;
        dword_1C035E158 = v84;
      }
      goto LABEL_122;
    }
    EnterCrit(1LL, 0LL);
    v79 = gProtocolType;
    if ( gProtocolType )
    {
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16LL),
        gProtocolType,
        *(_QWORD *)(RemoteContext + 40),
        1LL,
        0LL,
        0);
    }
    else if ( gfRemotingConsole )
    {
      v76 = gConsoleShadowhDev;
      if ( gConsoleShadowhDev )
        HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
    }
LABEL_125:
    UserSessionSwitchLeaveCrit(v76, v79, v77, v78);
  }
  v95[0] = 0;
  KeClearEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)GetRITWakeReason(v95) )
        goto LABEL_59;
      v59 = v95[0];
      if ( (unsigned int)dword_1C0359080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 2LL) )
      {
        switch ( v59 )
        {
          case 1u:
            v60 = "Mouse";
            break;
          case 2u:
            v60 = "Shutdown";
            break;
          case 4u:
            v60 = "EnableMMCSS";
            break;
          case 8u:
            v60 = "RitTakeover";
            break;
          case 0x10u:
            v60 = "DitTakeover";
            break;
          case 0x20u:
            v60 = "ConfigUpdate";
            break;
          case 0x40u:
            v60 = "GetUserProfile";
            break;
          case 0x80u:
            v60 = "DitInControl";
            break;
          default:
            v60 = "UNKNOWN";
            if ( v59 == -1 )
              v60 = "NoReason";
            break;
        }
        Object = v60;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (int)&dword_1C0359080,
          (__int64)&Object);
      }
      if ( v59 != 1 )
        break;
      ProcessMouseEvent();
    }
    if ( v59 == 2 )
      break;
    switch ( v59 )
    {
      case 4u:
        xxxClientEnableMMCSS((*gpsi >> 12) & 1);
        break;
      case 8u:
        EnterCrit(1LL, 0LL);
        RitTakeOver(v61);
        v63 = SGDGetUserSessionState(v62);
        CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v63 + 16840), v93);
        goto LABEL_109;
      case 0x10u:
        PrepareForMasterInputThreadTakingOver(v93);
      case 0x80u:
        EnterCrit(1LL, 0LL);
        ZwSetEvent(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL);
        goto LABEL_109;
      case 0x20u:
        EnterCrit(1LL, 0LL);
        goto LABEL_109;
      case 0x40u:
        EnterCrit(1LL, 0LL);
        CheckPointerDeviceConfiguration();
        v70 = InteractiveControlManager::Instance(v68);
        if ( (unsigned int)dword_1C0354150 > 4 )
        {
          v97[1] = "InteractiveControlManager::GetExternalParameters entry";
          Object = *(PVOID *)(gptiCurrent + 496LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            (_DWORD)Object,
            (unsigned int)&unk_1C031D971,
            v71,
            v72,
            (__int64)&v97[1],
            (__int64)&Object);
        }
        Settings = InteractiveControlSettings::ReadSettings(
                     (struct InteractiveControlManager *)((char *)v70 + 84),
                     v69,
                     v71);
        v74 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C0354150 > 2 )
        {
          LODWORD(v97[0]) = Settings;
          v97[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0354150,
            (__int64)&v97[1],
            (__int64)v97);
        }
        if ( (unsigned int)dword_1C0354150 > 4 )
        {
          LODWORD(Object) = v74;
          v97[1] = "InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0354150,
            (__int64)&v97[1],
            (__int64)&Object);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_109:
        UserSessionSwitchLeaveCrit(v65, v64, v66, v67);
        break;
      case 0x100u:
        EnterCrit(1LL, 0LL);
        IVContainerForegroundSync::xxxIVSyncForeground(v75);
        goto LABEL_109;
    }
  }
  InitiateWin32kCleanup();
  if ( (unsigned int)Feature_Ni_EventShutDownCSRSSLeakFix__private_IsEnabledDeviceUsage() )
  {
    if ( Handle )
      goto LABEL_130;
  }
  else
  {
    if ( (unsigned int)SGDgSessionId<unsigned long>::operator unsigned long() != gServiceSessionId )
    {
LABEL_130:
      EnterCrit(1LL, 0LL);
      WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
      ObfDereferenceObject(v105);
      UserSessionSwitchLeaveCrit(v86, v85, v87, v88);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  EnterCrit(1LL, 0LL);
  CleanupSensorExplicitly(1LL);
  if ( !gbMIT )
    CleanupSensorExplicitly(2LL);
  UserSessionSwitchLeaveCrit(v90, v89, v91, v92);
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v93 )
    LegacyInputDispatcher::`scalar deleting destructor'(v93);
}
