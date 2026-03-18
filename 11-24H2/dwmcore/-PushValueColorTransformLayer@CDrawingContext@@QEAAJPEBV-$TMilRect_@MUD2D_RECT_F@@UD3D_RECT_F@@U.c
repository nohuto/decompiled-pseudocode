/*
 * XREFs of ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8
 * Callers:
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800FECE0 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??_GCValueColorTransformLayer@@UEAAPEAXI@Z @ 0x180264030 (--_GCValueColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x18027B620 (-Create@CValueColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTra.c)
 */

__int64 __fastcall CDrawingContext::PushValueColorTransformLayer(
        struct IDeviceTarget **this,
        __int64 a2,
        const struct MilColorTransform *a3)
{
  struct CLayer *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  struct CLayer *v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v13);
  v6 = AlignRectFToPointAndSizeL((__int64)&v13, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xEB5u, 0LL);
  }
  else
  {
    v8 = CValueColorTransformLayer::Create(this[4], (const struct D2D_POINTANDSIZE_L *)&v12, a3, &v11);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xEBBu, 0LL);
      v3 = v11;
    }
    else
    {
      v3 = v11;
      v9 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v11, 1, 1);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xEC1u, 0LL);
      else
        v3 = 0LL;
    }
  }
  if ( v3 )
    CValueColorTransformLayer::`scalar deleting destructor'(v3, 1);
  return v7;
}
