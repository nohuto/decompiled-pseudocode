/*
 * XREFs of UserActivateMITInputProcessing @ 0x14018A3B0
 * Callers:
 *     NtMITActivateInputProcessing @ 0x14016B010 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CE8D4 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x140145B80 (PerfomInitialReadInputOnSharedThread.c)
 *     HandleInputThreadActivated @ 0x14015A2D4 (HandleInputThreadActivated.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x14017EB74 (rimScheduleUserModeRimPnpRegistration.c)
 *     ApiSetEditionActivateMitInput @ 0x1401912A0 (ApiSetEditionActivateMitInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x14019D19C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x14020B624 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020BFCC (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     IOCPDispatcher_Destroy @ 0x14020DAF0 (IOCPDispatcher_Destroy.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  CTouchProcessor *v4; // rcx
  char v5; // bl
  char v6; // r8
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *IocpHandleForUserMode; // rdi
  __int64 v12; // rcx
  unsigned __int8 v13; // di
  int v14; // edx
  char v15; // si
  bool v16; // bp
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      10,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( *(_QWORD *)(W32GetUserSessionState(v4) + 19272) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 31LL);
  *v2 = 0LL;
  UserSessionState = W32GetUserSessionState(v7);
  if ( (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)(UserSessionState + 19272)) >= 0
    && (v10 = W32GetUserSessionState(v9),
        (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(*(IOCPDispatcher **)(v10 + 19272))) != 0LL)
    && (unsigned int)ApiSetEditionActivateMitInput() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v12) + 18824) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
    v20 = W32GetUserSessionState(v19);
    CInputThreadBase::ActivateInputProcessing(*(CInputThreadBase **)(v20 + 18808));
    v22 = W32GetUserSessionState(v21);
    InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v22 + 16408), 0LL);
    HandleInputThreadActivated(v23);
    rimScheduleUserModeRimPnpRegistration();
    *(_QWORD *)(W32GetUserSessionState(v24) + 3288) = a1;
    *v2 = IocpHandleForUserMode;
    PerfomInitialReadInputOnSharedThread(v25);
    v13 = 1;
  }
  else
  {
    v13 = 0;
    IOCPDispatcher_Destroy();
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v16,
        *(_QWORD *)(v17 + 69400),
        2,
        2,
        11,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v14 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      12,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v13;
}
