/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetDeviceDescriptor @ 0x1400E12F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbTargetDeviceGetDeviceDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbTargetDeviceGetDeviceDescriptor(DriverGlobals, UsbDevice, UsbDeviceDescriptor);
}
