/*
 * XREFs of imp_VfWdfUsbInterfaceGetNumSettings @ 0x1400E10E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetNumSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetNumSettings)(
           DriverGlobals,
           UsbInterface);
}
