/*
 * XREFs of ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1400659BC
 * Callers:
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1400657B0 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompleted @ 0x140065820 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfDmaTransactionDmaCompletedWithLength @ 0x140065880 (imp_WdfDmaTransactionDmaCompletedWithLength.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140056BEC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qPPd @ 0x140089238 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x140089350 (WPP_IFR_SF_qc.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

char __fastcall FxDmaTransactionBase::DmaCompleted(
        FxDmaTransactionBase *this,
        unsigned __int64 TransferredLength,
        int *ReturnStatus,
        FxDmaCompletionType CompletionType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *globals; // r12
  const void *v7; // r15
  unsigned __int64 m_CurrentFragmentLength; // rcx
  char v11; // bp
  unsigned __int8 v12; // dl
  int v13; // esi
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  FxRequest *m_EncodedRequest; // rcx
  unsigned __int64 level; // rcx
  const void *v19; // rcx
  FxRequest *v20; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]

  m_Globals = this->m_Globals;
  globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v7 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x16u, WPP_FxDmaTransactionBase_cpp_Traceguids, v7, TransferredLength);
  if ( this->m_State != FxDmaTransactionStateTransfer )
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaTransactionBase_cpp_Traceguids, v7, this->m_State);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, (unsigned __int64)v7, this->m_State);
  }
  m_CurrentFragmentLength = this->m_CurrentFragmentLength;
  v11 = 1;
  if ( TransferredLength > m_CurrentFragmentLength )
  {
    v13 = -1073741811;
    WPP_IFR_SF_qiid(
      m_Globals,
      2u,
      0xFu,
      0x18u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v7,
      (const void *)TransferredLength,
      m_CurrentFragmentLength,
      -1073741811);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( (unsigned int)(CompletionType - 2) > 1 )
    {
      this->m_Transferred += m_CurrentFragmentLength;
    }
    else
    {
      this->m_Transferred += TransferredLength;
      this->m_Remaining += m_CurrentFragmentLength - TransferredLength;
      this->m_CurrentFragmentLength = TransferredLength;
    }
    v13 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, const _GUID *))this->TransferCompleted)(
            this,
            WPP_FxDmaTransactionBase_cpp_Traceguids);
    if ( v13 >= 0 )
    {
      if ( this->m_RequireSingleTransfer )
      {
        level = this->m_Remaining;
        if ( level )
        {
          v13 = -1071644141;
          if ( !this->m_ObjectSize )
            globals = 0LL;
          WPP_IFR_SF_qPPd(m_Globals, v12, v14, 0x19u, traceGuid, globals, level, this->m_TransactionLength, _a4);
          goto LABEL_13;
        }
      }
      if ( !this->m_Remaining || CompletionType == FxDmaCompletionTypeAbort )
      {
        v13 = 0;
        goto LABEL_13;
      }
      v13 = this->StageTransfer(this);
      if ( v13 >= 0 )
        v13 = -1073741802;
    }
    if ( v13 == -1073741802 )
    {
      v11 = 0;
      goto LABEL_17;
    }
  }
LABEL_13:
  this->m_State = ((v13 >> 31) & 1) + 5;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionBase_cpp_Traceguids, v19, v13);
  }
  this->ReleaseResources(this, 0);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    v20 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v20;
    FxRequest::ReleaseIrpReference(v20);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
  this->m_CurrentFragmentLength = 0LL;
LABEL_17:
  *ReturnStatus = v13;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qc(m_Globals, v12, v14, v15, traceGuid, v7, v11);
  return v11;
}
