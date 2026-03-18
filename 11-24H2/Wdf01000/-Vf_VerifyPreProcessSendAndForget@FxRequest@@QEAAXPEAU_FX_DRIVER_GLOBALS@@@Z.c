/*
 * XREFs of ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DCC44
 * Callers:
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14004B198 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifyPreProcessSendAndForget(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rcx
  const void *v4; // rbx
  const void *_a1; // rax

  m_Completion = this->m_CompletionRoutine.m_Completion;
  v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Completion )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0x17u, WPP_FxRequest_cpp_Traceguids, _a1, m_Completion);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  if ( !this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && ((__int64)this->m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF) != 1 )
  {
    if ( !this->m_ObjectSize )
      v4 = 0LL;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x18u, WPP_FxRequest_cpp_Traceguids, v4);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
