/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140C31D4C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404AC224 (PopReadRegKeyValue.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopReadUlongPowerKey @ 0x1405CD3CC (PopReadUlongPowerKey.c)
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

char PopBatteryInitPhaseTwo()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

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
  v0 = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( v0 >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange((__int64)&v2, (__int64)&WNF_USB_ERROR_NOTIFICATION);
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      ExSubscribeWnfStateChange((__int64)&v2, (__int64)&WNF_PO_POWER_ADAPTER_REC_OVERRIDE);
    v2 = 0;
    byte_140F0B0D8 = 0;
    v0 = PopReadRegKeyValue(
           (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           L"BatteryFeaturesGranted",
           4uLL,
           0,
           &v2);
    if ( v0 >= 0 )
    {
      LOBYTE(v0) = v2 & 1;
      byte_140F0B0D8 = v2 & 1;
    }
  }
  return v0;
}
