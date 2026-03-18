/*
 * XREFs of FxAllocateDriverGlobals @ 0x14007D4CC
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1400777A8 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     AllocAndInitializeTelemetryContext @ 0x140099EC8 (AllocAndInitializeTelemetryContext.c)
 */

_WDF_DRIVER_GLOBALS *__fastcall FxAllocateDriverGlobals()
{
  _WDF_DRIVER_GLOBALS *result; // rax
  _WDF_DRIVER_GLOBALS *v1; // rdi
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rcx
  bool v4; // zf

  result = (_WDF_DRIVER_GLOBALS *)ExAllocatePool2(64LL, 512LL, 1917089862LL);
  v1 = result;
  if ( result )
  {
    *(_DWORD *)result->DriverName = 1;
    KeInitializeEvent((PRKEVENT)&result->DriverName[8], NotificationEvent, 0);
    v1->DisplaceDriverUnload = 1;
    v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
    Flink = FxLibraryGlobals.FxDriverGlobalsList.Flink;
    if ( FxLibraryGlobals.FxDriverGlobalsList.Flink->Blink != &FxLibraryGlobals.FxDriverGlobalsList )
      __fastfail(3u);
    v1->Driver = (WDFDRIVER__ *)FxLibraryGlobals.FxDriverGlobalsList.Flink;
    *(_QWORD *)&v1->DriverFlags = &FxLibraryGlobals.FxDriverGlobalsList;
    Flink->Blink = (_LIST_ENTRY *)v1;
    FxLibraryGlobals.FxDriverGlobalsList.Flink = (_LIST_ENTRY *)v1;
    KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v2);
    v1[1].DriverFlags = -1;
    v4 = Tlgg_TelemetryProviderProv.LevelPlus1 == 0;
    *(_QWORD *)&v1[1].DriverName[24] = &FxLibraryGlobals;
    *(_DWORD *)&v1[7].DriverName[8] = 60;
    *(_DWORD *)&v1[7].DriverName[12] = 60;
    v1[1].Driver = (WDFDRIVER__ *)-8LL;
    *(_QWORD *)&v1[1].DriverName[8] = 0LL;
    *(_QWORD *)&v1[1].DriverName[16] = 0LL;
    *(_QWORD *)&v1[1].DisplaceDriverUnload = 0LL;
    *(_QWORD *)&v1[5].DriverName[28] = 0LL;
    v1[4].DisplaceDriverUnload = 0;
    *(&v1[5].DisplaceDriverUnload + 4) = 0;
    *(unsigned int *)((char *)&v1[6].DriverFlags + 1) = 16777217;
    *(_DWORD *)&v1[7].DriverName[4] = 0;
    *(_WORD *)((char *)&v1[6].DriverTag + 1) = 0;
    *(_DWORD *)&v1[6].DriverName[4] = 0;
    v1[6].Driver = 0LL;
    LOBYTE(v1[6].DriverFlags) = 0;
    *(_QWORD *)&v1[7].DriverName[16] = 0LL;
    if ( !v4 )
      AllocAndInitializeTelemetryContext((_FX_TELEMETRY_CONTEXT **)&v1[7].DriverName[16]);
    return v1 + 8;
  }
  return result;
}
