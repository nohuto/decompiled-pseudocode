/*
 * XREFs of imp_VfWdfDeviceAssignSxWakeSettings @ 0x1400DD7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *))WdfVersion.Functions.pfnWdfDeviceAssignSxWakeSettings)(
           DriverGlobals,
           Device,
           Settings);
}
