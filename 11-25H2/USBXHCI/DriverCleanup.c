/*
 * XREFs of DriverCleanup @ 0x14007A960
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x140046510 (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1400581F0 (UninitializeTelemetryAssertsKM.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     WppCleanupKm @ 0x14007AF28 (WppCleanupKm.c)
 *     wil_UninitializeFeatureStaging @ 0x14007B488 (wil_UninitializeFeatureStaging.c)
 *     SleepstudyHelper_Uninitialize @ 0x140080710 (SleepstudyHelper_Uninitialize.c)
 */

__int64 __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  if ( *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    SleepstudyHelper_Uninitialize();
    *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) = 0LL;
  }
  UninitializeTelemetryAssertsKM();
  McGenEventUnregister_EtwUnregister();
  v2 = qword_14006B490;
  qword_14006B490 = 0LL;
  dword_14006B470 = 0;
  EtwUnregister(v2);
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    PcwUnregister(Ctr_Interrupter);
    PcwUnregister(Ctr_CommonBuffer);
    PcwUnregister(Ctr_TransferRing);
  }
  return wil_UninitializeFeatureStaging();
}
