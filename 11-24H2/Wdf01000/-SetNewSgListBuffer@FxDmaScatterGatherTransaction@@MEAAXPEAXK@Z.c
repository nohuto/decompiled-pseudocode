/*
 * XREFs of ?SetNewSgListBuffer@FxDmaScatterGatherTransaction@@MEAAXPEAXK@Z @ 0x140088610
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x14006FDEC (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 */

void __fastcall FxDmaScatterGatherTransaction::SetNewSgListBuffer(
        FxDmaScatterGatherTransaction *this,
        void *Buffer,
        unsigned int Size)
{
  FxDmaScatterGatherTransaction::FreeSgListBuffer(this);
  this->m_SGListBuffer = Buffer;
  this->m_SgListBufferSize = Size;
}
