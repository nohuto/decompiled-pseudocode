/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028B844
 * Callers:
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B94 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255E4C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1802875D0 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028B184 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderComposeTop(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  float v9; // xmm7_4
  float v10; // xmm6_4
  int v11; // eax
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  int v15; // eax
  struct D2D_RECT_F v17; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-30h] BYREF

  v4 = 0;
  if ( a4 )
  {
    v8 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)this + 240);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1C6u, 0LL);
      return v4;
    }
  }
  else if ( CComposeTop::HasNewContent(a3) )
  {
    v9 = (float)*((int *)this + 30);
    v10 = (float)*((int *)this + 31);
    v17 = 0LL;
    v11 = CComposeTop::Render((__int64)a3, a2, (CRemoteRenderTarget *)((char *)this + 240), &v17);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1D4u, 0LL);
      return v4;
    }
    if ( v17.left < 0.0 )
      v17.left = 0.0;
    if ( v17.top < 0.0 )
      v17.top = 0.0;
    if ( v17.right > v9 )
      v17.right = v9;
    if ( v17.bottom > v10 )
      v17.bottom = v10;
    if ( IsEmpty(&v17) )
    {
      v17.bottom = 0.0;
      v17.right = 0.0;
      v17.top = 0.0;
      v17.left = 0.0;
    }
    if ( !IsEmpty(&v17) )
    {
      CRemoteRenderTarget::NotifyRenderedRect((__int64)this, &v17, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)this + 336, (__int64)&v17);
      v12 = *((float *)this + 57) + v17.bottom;
      v13 = *((float *)this + 56) + v17.left;
      v14 = *((float *)this + 56) + v17.right;
      *(float *)&v18[1] = *((float *)this + 57) + v17.top;
      *(float *)&v18[3] = v12;
      *(float *)v18 = v13;
      *(float *)&v18[2] = v14;
      v15 = CComposeTop::NewContentRendered((CRectanglesShape **)a3, (__int64)v18);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1E6u, 0LL);
        return v4;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v4;
}
