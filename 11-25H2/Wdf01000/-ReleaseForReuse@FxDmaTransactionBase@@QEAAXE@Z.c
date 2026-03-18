/*
 * XREFs of ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x140066AA0
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x14005E9B0 (imp_WdfDmaTransactionInitialize.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x140063454 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     imp_WdfDmaTransactionRelease @ 0x1400669A0 (imp_WdfDmaTransactionRelease.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x140087538 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008767C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140056BEC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x140066C1C (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaTransactionBase::ReleaseForReuse(FxDmaTransactionBase *this, __int64 ForceRelease)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char v3; // bp
  FxDmaTransactionState m_State; // eax
  FxDmaTransactionBase_vtbl *v6; // rax
  FxRequest *m_EncodedRequest; // rcx
  const void *_a1; // rbx
  unsigned __int64 v9; // rdi
  const void *v10; // rax
  unsigned int v11; // edx
  FxVerifierDownlevelOption v12; // r9d
  _FX_DRIVER_GLOBALS *v13; // rcx
  FxRequest *v14; // rcx

  m_Globals = this->m_Globals;
  v3 = ForceRelease;
  if ( (_BYTE)ForceRelease )
  {
LABEL_4:
    v6 = this->__vftable;
    LOBYTE(ForceRelease) = v3;
    this->m_State = FxDmaTransactionStateReleased;
    v6->ReleaseResources(this, ForceRelease);
    FxDmaTransactionBase::Reset(this);
    m_EncodedRequest = this->m_EncodedRequest;
    if ( m_EncodedRequest )
    {
      if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
      {
        v14 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
        this->m_EncodedRequest = v14;
        FxRequest::ReleaseIrpReference(v14);
        this->m_EncodedRequest->Release(
          this->m_EncodedRequest,
          this,
          302,
          "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
      }
      this->m_EncodedRequest = 0LL;
    }
    return;
  }
  m_State = this->m_State;
  if ( m_State != FxDmaTransactionStateReleased )
  {
    if ( m_State == FxDmaTransactionStateTransfer )
    {
      v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v10 = 0LL;
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionBase_cpp_Traceguids, v10, 4);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v11, 0xBu, v12) )
      {
        if ( !this->m_ObjectSize )
          v9 = 0LL;
        FxVerifierBugCheckWorker(v13, WDF_DMA_FATAL_ERROR, v9, this->m_State);
      }
    }
    goto LABEL_4;
  }
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 3u, 0xFu, 0x1Cu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 0);
}
