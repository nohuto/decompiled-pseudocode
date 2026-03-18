/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemove @ 0x1400DF6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemove(DriverGlobals, RequirementsList, Index);
}
