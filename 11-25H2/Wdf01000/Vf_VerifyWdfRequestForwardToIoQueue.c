/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1400DC008
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x14000AE30 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC0A0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  const void *v2; // r9
  FxRequest *v3; // r10
  _FX_DRIVER_GLOBALS *v5; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10

  v2 = 0LL;
  v3 = request;
  if ( request->m_IrpAllocation == 2
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    if ( v5->FxVerifierOn != (_BYTE)v2 )
      LODWORD(v2) = FxRequest::Vf_VerifyRequestCanBeCompleted(v3, v5);
    return (unsigned int)v2;
  }
  else
  {
    m_ObjectSize = v3->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = v2;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x47u, WPP_FxRequestApi_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225488LL;
  }
}
