/*
 * XREFs of imp_VfWdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1400E1420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, void *, unsigned __int16 *))WdfVersion.Functions.pfnWdfUsbTargetDeviceRetrieveConfigDescriptor)(
           DriverGlobals,
           UsbDevice,
           ConfigDescriptor,
           ConfigDescriptorLength);
}
