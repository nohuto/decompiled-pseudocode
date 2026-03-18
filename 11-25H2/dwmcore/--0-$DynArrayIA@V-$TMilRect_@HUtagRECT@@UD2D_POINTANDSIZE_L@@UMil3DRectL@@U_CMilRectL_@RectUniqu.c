/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18012B4FC
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18007BE8C (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x1801A6B50 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(
        __int64 a1)
{
  CDirtyRegionAnnotation *v1; // rbx
  __int64 v3; // rsi

  *(_DWORD *)(a1 + 24) = 0;
  v1 = (CDirtyRegionAnnotation *)(a1 + 32);
  *(_QWORD *)a1 = a1 + 32;
  *(_QWORD *)(a1 + 8) = a1 + 32;
  v3 = 16LL;
  *(_DWORD *)(a1 + 16) = 16;
  *(_DWORD *)(a1 + 20) = 16;
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
  return a1;
}
