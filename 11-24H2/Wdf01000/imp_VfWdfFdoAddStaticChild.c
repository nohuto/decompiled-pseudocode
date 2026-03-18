/*
 * XREFs of imp_VfWdfFdoAddStaticChild @ 0x1400DE970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfFdoAddStaticChild(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo, WDFDEVICE__ *Child)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfFdoAddStaticChild)(
           DriverGlobals,
           Fdo,
           Child);
}
