/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180220528
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800A3E30 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800A4040 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800A41A4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x1802137E0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::PushColorTransformLayer(
        struct IDeviceTarget **this,
        __int64 a2,
        struct CColorTransformResource *a3)
{
  struct CLayer *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // eax
  struct CLayer *v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  CDrawingContext::GetClipBoundsWorld((__int64)this, (float *)&v13);
  v6 = AlignRectFToPointAndSizeL((float *)&v13, &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CColorTransformLayer::Create(this[4], (const struct D2D_POINTANDSIZE_L *)&v12, a3, &v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE93u, 0LL);
      v3 = v11;
    }
    else
    {
      v3 = v11;
      v10 = CDrawingContext::PushLayer((CDrawingContext *)this, 0LL, v11, 1, 1);
      v7 = v10;
      if ( v10 >= 0 )
        v3 = 0LL;
      else
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xE99u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xE8Eu, 0LL);
  }
  if ( v3 )
    CColorTransformLayer::`vector deleting destructor'(v3, 1);
  return v7;
}
