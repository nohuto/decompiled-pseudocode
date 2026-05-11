/*
 * XREFs of Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30
 * Callers:
 *     DeviceCreate @ 0x140008EF0 (DeviceCreate.c)
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 *     DeviceStop @ 0x14002EF70 (DeviceStop.c)
 *     RegistryGetIdleInfo @ 0x140034014 (RegistryGetIdleInfo.c)
 *     IncrementActivePinCount @ 0x14003DF60 (IncrementActivePinCount.c)
 *     DecrementActivePinCount @ 0x14003E0BC (DecrementActivePinCount.c)
 * Callees:
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledFallback @ 0x14000BE68 (Feature_Servicing_UACPerfIdle__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 1;
  else
    return Feature_Servicing_UACPerfIdle__private_IsEnabledFallback(
             LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink),
             3LL);
}
