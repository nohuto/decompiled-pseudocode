/*
 * XREFs of ?InvalidateBitmapContent@CWindowBackgroundTreatment@@QEAAXXZ @ 0x18020EDFC
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z @ 0x18020EE24 (-MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z.c)
 */

void __fastcall CWindowBackgroundTreatment::InvalidateBitmapContent(CWindowBackgroundTreatment *this)
{
  if ( *((_QWORD *)this + 10) )
    CWindowBackgroundBitmapProducer::MarkStaleRealizations(
      *((CWindowBackgroundBitmapProducer **)this + 10),
      *((_BYTE *)this + 302));
}
