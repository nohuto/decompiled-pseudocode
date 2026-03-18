/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1409649CC
 * Callers:
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1404C9B50 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1405CE7C0 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407412B0 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x140747C54 (PopSetAwayModeStatus.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140747EE0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopEsPublishStateV2 @ 0x140750CF8 (PopEsPublishStateV2.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408E41D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409651E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7C8D0 (PopMonitorProcessBrightnessAction.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A8FF7C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 0LL, a2, a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(a1, 0xFFFFFFFFLL, 1LL, a2, a3);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
