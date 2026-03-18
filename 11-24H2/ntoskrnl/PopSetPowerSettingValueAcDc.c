/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1409BC77C
 * Callers:
 *     PdcPoLowPower @ 0x1404C9E20 (PdcPoLowPower.c)
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     PopErratumUpdateCallback @ 0x1405D30A0 (PopErratumUpdateCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14074D380 (PopWnfMixedRealityCallback.c)
 *     PopSetAwayModeStatus @ 0x140753D44 (PopSetAwayModeStatus.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140753FD0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopEsPublishStateV2 @ 0x14075D588 (PopEsPublishStateV2.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408AE6C0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409BA840 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409BCF98 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopMonitorProcessBrightnessAction @ 0x140A7FF10 (PopMonitorProcessBrightnessAction.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
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
