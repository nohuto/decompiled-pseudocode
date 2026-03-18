/*
 * XREFs of ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180214CA8
 * Callers:
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformResource@@PEAPEAV1@@Z @ 0x1800FE87C (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCColorTransformR.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800FECE0 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x180206E20 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
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
  v6 = AlignRectFToPointAndSizeL((__int64)&v13, &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CColorTransformLayer::Create(this[4], (const struct D2D_POINTANDSIZE_L *)&v12, a3, &v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE92u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xE98u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xE8Du, 0LL);
  }
  if ( v3 )
    CColorTransformLayer::`vector deleting destructor'(v3, 1);
  return v7;
}
