/*
 * XREFs of imp_VfWdfIoResourceRequirementsListGetIoResList @ 0x1400DF670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFIORESLIST__ *__fastcall imp_VfWdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetIoResList(DriverGlobals, RequirementsList, Index);
}
