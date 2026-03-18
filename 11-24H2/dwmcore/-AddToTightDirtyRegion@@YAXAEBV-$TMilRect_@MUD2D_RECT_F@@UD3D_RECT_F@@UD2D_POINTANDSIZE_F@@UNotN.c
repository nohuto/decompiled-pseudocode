/*
 * XREFs of ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x180244FC0
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall AddToTightDirtyRegion(
        struct D2D_RECT_F *a1,
        char a2,
        __int64 a3,
        const struct FastRegion::Internal::CRgnData **a4)
{
  double v4; // xmm2_8
  char v6; // r11
  const struct tagRECT *v7; // rax
  int v8[4]; // [rsp+20h] [rbp-88h] BYREF
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-78h] BYREF
  FastRegion::CRegion *v10[10]; // [rsp+40h] [rbp-68h] BYREF

  v6 = a2;
  v9 = 0LL;
  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a1, &v9.left);
  else
    v9 = *a1;
  if ( v6 && !IsEmpty(&v9) )
  {
    *(_QWORD *)&v4 = (unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v9.left, 1.0, 1.0);
  }
  v7 = (const struct tagRECT *)PixelAlign(v8, (unsigned int *)&v9, v4);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v10, v7);
  CRegion::Union(a4, v10);
  FastRegion::CRegion::FreeMemory(v10);
}
