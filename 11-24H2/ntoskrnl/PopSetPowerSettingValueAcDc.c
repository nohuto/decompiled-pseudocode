/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1409A2DCC
 * Callers:
 *     PdcPoLowPower @ 0x1404C3170 (PdcPoLowPower.c)
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     PopErratumUpdateCallback @ 0x1405D07C0 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14074B6B0 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x140752064 (PopSetAwayModeStatus.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407522F0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopEsPublishStateV2 @ 0x14075C528 (PopEsPublishStateV2.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140904920 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409A0E90 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7A970 (PopMonitorProcessBrightnessAction.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
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
