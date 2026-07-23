/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402B92A8
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x1402B83F0 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402B93A8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403CC400 (PopDiagTraceDIrpAfterSx.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404A5290 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1404CD1F8 (PopTraceThermalZonePassiveHistogram.c)
 *     ExLogTimeZoneInformation @ 0x1404D29AC (ExLogTimeZoneInformation.c)
 *     KasaniSendReport @ 0x1405A7250 (KasaniSendReport.c)
 *     KcsaniSendReport @ 0x1405AB8F0 (KcsaniSendReport.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1405D3CF0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D3EC4 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D3FEC (PopTraceZoneCr3Tripped.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1406050B8 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     CarEtwCrashEvent @ 0x140613DB0 (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x140613F84 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x140614118 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140614288 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1406146D8 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x140614870 (CarTipLogDriverLoad.c)
 *     PnpTraceDeviceConfig @ 0x1406F5BE0 (PnpTraceDeviceConfig.c)
 *     PnpTraceDriverBlocked @ 0x140730868 (PnpTraceDriverBlocked.c)
 *     PopThermalHandlePreviousShutdown @ 0x14075265C (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140754450 (PopDiagTraceDozeDeferralDecision.c)
 *     PopSqmThermalCriticalEvent @ 0x140765228 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x140765434 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x14076C4C8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x14076C8E0 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1407B6630 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     CmpLogHiveFileInaccessible @ 0x140932734 (CmpLogHiveFileInaccessible.c)
 *     PfSnLogScenarioDecision @ 0x140948A6C (PfSnLogScenarioDecision.c)
 *     PfSnEndProcessTrace @ 0x14094BF24 (PfSnEndProcessTrace.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 *     PfSnEndTrace @ 0x14095A268 (PfSnEndTrace.c)
 *     EtwpWriteProcessStarted @ 0x140A2FF1C (EtwpWriteProcessStarted.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140A7A294 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A86B00 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9287C (PopPotsLogPowerTransitionReliability.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C35B78 (PopPotsLogDirtyPowerTransition.c)
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
