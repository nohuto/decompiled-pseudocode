/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemoveByIoResList @ 0x1400DF6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemoveByIoResList(DriverGlobals, RequirementsList, IoResList);
}
