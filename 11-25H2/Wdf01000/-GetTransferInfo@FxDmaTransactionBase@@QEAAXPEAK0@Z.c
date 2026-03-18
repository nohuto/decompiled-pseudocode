/*
 * XREFs of ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x140088974
 * Callers:
 *     imp_WdfDmaTransactionGetTransferInfo @ 0x140086C30 (imp_WdfDmaTransactionGetTransferInfo.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaTransactionBase::GetTransferInfo(
        FxDmaTransactionBase *this,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 *p_m_ObjectSize; // rbx
  ULONG_PTR v10; // rsi
  const void *v11; // rax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned __int64 m_StartOffset; // r10
  unsigned __int64 m_TransactionLength; // r11
  _MDL *m_StartMdl; // rdx
  unsigned __int64 ByteCount; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  _DMA_TRANSFER_INFO info; // [rsp+40h] [rbp-28h] BYREF

  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( _a2 != FxDmaTransactionStateInitialized )
  {
    m_Globals = this->m_Globals;
    p_m_ObjectSize = &this->m_ObjectSize;
    v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v11 = (const void *)v10;
    if ( !*p_m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionBase_cpp_Traceguids, v11, _a2);
    if ( !*p_m_ObjectSize )
      v10 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v10, *(int *)p_m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  memset(&info, 0, sizeof(info));
  if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo(
      this->m_AdapterInfo->AdapterObject,
      this->m_StartMdl,
      this->m_StartOffset,
      this->m_TransactionLength,
      this->m_DmaDirection == WdfDmaDirectionWriteToDevice,
      &info);
    v13 = info.V1.ScatterGatherElementCount;
    v14 = info.V1.MapRegisterCount;
  }
  else
  {
    m_StartOffset = this->m_StartOffset;
    m_TransactionLength = this->m_TransactionLength;
    m_StartMdl = this->m_StartMdl;
    v14 = info.V1.MapRegisterCount;
    while ( m_StartMdl && m_TransactionLength )
    {
      ByteCount = m_StartMdl->ByteCount;
      if ( ByteCount > m_StartOffset )
      {
        v19 = ByteCount - m_StartOffset;
        v20 = v19;
        if ( v19 >= m_TransactionLength )
          v20 = m_TransactionLength;
        v14 += ((((_DWORD)m_StartOffset + LODWORD(m_StartMdl->StartVa) + m_StartMdl->ByteOffset) & 0xFFF) + v20 + 4095) >> 12;
        info.V1.MapRegisterCount = v14;
        if ( v19 >= m_TransactionLength )
          v19 = m_TransactionLength;
        m_TransactionLength -= v19;
      }
      else
      {
        m_StartOffset -= ByteCount;
      }
      m_StartMdl = m_StartMdl->Next;
    }
    v13 = v14;
  }
  if ( MapRegisterCount )
    *MapRegisterCount = v14;
  if ( ScatterGatherElementCount )
    *ScatterGatherElementCount = v13;
}
