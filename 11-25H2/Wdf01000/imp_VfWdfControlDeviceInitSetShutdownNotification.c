/*
 * XREFs of imp_VfWdfControlDeviceInitSetShutdownNotification @ 0x1400DD4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfControlDeviceInitSetShutdownNotification(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *Notification)(WDFDEVICE__ *),
        __int64 Flags)
{
  WdfVersion.Functions.pfnWdfControlDeviceInitSetShutdownNotification(DriverGlobals, DeviceInit, Notification, Flags);
}
