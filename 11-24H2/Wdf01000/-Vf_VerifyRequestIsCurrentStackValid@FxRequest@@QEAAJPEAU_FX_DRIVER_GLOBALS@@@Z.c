/*
 * XREFs of ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC180
 * Callers:
 *     imp_WdfRequestGetParameters @ 0x140014E70 (imp_WdfRequestGetParameters.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1400544E0 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC0A0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsCurrentStackValid(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // r8
  unsigned int v4; // ebx
  unsigned __int16 v5; // ax
  const void *_a1; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rcx

  m_Irp = this->m_Irp.m_Irp;
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
      return 0;
    v4 = -1073741808;
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0x10u, 0x3Du, WPP_FxRequest_cpp_Traceguids, m_Irp, _a2, 0xC0000010);
  }
  else
  {
    v4 = -1073741808;
    v5 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x3Cu, WPP_FxRequest_cpp_Traceguids, _a1, -1073741808);
  }
  FxVerifierDbgBreakPoint(FxDriverGlobals);
  return v4;
}
