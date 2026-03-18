/*
 * XREFs of ??0CTreeDirty@@QEAA@PEAVCVisualTree@@@Z @ 0x1802458B8
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180167DE4 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18019D270 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

CTreeDirty *__fastcall CTreeDirty::CTreeDirty(CTreeDirty *this, struct CVisualTree *a2)
{
  CDirtyRegionAnnotation *v2; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  CDirtyRegionAnnotation *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rsi
  CDirtyRegionAnnotation *v9; // rdi
  _QWORD *v10; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v2 = (CTreeDirty *)((char *)this + 20);
  *((_DWORD *)this + 4) = 0;
  v4 = 9LL;
  v5 = 9LL;
  do
  {
    --v5;
    if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    else
      TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 16);
  }
  while ( v5 );
  *((_BYTE *)this + 452) = 0;
  v6 = (CTreeDirty *)((char *)this + 632);
  v7 = 32LL;
  do
  {
    CDirtyRegionAnnotation::CDirtyRegionAnnotation(v6);
    v6 = (CDirtyRegionAnnotation *)((char *)v6 + 48);
    --v7;
  }
  while ( v7 );
  *((_QWORD *)this + 77) = (char *)this + 600;
  v8 = 8LL;
  *((_QWORD *)this + 78) = (char *)this + 600;
  *((_QWORD *)this + 76) = (char *)this + 616;
  *((_QWORD *)this + 75) = (char *)this + 616;
  *((_DWORD *)this + 542) = 0;
  v9 = (CTreeDirty *)((char *)this + 2176);
  do
  {
    --v8;
    if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v9);
    else
      TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v9);
    v9 = (CDirtyRegionAnnotation *)((char *)v9 + 16);
  }
  while ( v8 );
  *((_QWORD *)this + 288) = 0LL;
  v10 = (_QWORD *)((char *)this + 456);
  *((_QWORD *)this + 289) = 0LL;
  *((_QWORD *)this + 290) = 0LL;
  *((_BYTE *)this + 2328) = 0;
  do
  {
    v10[1] = v10;
    *v10 = v10;
    v10 += 2;
    --v4;
  }
  while ( v4 );
  return this;
}
