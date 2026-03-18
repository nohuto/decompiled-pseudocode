/*
 * XREFs of imp_WdfControlFinishInitializing @ 0x140093B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x14006EDFC (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  m_DeviceObject = pDevice->m_DeviceObject.m_DeviceObject;
  if ( pDevice->m_Legacy )
  {
    FxWmiIrpHandler::Register(pDevice->m_PkgWmi, v3, v4);
    m_DeviceObject->Flags &= ~0x80u;
  }
  else
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxDeviceControlAPI_cpp_Traceguids, Device);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
