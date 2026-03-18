/*
 * XREFs of FxValiateCx @ 0x1400773FC
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x140077100 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x140077190 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x140092B90 (imp_WdfCxDeviceInitAllocateContext.c)
 *     imp_WdfCxDeviceInitGetTypedContextWorker @ 0x140092C30 (imp_WdfCxDeviceInitGetTypedContextWorker.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x140092CB0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x140092E80 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x140092EF0 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x140093100 (imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1400932A0 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxValiateCx(_FX_DRIVER_GLOBALS *FxDriverGlobals, _FX_DRIVER_GLOBALS *CxDriverGlobals)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( FxDriverGlobals == CxDriverGlobals )
  {
    v2 = -1073741808;
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      CxDriverGlobals->Public.Driver,
      -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v2;
}
