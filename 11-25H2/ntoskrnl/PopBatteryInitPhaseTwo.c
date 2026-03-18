/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140C20C4C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopReadUlongPowerKey @ 0x1405C8EBC (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     PopBatteryReadOscBits @ 0x140C20D60 (PopBatteryReadOscBits.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange((__int64)&v3, (__int64)&WNF_USB_ERROR_NOTIFICATION);
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      ExSubscribeWnfStateChange((__int64)&v3, (__int64)&WNF_PO_POWER_ADAPTER_REC_OVERRIDE);
    return PopBatteryReadOscBits(v2, v1);
  }
  return result;
}
