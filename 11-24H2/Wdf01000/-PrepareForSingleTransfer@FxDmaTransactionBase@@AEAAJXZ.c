/*
 * XREFs of ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x140088B04
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x14005B160 (imp_WdfDmaTransactionInitialize.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x140060554 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x1400017F0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDPq @ 0x140088EC8 (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x140088FD4 (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qLLd @ 0x140089110 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qPPd @ 0x140089228 (WPP_IFR_SF_qPPd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaTransactionBase::PrepareForSingleTransfer(
        FxDmaTransactionBase *this,
        __int64 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 m_TransactionLength; // rcx
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int16 v7; // ax
  const void *v8; // rbx
  int _a2; // eax
  unsigned int v11; // r15d
  unsigned __int16 m_ObjectSize; // cx
  const void *_a1; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int globals; // [rsp+40h] [rbp-48h]

  m_Globals = this->m_Globals;
  m_TransactionLength = this->m_TransactionLength;
  m_MaxFragmentLength = this->m_MaxFragmentLength;
  if ( m_TransactionLength <= m_MaxFragmentLength )
  {
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, unsigned __int64, _QWORD))this->m_AdapterInfo->AdapterObject->DmaOperations->GetDmaTransferInfo)(
            this->m_AdapterInfo->AdapterObject,
            this->m_StartMdl,
            this->m_StartOffset,
            LODWORD(this->m_TransactionLength));
    v11 = _a2;
    if ( _a2 >= 0 )
    {
      ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetNumberOfAvailableMapRegisters)(this);
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 0x20) != 0 )
        ((__int64 (__fastcall *)(FxDmaTransactionBase *))this->GetSgListBufferSize)(this);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    }
    return v11;
  }
  else
  {
    v7 = this->m_ObjectSize;
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7 )
      v8 = 0LL;
    WPP_IFR_SF_qPPd(
      m_Globals,
      m_MaxFragmentLength,
      a3,
      0xEu,
      traceGuid,
      v8,
      m_TransactionLength,
      m_MaxFragmentLength,
      globals);
    return 3223323155LL;
  }
}
