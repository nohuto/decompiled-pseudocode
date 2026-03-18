/*
 * XREFs of imp_VfWdfUsbTargetDeviceIsConnectedSynchronous @ 0x1400E1350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceIsConnectedSynchronous(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *))WdfVersion.Functions.pfnWdfUsbTargetDeviceIsConnectedSynchronous)(
           DriverGlobals,
           UsbDevice);
}
