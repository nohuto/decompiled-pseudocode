/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C0071874 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1C00721FC (-NumHandles@@YAKPEAX@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C0072280 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     FreeAllSpbs @ 0x1C0072380 (FreeAllSpbs.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00723B0 (InitializePointerDevicesPresenceState.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00723EC (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     CleanupIAMAccess @ 0x1C00728B0 (CleanupIAMAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C00736C8 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C0073768 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C0093540 (--1InkProcessor@@AEAA@XZ.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1C009D770 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00A0BAC (UnregisterDeviceClassNotifications.c)
 *     GreDrvDisconnect @ 0x1C0134D74 (GreDrvDisconnect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     bDrvDisconnect @ 0x1C02DC760 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  __int64 RemoteContext; // rsi
  int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rbx
  InteractiveControlManager *v16; // rcx
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  PDEVICE_OBJECT v30; // rcx
  __int64 v31; // rcx
  signed __int32 v33[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v2,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      20,
      (__int64)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(SGDGetUserSessionState(v3) + 2936) = 0;
  _InterlockedOr(v33, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(1LL, 0LL);
  InitializePointerDevicesPresenceState(0LL);
  WPP_MAIN_CB.ActiveThreadCount = 1;
  gdwHydraHint |= 0x400u;
  *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 0;
  v9 = SGDGetUserSessionState(v8);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v9 + 3424));
  v11 = SGDGetUserSessionState(v10);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 16184));
  v12 = (struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 16072);
  v13 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v12);
    v12 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v12 + 24);
    --v13;
  }
  while ( v13 );
  v15 = SGDGetUserSessionState(v14);
  v16 = *(InteractiveControlManager **)(v15 + 17104);
  if ( v16 )
  {
    InteractiveControlManager::~InteractiveControlManager(v16);
    Win32FreePool(*(void **)(v15 + 17104));
    *(_QWORD *)(v15 + 17104) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v16) + 3440) )
  {
    v21 = SGDGetUserSessionState(v18);
    v23 = *(void **)(v21 + 3440);
    if ( v23 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v21 + 3440));
      Win32FreePool(v23);
    }
    *(_QWORD *)(SGDGetUserSessionState(v22) + 3440) = 0LL;
  }
  if ( !gbIgnoreStressedOutStuff && *(_DWORD *)(gptiCurrent + 904LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2022LL);
  v24 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD **)(v24 + 16);
      if ( !v25
        || v25 == gspdeskDisconnect && !v25[4] && !*(_QWORD *)(*(_QWORD *)(v24 + 56) + 48LL) && NumHandles(v18) <= 1 )
      {
        break;
      }
      UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
      KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(1LL, 0LL);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v19,
      (unsigned int)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids,
      4,
      20,
      21,
      (__int64)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qD(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v19,
      (_DWORD)gFullLog,
      4,
      20,
      22,
      (__int64)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids,
      gptiCurrent,
      *(_DWORD *)(gptiCurrent + 904LL));
  }
  gpqCursor = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    ZwClose(WPP_MAIN_CB.Dpc.SystemArgument2);
    WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    ObCloseHandle(WPP_MAIN_CB.Dpc.DpcData, 0);
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  v26 = gtmrListHead;
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads(v26);
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  v30 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v27) = 0;
  }
  LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v28,
      (unsigned int)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids,
      4,
      20,
      23,
      (__int64)&WPP_62ef9d03a100369a2ee614027e318dc6_Traceguids);
  UserSessionSwitchLeaveCrit(v30, v27, v28, v29);
  if ( *(_DWORD *)SGDGetUserSessionState(v31) )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  if ( gpevtVideoInitialized )
    KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( gpevtQueueReadyForCallout )
    KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return 1LL;
}
