/*
 * XREFs of ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC698
 * Callers:
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC600 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC97C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsTagRequest(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  if ( this->m_Completed || (this->m_VerifierFlags & 3) != 0 )
  {
    return 0;
  }
  else
  {
    v3 = -1073741811;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x3Au, WPP_FxRequest_cpp_Traceguids, _a1, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
