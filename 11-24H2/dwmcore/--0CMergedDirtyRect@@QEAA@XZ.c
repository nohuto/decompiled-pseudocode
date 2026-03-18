/*
 * XREFs of ??0CMergedDirtyRect@@QEAA@XZ @ 0x18001A92C
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18019D270 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

CMergedDirtyRect *__fastcall CMergedDirtyRect::CMergedDirtyRect(CMergedDirtyRect *this)
{
  CDirtyRegionAnnotation *v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rsi
  CDirtyRegionAnnotation *v5; // rdi
  CMergedDirtyRect *result; // rax

  *(_QWORD *)this = 0LL;
  v1 = (CMergedDirtyRect *)((char *)this + 12);
  *((_DWORD *)this + 2) = 0;
  v2 = 5LL;
  v3 = 5LL;
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
  *((_BYTE *)this + 172) = 0;
  v5 = (CMergedDirtyRect *)((char *)this + 184);
  *((_BYTE *)this + 176) = -1;
  *((_DWORD *)this + 45) = 0;
  do
  {
    --v2;
    if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    else
      TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 16);
  }
  while ( v2 );
  result = this;
  *((_BYTE *)this + 344) = 0;
  *((_BYTE *)this + 348) = -1;
  return result;
}
