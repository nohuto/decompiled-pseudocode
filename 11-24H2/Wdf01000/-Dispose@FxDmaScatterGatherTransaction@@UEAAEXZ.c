/*
 * XREFs of ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x14006FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x14006FCD0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x14006FDEC (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxDmaScatterGatherTransaction::Dispose(FxDmaScatterGatherTransaction *this)
{
  unsigned __int8 v2; // di

  v2 = FxDmaTransactionBase::Dispose(this);
  if ( this->m_SGListBuffer )
  {
    FxDmaScatterGatherTransaction::FreeSgListBuffer(this);
    this->m_DmaEnabler->Release(
      this->m_DmaEnabler,
      this,
      145,
      "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
  }
  return v2;
}
