/*
 * XREFs of imp_VfWdfIoResourceRequirementsListAppendIoResList @ 0x1400DF630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListAppendIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListAppendIoResList)(
           DriverGlobals,
           RequirementsList,
           IoResList);
}
