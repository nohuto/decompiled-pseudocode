/*
 * XREFs of ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1801B3030
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801B2E30 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x1801B30C0 (-Reset@CBatchOptimizer@@AEAAXXZ.c)
 *     ??0SharedStateLayer@@QEAA@XZ @ 0x180217070 (--0SharedStateLayer@@QEAA@XZ.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::CBatchOptimizer(CBatchOptimizer *this, struct CDrawListBatchManager *a2)
{
  CDirtyRegionAnnotation *v2; // rdi
  __int64 v4; // rsi

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v2 = (CBatchOptimizer *)((char *)this + 80);
  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  *((_QWORD *)this + 1) = a2;
  v4 = 8LL;
  do
  {
    --v4;
    if ( SharedStateLayer::SharedStateLayer == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    else
      SharedStateLayer::SharedStateLayer(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 520);
  }
  while ( v4 );
  CBatchOptimizer::Reset(this);
  return this;
}
