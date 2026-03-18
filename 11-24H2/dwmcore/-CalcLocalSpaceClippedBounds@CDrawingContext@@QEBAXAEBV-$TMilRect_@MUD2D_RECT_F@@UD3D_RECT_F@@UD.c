/*
 * XREFs of ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A5F44
 * Callers:
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A5C50 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A68F4 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 */

char __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, _OWORD *a2, __int64 a3)
{
  const struct CMILMatrix *TopByReference; // rax
  char result; // al
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a3 = *a2;
  v9 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, &v9);
  v8 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 288));
  result = CMILMatrix::Get2DBoundsUsing2DInverse(TopByReference, &v9, &v8);
  if ( result )
  {
    if ( *(float *)&v8 > *(float *)a3 )
      *(_DWORD *)a3 = v8;
    if ( *((float *)&v8 + 1) > *(float *)(a3 + 4) )
      *(_DWORD *)(a3 + 4) = DWORD1(v8);
    if ( *(float *)(a3 + 8) > *((float *)&v8 + 2) )
      *(_DWORD *)(a3 + 8) = DWORD2(v8);
    if ( *(float *)(a3 + 12) > *((float *)&v8 + 3) )
      *(_DWORD *)(a3 + 12) = HIDWORD(v8);
    result = IsEmpty((const struct D2D_RECT_F *)a3);
    if ( result )
    {
      *(_QWORD *)(a3 + 8) = v7;
      *(_QWORD *)a3 = v7;
    }
  }
  return result;
}
