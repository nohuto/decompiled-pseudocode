/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008767C
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x140086900 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140056BEC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x140063ADC (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x140066AA0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x140068B94 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qld @ 0x140087C60 (WPP_IFR_SF_qld.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        unsigned int DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  ULONG_PTR v7; // rsi
  const void *v8; // r12
  FxDmaTransactionState globals; // ecx
  const void *_a3; // rax
  unsigned int *p_m_MapRegistersReserved; // r14
  FxDmaEnabler *m_DmaEnabler; // rcx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  FxDmaEnabler *v16; // rcx
  FxDmaEnabler *v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  FxDmaPacketTransaction_vtbl *v20; // rax
  FxDmaTransactionProgramOrReserveDma *p_m_DmaAcquiredFunction; // rax
  void **p_m_DmaAcquiredContext; // rcx
  unsigned int v23; // r9d
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v25; // rcx

  m_Globals = this->m_Globals;
  v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v8 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
  globals = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( ((globals - 1) & 0xFFFFFFF9) != 0 || globals == FxDmaTransactionStateTransferCompleted )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, globals);
      if ( !this->m_ObjectSize )
        v7 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
    }
  }
  else if ( globals != FxDmaTransactionStateInitialized )
  {
    _a3 = (const void *)v7;
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      (unsigned __int8)WPP_FxDmaTransactionPacket_cpp_Traceguids,
      DmaDirection,
      0xCu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      _a3,
      globals,
      -1073741811);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( DmaDirection )
    p_m_SimplexAdapterInfo = (_FxDmaDescription *)((char *)m_DmaEnabler
                                                 + ((*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL));
  else
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    v23 = p_m_SimplexAdapterInfo->NumberOfMapRegisters;
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
    {
      v19 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              v23,
              0LL,
              &this->m_MapRegistersReserved);
      if ( v19 < 0 )
        goto LABEL_32;
    }
    else
    {
      *p_m_MapRegistersReserved = v23;
    }
  }
  v16 = this->m_DmaEnabler;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  if ( FxDmaEnabler::GetDmaDescription(v16, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v17, this->m_TransferContext, DmaDirection);
  v19 = this->InitializeResources(this);
  if ( v19 >= 0 )
  {
    v20 = this->__vftable;
    this->m_State = FxDmaTransactionStateReserved;
    v19 = v20->StartTransfer(this);
    p_m_DmaAcquiredFunction = &this->m_DmaAcquiredFunction;
    p_m_DmaAcquiredContext = &this->m_DmaAcquiredContext;
    if ( v19 >= 0 )
      goto LABEL_35;
    goto LABEL_33;
  }
LABEL_32:
  LOBYTE(v18) = 1;
  FxDmaTransactionBase::ReleaseForReuse(this, v18);
  p_m_DmaAcquiredFunction = &this->m_DmaAcquiredFunction;
  p_m_DmaAcquiredContext = &this->m_DmaAcquiredContext;
LABEL_33:
  *p_m_DmaAcquiredContext = 0LL;
  m_EncodedRequest = this->m_EncodedRequest;
  this->m_State = FxDmaTransactionStateTransferFailed;
  p_m_DmaAcquiredFunction->Method.ProgramDma = 0LL;
  *p_m_MapRegistersReserved = 0;
  if ( m_EncodedRequest )
  {
    v25 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v25;
    FxRequest::ReleaseIrpReference(v25);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
LABEL_35:
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, v19);
  return (unsigned int)v19;
}
