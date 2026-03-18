/*
 * XREFs of FxLibraryGlobalsCommission @ 0x140095F4C
 * Callers:
 *     FxLibraryCommonCommission @ 0x14008E518 (FxLibraryCommonCommission.c)
 * Callees:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961AC (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1400AB8E4 (FxInitializeBugCheckDriverInfo.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  void (__fastcall *SystemRoutineAddress)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *); // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  *(_WORD *)&FxLibraryGlobals.IsUserModeFramework = 0;
  *(_WORD *)&FxLibraryGlobals.IfrDisabled = 0;
  FxLibraryGlobals.WdfDirectedPowerTransitionEnabled = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  FxLibraryGlobals.IoConnectInterruptEx = (int (__fastcall *)(_IO_CONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  FxLibraryGlobals.IoDisconnectInterruptEx = (int (__fastcall *)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  FxLibraryGlobals.IoReportInterruptActive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  SystemRoutineAddress = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  FxLibraryGlobals.OsVersionInfo.dwOSVersionInfoSize = 284;
  FxLibraryGlobals.IoReportInterruptInactive = SystemRoutineAddress;
  RtlGetVersion((PRTL_OSVERSIONINFOW)&FxLibraryGlobals.OsVersionInfo);
  FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock = 0LL;
  *(_WORD *)FxLibraryGlobals.MachineSleepStates = 0;
  FxLibraryGlobals.MachineSleepStates[2] = 0;
  FxLibraryGlobals.FxDriverGlobalsList.Blink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsList.Flink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 1;
  FxInitializeBugCheckDriverInfo();
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  *(_QWORD *)&FxLibraryGlobals.DriverTracker.m_EntrySize = 0LL;
  FxLibraryGlobals.VerifierSectionHandle = 0LL;
  FxLibraryGlobals.VerifierSectionHandleRefCount = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &FxLibraryGlobals.PerfTraceRoutines, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    *(_OWORD *)&FxLibraryGlobals.DummyPerfTraceRoutines.Size = 0LL;
    FxLibraryGlobals.PerfTraceRoutines = &FxLibraryGlobals.DummyPerfTraceRoutines;
    result = 0;
    FxLibraryGlobals.DummyPerfTraceRoutines.Size = 32;
    *(_OWORD *)&FxLibraryGlobals.DummyPerfTraceRoutines.InterruptNotifyRoutine = 0LL;
  }
  return result;
}
