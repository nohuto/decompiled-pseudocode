/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180280AF4
 * Callers:
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1538 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024AAFC (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18027C190 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180280434 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderComposeTop(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  double v4; // xmm2_8
  unsigned int v5; // ebx
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm6_4
  int v12; // eax
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // eax
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  if ( a4 )
  {
    v9 = CComposeTop::FullRender(a3, a2, (CRemoteRenderTarget *)((char *)this + 240));
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1C6u, 0LL);
      return v5;
    }
  }
  else if ( CComposeTop::HasNewContent(a3, (__int64)a2, (__int64)a3) )
  {
    v10 = (float)*((int *)this + 30);
    v11 = (float)*((int *)this + 31);
    v18 = 0LL;
    v12 = CComposeTop::Render((__int64)a3, a2, (CRemoteRenderTarget *)((char *)this + 240), &v18);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1D4u, 0LL);
      return v5;
    }
    if ( v18.left < 0.0 )
      v18.left = 0.0;
    if ( v18.top < 0.0 )
      v18.top = 0.0;
    if ( v18.right > v10 )
      v18.right = v10;
    if ( v18.bottom > v11 )
      v18.bottom = v11;
    if ( IsEmpty(&v18) )
    {
      v18.bottom = 0.0;
      v18.right = 0.0;
      v18.top = 0.0;
      v18.left = 0.0;
    }
    if ( !IsEmpty(&v18) )
    {
      CRemoteRenderTarget::NotifyRenderedRect((__int64)this, &v18, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)this + 336, (unsigned int *)&v18, v4);
      v13 = *((float *)this + 57) + v18.bottom;
      v14 = *((float *)this + 56) + v18.left;
      v15 = *((float *)this + 56) + v18.right;
      *(float *)&v19[1] = *((float *)this + 57) + v18.top;
      *(float *)&v19[3] = v13;
      *(float *)v19 = v14;
      *(float *)&v19[2] = v15;
      v16 = CComposeTop::NewContentRendered(a3, (__int64)v19);
      v5 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1E6u, 0LL);
        return v5;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v5;
}
