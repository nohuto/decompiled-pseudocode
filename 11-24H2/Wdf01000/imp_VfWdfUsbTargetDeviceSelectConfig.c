/*
 * XREFs of imp_VfWdfUsbTargetDeviceSelectConfig @ 0x1400E1480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceSelectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *))WdfVersion.Functions.pfnWdfUsbTargetDeviceSelectConfig)(
           DriverGlobals,
           UsbDevice,
           PipeAttributes,
           Params);
}
