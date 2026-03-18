/*
 * XREFs of imp_VfWdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1400E1230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceFormatRequestForControlTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, _WDF_USB_CONTROL_SETUP_PACKET *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfUsbTargetDeviceFormatRequestForControlTransfer)(
           DriverGlobals,
           UsbDevice,
           Request,
           SetupPacket,
           TransferMemory,
           TransferOffset);
}
