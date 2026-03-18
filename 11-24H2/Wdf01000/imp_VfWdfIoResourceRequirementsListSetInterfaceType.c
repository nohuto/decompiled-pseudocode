/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetInterfaceType @ 0x1400DF6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 InterfaceType)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetInterfaceType(
    DriverGlobals,
    RequirementsList,
    (_INTERFACE_TYPE)InterfaceType);
}
