/*
 * XREFs of ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x140060554
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C80 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x140064F90 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x140088B04 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaTransactionBase::Initialize(
        FxDmaTransactionBase *this,
        unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        unsigned __int64 Offset,
        unsigned int Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 v8; // r14
  unsigned __int16 *p_m_ObjectSize; // rsi
  unsigned __int64 v12; // rdi
  FxDmaTransactionState _a2; // ecx
  FxDmaEnabler *m_DmaEnabler; // rdx
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rax
  $C917870CF6F2291303947F7793E18A6D *v16; // rcx
  unsigned __int64 *p_m_MaxFragmentLength; // rdx
  int v18; // edi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v21; // rcx
  const void *v22; // rax
  unsigned __int64 m_MaximumLength; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v25; // rbx

  m_Globals = this->m_Globals;
  v8 = DmaDirection;
  p_m_ObjectSize = &this->m_ObjectSize;
  v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v21 = this->m_Globals;
    if ( !*p_m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(v21, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1);
  }
  _a2 = this->m_State;
  if ( (unsigned int)(_a2 - 1) > 1 && _a2 != FxDmaTransactionStateReleased )
  {
    v22 = (const void *)v12;
    if ( !*p_m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, v22, _a2);
    if ( !*p_m_ObjectSize )
      v12 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v12, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( (_DWORD)v8 )
    p_m_SimplexAdapterInfo = (_FxDmaDescription *)((char *)m_DmaEnabler
                                                 + ((*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 ? 280LL : 184LL));
  else
    p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  v16 = &m_DmaEnabler->184;
  this->m_MaxFragmentLength = p_m_SimplexAdapterInfo->MaximumFragmentLength;
  this->m_StartOffset = Offset;
  this->m_CurrentFragmentOffset = Offset;
  this->m_Remaining = Length;
  this->m_TransactionLength = Length;
  this->m_DmaDirection = v8;
  this->m_StartMdl = Mdl;
  this->m_CurrentFragmentMdl = Mdl;
  this->m_DmaAcquiredFunction.Method.ProgramDma = ProgramDmaFunction;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    if ( (*((_BYTE *)m_DmaEnabler + 380) & 0x10) != 0 )
      v16 = ($C917870CF6F2291303947F7793E18A6D *)((char *)&m_DmaEnabler->184 + 96 * v8);
    v16->m_SimplexAdapterInfo.AdapterObject->DmaOperations->InitializeDmaTransferContext(
      v16->m_SimplexAdapterInfo.AdapterObject,
      this->m_TransferContext);
    p_m_MaxFragmentLength = &this->m_MaxFragmentLength;
  }
  else
  {
    p_m_MaxFragmentLength = &this->m_MaxFragmentLength;
  }
  if ( this->m_RequireSingleTransfer )
  {
    m_MaximumLength = this->m_DmaEnabler->m_MaximumLength;
    if ( this->m_MaxFragmentLength < m_MaximumLength )
      *p_m_MaxFragmentLength = m_MaximumLength;
    v18 = FxDmaTransactionBase::PrepareForSingleTransfer(this);
    if ( v18 < 0 )
      goto LABEL_28;
  }
  v18 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, unsigned __int64 *))this->InitializeResources)(
          this,
          p_m_MaxFragmentLength);
  if ( v18 < 0 )
LABEL_28:
    FxDmaTransactionBase::ReleaseForReuse(this, 0);
  else
    this->m_State = FxDmaTransactionStateInitialized;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v25, v18);
  }
  return (unsigned int)v18;
}
