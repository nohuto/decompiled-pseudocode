/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140C33E6C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopReadUlongPowerKey @ 0x1405CAB3C (PopReadUlongPowerKey.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407597C4 (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PopBatteryReadOscBits @ 0x140C33F90 (PopBatteryReadOscBits.c)
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
  if ( (unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline() )
    PopBatteryTestExemptPolicyRegKeyAccess(0);
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
