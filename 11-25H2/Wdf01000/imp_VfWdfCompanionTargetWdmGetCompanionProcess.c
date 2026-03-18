/*
 * XREFs of imp_VfWdfCompanionTargetWdmGetCompanionProcess @ 0x1400DD470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_EPROCESS *__fastcall imp_VfWdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  return WdfVersion.Functions.pfnWdfCompanionTargetWdmGetCompanionProcess(DriverGlobals, CompanionTarget);
}
