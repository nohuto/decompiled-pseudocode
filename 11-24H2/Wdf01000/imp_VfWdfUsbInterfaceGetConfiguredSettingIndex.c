/*
 * XREFs of imp_VfWdfUsbInterfaceGetConfiguredSettingIndex @ 0x1400E1010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetConfiguredSettingIndex(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *Interface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetConfiguredSettingIndex)(
           DriverGlobals,
           Interface);
}
