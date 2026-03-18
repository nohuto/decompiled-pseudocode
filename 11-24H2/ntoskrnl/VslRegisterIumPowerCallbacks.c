/*
 * XREFs of VslRegisterIumPowerCallbacks @ 0x140C19BC4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 */

void VslRegisterIumPowerCallbacks()
{
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, &OutputBuffer, 1u) >= 0 )
  {
    if ( OutputBuffer )
    {
      ExSubscribeWnfStateChange((__int64)&VslpIumCsWnfSubscription, (__int64)&WNF_PO_SCENARIO_CHANGE);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
    }
  }
}
