/*
 * XREFs of ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x140070A4C
 * Callers:
 *     ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1400708D0 (-Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ.c)
 *     ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x140088620 (-SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z.c)
 * Callees:
 *     FxFreeToNPagedLookasideList @ 0x140032D00 (FxFreeToNPagedLookasideList.c)
 */

void __fastcall FxDmaScatterGatherTransaction::FreeSgListBuffer(FxDmaScatterGatherTransaction *this)
{
  if ( this->m_IsBufferFromLookaside )
  {
    FxFreeToNPagedLookasideList(
      &this->m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside,
      (_SLIST_ENTRY *)this->m_SGListBuffer);
    this->m_IsBufferFromLookaside = 0;
  }
  else
  {
    ExFreePoolWithTag(this->m_SGListBuffer, 0);
  }
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
}
