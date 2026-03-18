/*
 * XREFs of UserActivateMITInputProcessing @ 0x1C0087624
 * Callers:
 *     NtMITActivateInputProcessing @ 0x1C0087520 (NtMITActivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HandleInputThreadActivated @ 0x1C006DB3C (HandleInputThreadActivated.c)
 *     IOCPDispatcher_Destroy @ 0x1C0080A80 (IOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0083224 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C008498C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00878D0 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     PerfomInitialReadInputOnSharedThread @ 0x1C0087B0C (PerfomInitialReadInputOnSharedThread.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0087B68 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     rimScheduleUserModeRimPnpRegistration @ 0x1C00BCEAC (rimScheduleUserModeRimPnpRegistration.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserActivateMITInputProcessing(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  char v4; // bl
  char v5; // r8
  unsigned int v6; // edx
  IOCPDispatcher *v7; // rcx
  void *IocpHandleForUserMode; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  unsigned __int8 v23; // di

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      10,
      (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 31LL);
  *v2 = 0LL;
  if ( (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.DeviceObject) >= 0
    && (IocpHandleForUserMode = IOCPDispatcher::CreateIocpHandleForUserMode(v7)) != 0LL
    && qword_1C02965F0
    && (int)qword_1C02965F0() >= 0
    && qword_1C02965F8
    && (unsigned int)qword_1C02965F8() )
  {
    if ( gbNoMoreDITHitTest )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 47LL);
    CInputThreadBase::ActivateInputProcessing((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    v13 = SGDGetUserSessionState(v10, v9, v11, v12);
    InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v13 + 16048), 0LL);
    HandleInputThreadActivated(v15, v14, v16, v17);
    rimScheduleUserModeRimPnpRegistration();
    *(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 3448) = a1;
    *v2 = IocpHandleForUserMode;
    PerfomInitialReadInputOnSharedThread();
    v23 = 1;
  }
  else
  {
    v23 = 0;
    IOCPDispatcher_Destroy((__int64)v7, v6);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        11,
        (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v22) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v22 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v22,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      12,
      (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  return v23;
}
