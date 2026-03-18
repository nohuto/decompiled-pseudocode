/*
 * XREFs of imp_VfWdfIoResourceListCreate @ 0x1400DF550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFIORESLIST__ **ResourceList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *, _WDF_OBJECT_ATTRIBUTES *, WDFIORESLIST__ **))WdfVersion.Functions.pfnWdfIoResourceListCreate)(
           DriverGlobals,
           RequirementsList,
           Attributes,
           ResourceList);
}
