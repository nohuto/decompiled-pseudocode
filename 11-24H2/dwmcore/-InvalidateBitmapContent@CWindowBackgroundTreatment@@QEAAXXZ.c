/*
 * XREFs of ?InvalidateBitmapContent@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800F4780
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z @ 0x1800F47A8 (-MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z.c)
 */

void __fastcall CWindowBackgroundTreatment::InvalidateBitmapContent(CWindowBackgroundTreatment *this)
{
  if ( *((_QWORD *)this + 10) )
    CWindowBackgroundBitmapProducer::MarkStaleRealizations(
      *((CWindowBackgroundBitmapProducer **)this + 10),
      *((_BYTE *)this + 302));
}
