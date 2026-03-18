/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140330A30
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x14032FB78 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140377FD4 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403D9F9C (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404D3FE8 (PopTraceThermalZonePassiveHistogram.c)
 *     ExLogTimeZoneInformation @ 0x1404D955C (ExLogTimeZoneInformation.c)
 *     KasaniSendReport @ 0x1405AA2E0 (KasaniSendReport.c)
 *     KcsaniSendReport @ 0x1405AE980 (KcsaniSendReport.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D66DC (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D68B0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D69D8 (PopTraceZoneCr3Tripped.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x140607AB0 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     CarEtwCrashEvent @ 0x1406157F0 (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x1406159C4 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x140615B58 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140615CC8 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x140616118 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x1406162B0 (CarTipLogDriverLoad.c)
 *     PnpTraceDeviceConfig @ 0x1406F7BE0 (PnpTraceDeviceConfig.c)
 *     PnpTraceDriverBlocked @ 0x140732858 (PnpTraceDriverBlocked.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075433C (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1407560F0 (PopDiagTraceDozeDeferralDecision.c)
 *     PopSqmThermalCriticalEvent @ 0x140765858 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x140765A64 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x14076C2A8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x14076C6C0 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1407B61E0 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x14094E248 (EtwpWriteProcessStarted.c)
 *     PfSnLogScenarioDecision @ 0x140960FAC (PfSnLogScenarioDecision.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 *     PfSnEndTrace @ 0x140971A58 (PfSnEndTrace.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1409DD038 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A8A7C0 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9604C (PopPotsLogPowerTransitionReliability.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C33A38 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const wchar_t *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(2 * v2 + 2);
  }
  else
  {
    a2 = &SourceString;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
