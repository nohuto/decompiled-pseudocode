/*
 * XREFs of imp_WdfIoTargetWdmGetTargetFileObject @ 0x140070150
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

_FILE_OBJECT *__fastcall imp_WdfIoTargetWdmGetTargetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  _FILE_OBJECT *m_TargetFileObject; // rbx
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+70h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1200u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  v3 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(pFxDriverGlobals, 5u, 0xEu, 0xEu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget);
  m_TargetFileObject = pTarget->m_TargetFileObject;
  if ( v3->FxVerboseOn )
    WPP_IFR_SF_qq(v3, 5u, 0xEu, 0xFu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, pTarget->m_TargetFileObject);
  return m_TargetFileObject;
}
