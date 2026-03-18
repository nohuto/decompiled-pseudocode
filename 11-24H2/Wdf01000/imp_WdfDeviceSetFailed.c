/*
 * XREFs of imp_WdfDeviceSetFailed @ 0x140091F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1400A6594 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetFailed(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int32 FailedAction)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pObjectFxDriverGlobals; // [rsp+68h] [rbp+20h] BYREF

  pObjectFxDriverGlobals = 0LL;
  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pObjectFxDriverGlobals);
  if ( FailedAction - 1 > 1 )
  {
    WPP_IFR_SF_D(pObjectFxDriverGlobals, 2u, 0x12u, 0x23u, WPP_FxDeviceApi_cpp_Traceguids, FailedAction);
    FxVerifierDbgBreakPoint(pDevice->m_Globals);
  }
  else
  {
    WPP_IFR_SF_qqd(
      pObjectFxDriverGlobals,
      4u,
      0x12u,
      0x24u,
      WPP_FxDeviceApi_cpp_Traceguids,
      Device,
      pDevice->m_DeviceObject.m_DeviceObject,
      FailedAction);
    FxPkgPnp::SetDeviceFailed(pDevice->m_PkgPnp, v3, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
  }
}
