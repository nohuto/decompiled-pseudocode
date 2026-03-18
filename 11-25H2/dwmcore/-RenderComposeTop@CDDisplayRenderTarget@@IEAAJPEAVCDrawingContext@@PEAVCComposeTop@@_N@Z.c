/*
 * XREFs of ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B94 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801DFEB0 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801F8C50 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255E4C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1802875D0 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderComposeTop(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r13
  int v9; // eax
  char v10; // r8
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm9_4
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  int v23; // eax
  struct D2D_RECT_F v25; // [rsp+38h] [rbp-99h] BYREF
  _OWORD v26[4]; // [rsp+48h] [rbp-89h] BYREF
  int v27; // [rsp+88h] [rbp-49h]
  __m128 v28; // [rsp+98h] [rbp-39h] BYREF
  int v29; // [rsp+A8h] [rbp-29h] BYREF
  int v30; // [rsp+ACh] [rbp-25h]
  int v31; // [rsp+B0h] [rbp-21h]
  int v32; // [rsp+B4h] [rbp-1Dh]

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_24;
    v10 = *((_BYTE *)this + 19697);
    v25 = 0LL;
    CMonitorTransform::GetClipBox((__int64)this + 30896, (__int64)&v29, v10);
    v11 = (float)v30;
    v5 = 1;
    v12 = (float)v31;
    v13 = (float)v29;
    v14 = (float)v32;
    v28.m128_f32[0] = (float)v29;
    v28.m128_f32[1] = (float)v30;
    v28.m128_f32[3] = (float)v32;
    v28.m128_f32[2] = (float)v31;
    v15 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v28, 1, 0);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4F5u, 0LL);
      return v4;
    }
    v16 = CComposeTop::Render(
            (__int64)a3,
            a2,
            (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this + 19697) != 0 ? 31084LL : 30948LL)),
            &v25);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x500u, 0LL);
    }
    else
    {
      if ( v13 > v25.left )
        v25.left = v13;
      if ( v11 > v25.top )
        v25.top = v11;
      if ( v25.right > v12 )
        v25.right = v12;
      if ( v25.bottom > v14 )
        v25.bottom = v14;
      if ( IsEmpty(&v25) )
      {
        *(_QWORD *)&v25.right = 0LL;
        v25.top = 0.0;
        v25.left = 0.0;
      }
      if ( IsEmpty(&v25) )
        goto LABEL_24;
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v25, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)this + 31160, (__int64)&v25);
      v17 = *((_BYTE *)this + 19697) != 0 ? 0x88 : 0;
      v18 = *(_OWORD *)((char *)this + v17 + 30964);
      v26[0] = *(_OWORD *)((char *)this + v17 + 30948);
      v19 = *(_OWORD *)((char *)this + v17 + 30980);
      v26[1] = v18;
      v20 = *(_OWORD *)((char *)this + v17 + 30996);
      LODWORD(v17) = *(_DWORD *)((char *)this + v17 + 31012);
      v26[2] = v19;
      v26[3] = v20;
      v27 = v17;
      CMILMatrix::Invert((CMILMatrix *)v26, v21, v22);
      v28 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v26, &v25, v28.m128_f32);
      v23 = CComposeTop::NewContentRendered((CRectanglesShape **)a3, (__int64)&v28);
      v4 = v23;
      if ( v23 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x516u, 0LL);
    }
LABEL_27:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)this + (*((_BYTE *)this + 19697) != 0 ? 31084LL : 30948LL));
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x4E4u, 0LL);
    return v4;
  }
LABEL_24:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_27;
  return v4;
}
