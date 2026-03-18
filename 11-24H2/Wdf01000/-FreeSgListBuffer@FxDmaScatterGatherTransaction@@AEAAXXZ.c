/*
 * XREFs of ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x14006FDEC
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x14006FC70 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 *     ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x140088610 (-SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z.c)
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x14000BF30 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxDmaScatterGatherTransaction::FreeSgListBuffer(FxDmaScatterGatherTransaction *this)
{
  if ( this->m_IsBufferFromLookaside )
  {
    FxFreeToNPagedLookasideList(&this->m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside, this->m_SGListBuffer);
    this->m_IsBufferFromLookaside = 0;
  }
  else
  {
    ExFreePoolWithTag(this->m_SGListBuffer, 0);
  }
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
}
