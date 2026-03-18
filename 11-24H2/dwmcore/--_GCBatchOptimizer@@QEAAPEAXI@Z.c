/*
 * XREFs of ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x1801B1BE0
 * Callers:
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801B1608 (--1CDrawListBatchManager@@IEAA@XZ.c)
 * Callees:
 *     ??1SharedStateLayer@@QEAA@XZ @ 0x1801B1C50 (--1SharedStateLayer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::`scalar deleting destructor'(CBatchOptimizer *this)
{
  SharedStateLayer *v2; // rsi
  __int64 v3; // rdi

  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  v2 = (CBatchOptimizer *)((char *)this + 4240);
  v3 = 8LL;
  do
  {
    v2 = (SharedStateLayer *)((char *)v2 - 520);
    SharedStateLayer::~SharedStateLayer(v2);
    --v3;
  }
  while ( v3 );
  operator delete(this, 0x1098uLL);
  return this;
}
