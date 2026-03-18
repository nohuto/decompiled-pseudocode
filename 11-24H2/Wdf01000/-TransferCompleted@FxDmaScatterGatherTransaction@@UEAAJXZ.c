/*
 * XREFs of ?TransferCompleted@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x140068930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::TransferCompleted(FxDmaScatterGatherTransaction *this)
{
  _SCATTER_GATHER_LIST *m_SGList; // rsi
  KIRQL v3; // bl
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // r8
  void (__fastcall *PutScatterGatherList)(_DMA_ADAPTER *, _SCATTER_GATHER_LIST *, unsigned __int8); // rax

  m_SGList = this->m_SGList;
  if ( m_SGList )
  {
    v3 = KfRaiseIrql(2u);
    AdapterObject = this->m_AdapterInfo->AdapterObject;
    DmaOperations = AdapterObject->DmaOperations;
    PutScatterGatherList = DmaOperations->PutScatterGatherList;
    LOBYTE(DmaOperations) = this->m_DmaDirection;
    PutScatterGatherList(AdapterObject, m_SGList, (unsigned __int8)DmaOperations);
    KeLowerIrql(v3);
    this->m_SGList = 0LL;
  }
  return 0LL;
}
