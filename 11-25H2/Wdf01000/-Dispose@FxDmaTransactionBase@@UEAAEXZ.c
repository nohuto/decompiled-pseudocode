/*
 * XREFs of ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x140070930
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1400708D0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140056BEC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::Dispose(FxDmaTransactionBase *this, __int64 a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDmaTransactionBase_vtbl *v4; // rax
  FxRequest *m_EncodedRequest; // rcx
  unsigned __int64 v7; // rdi
  const void *_a1; // rax
  unsigned int v9; // edx
  FxVerifierDownlevelOption v10; // r9d
  _FX_DRIVER_GLOBALS *v11; // rcx
  FxRequest *v12; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_State == FxDmaTransactionStateTransfer )
  {
    v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 4);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v9, 9u, v10) )
    {
      if ( !this->m_ObjectSize )
        v7 = 0LL;
      FxVerifierBugCheckWorker(v11, WDF_DMA_FATAL_ERROR, v7, this->m_State);
    }
  }
  v4 = this->__vftable;
  LOBYTE(a2) = 1;
  this->m_State = FxDmaTransactionStateDeleted;
  v4->ReleaseResources(this, a2);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v12 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v12;
      FxRequest::ReleaseIrpReference(v12);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
  return 1;
}
