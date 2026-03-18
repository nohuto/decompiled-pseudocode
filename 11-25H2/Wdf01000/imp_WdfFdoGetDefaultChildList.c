/*
 * XREFs of imp_WdfFdoGetDefaultChildList @ 0x14006E6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFCHILDLIST__ *__fastcall imp_WdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp_vtbl *v4; // rax
  __int16 v5; // cx
  WDFCHILDLIST__ *result; // rax
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Fdo,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( pDevice->m_Legacy || (m_PkgPnp = pDevice->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0x10u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
    return 0LL;
  }
  v4 = m_PkgPnp[1].__vftable;
  if ( !v4 )
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    return 0LL;
  }
  v5 = WORD1(v4->~FxObject);
  result = (WDFCHILDLIST__ *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v5 )
    return 0LL;
  return result;
}
