/*
 * XREFs of imp_VfWdfDpcCreate @ 0x1400DE770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDpcCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DPC_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDPC__ **Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_DPC_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFDPC__ **))WdfVersion.Functions.pfnWdfDpcCreate)(
           DriverGlobals,
           Config,
           Attributes,
           Dpc);
}
