/*
 * XREFs of ?CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ @ 0x14007A8C4
 * Callers:
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x14007A818 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

bool __fastcall FxDmaSystemTransaction::CancelMappedTransfer(FxDmaSystemTransaction *this)
{
  int _a2; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // dx
  const void *_a1; // rdi

  _a2 = this->m_AdapterInfo->AdapterObject->DmaOperations->CancelMappedTransfer(
          this->m_AdapterInfo->AdapterObject,
          this->m_TransferContext);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
  }
  return _a2 >= 0;
}
