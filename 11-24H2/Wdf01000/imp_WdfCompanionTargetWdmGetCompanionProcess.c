/*
 * XREFs of imp_WdfCompanionTargetWdmGetCompanionProcess @ 0x14008EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

_EPROCESS *__fastcall imp_WdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  FxCompanionTarget *pCompanionTarget; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *fxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pCompanionTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget,
    &fxDriverGlobals);
  return pCompanionTarget->m_RdDeviceCompanion->GetCompanionProcess(pCompanionTarget->m_RdDeviceCompanion);
}
