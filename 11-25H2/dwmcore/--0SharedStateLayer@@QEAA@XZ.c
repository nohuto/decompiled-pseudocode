/*
 * XREFs of ??0SharedStateLayer@@QEAA@XZ @ 0x180217070
 * Callers:
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1801B3030 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x1801A6B50 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

SharedStateLayer *__fastcall SharedStateLayer::SharedStateLayer(SharedStateLayer *this)
{
  CDirtyRegionAnnotation *v1; // rdi
  __int64 v3; // rsi

  *((_DWORD *)this + 4) = 0;
  v1 = (SharedStateLayer *)((char *)this + 200);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = 20LL;
  *((_QWORD *)this + 4) = 0LL;
  do
  {
    --v3;
    if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v1);
    else
      TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v1);
    v1 = (CDirtyRegionAnnotation *)((char *)v1 + 16);
  }
  while ( v3 );
  return this;
}
