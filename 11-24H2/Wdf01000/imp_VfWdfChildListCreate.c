/*
 * XREFs of imp_VfWdfChildListCreate @ 0x1400DD040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *ChildListAttributes,
        WDFCHILDLIST__ **ChildList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_LIST_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFCHILDLIST__ **))WdfVersion.Functions.pfnWdfChildListCreate)(
           DriverGlobals,
           Device,
           Config,
           ChildListAttributes,
           ChildList);
}
