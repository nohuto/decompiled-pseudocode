/*
 * XREFs of DriverCleanup @ 0x140001690
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1400019FC (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     WppCleanupKm @ 0x140078F2C (WppCleanupKm.c)
 *     SleepstudyHelper_Uninitialize @ 0x1400930B0 (SleepstudyHelper_Uninitialize.c)
 *     TlgUnregisterAggregateProvider @ 0x140094000 (TlgUnregisterAggregateProvider.c)
 */

__int64 __fastcall DriverCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  KIRQL v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rax
  REGHANDLE v7; // rcx
  REGHANDLE v8; // rcx
  REGHANDLE v9; // rcx
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C1E8);
  TlgUnregisterAggregateProvider();
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 64));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v3);
  if ( *(_BYTE *)(v2 + 92) )
    SleepstudyHelper_Uninitialize(*(_QWORD *)(v2 + 96));
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    v4 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    while ( 1 )
    {
      v5 = g_MicrosoftTelemetryAssertsTriggeredList;
      if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
        break;
      if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
        || (v6 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
            *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
      {
        __fastfail(3u);
      }
      g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
      *(_QWORD *)(v6 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
      ExFreePoolWithTag((PVOID)(v5 - 32), 0x74727341u);
    }
    KeReleaseSpinLock(&g_AssertSpinLock, v4);
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_140076078 = 0;
    EtwUnregister(v7);
    v8 = qword_140076028;
    qword_140076028 = 0LL;
    dword_140076008 = 0;
    EtwUnregister(v8);
    v9 = qword_140076060;
    qword_140076060 = 0LL;
    dword_140076040 = 0;
    EtwUnregister(v9);
  }
  result = McGenEventUnregister_EtwUnregister();
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
  }
  if ( g_wil_details_featureUsageProvider )
  {
    result = RtlUnregisterFeatureUsageProvider();
    g_wil_details_featureUsageProvider = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  g_Usbhub3DriverObject = 0LL;
  return result;
}
