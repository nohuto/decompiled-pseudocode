/*
 * XREFs of imp_VfWdfCommonBufferCreate @ 0x1400DD360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBuffer)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *, WDFCOMMONBUFFER__ **))WdfVersion.Functions.pfnWdfCommonBufferCreate)(
           DriverGlobals,
           DmaEnabler,
           Length,
           Attributes,
           CommonBuffer);
}
