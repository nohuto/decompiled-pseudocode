/*
 * XREFs of ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18027F804
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1538 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801D2100 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801EC14C (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024AAFC (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18027C190 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderComposeTop(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  double v4; // xmm2_8
  unsigned int v5; // ebx
  char v6; // r13
  int v10; // eax
  char v11; // r8
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm9_4
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v23; // r8
  int v24; // eax
  struct D2D_RECT_F v26; // [rsp+38h] [rbp-99h] BYREF
  _OWORD v27[4]; // [rsp+48h] [rbp-89h] BYREF
  int v28; // [rsp+88h] [rbp-49h]
  __m128 v29; // [rsp+98h] [rbp-39h] BYREF
  int v30; // [rsp+A8h] [rbp-29h] BYREF
  int v31; // [rsp+ACh] [rbp-25h]
  int v32; // [rsp+B0h] [rbp-21h]
  int v33; // [rsp+B4h] [rbp-1Dh]

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3, (__int64)a2, (__int64)a3) )
      goto LABEL_24;
    v11 = *((_BYTE *)this + 19313);
    v26 = 0LL;
    CMonitorTransform::GetClipBox((__int64)this + 30512, (__int64)&v30, v11);
    v12 = (float)v31;
    v6 = 1;
    v13 = (float)v32;
    v14 = (float)v30;
    v15 = (float)v33;
    v29.m128_f32[0] = (float)v30;
    v29.m128_f32[1] = (float)v31;
    v29.m128_f32[3] = (float)v33;
    v29.m128_f32[2] = (float)v32;
    v16 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v29, 1, 0);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x49Du, 0LL);
      return v5;
    }
    v17 = CComposeTop::Render(
            (__int64)a3,
            a2,
            (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this + 19313) != 0 ? 30700LL : 30564LL)),
            &v26);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x4A8u, 0LL);
    }
    else
    {
      if ( v14 > v26.left )
        v26.left = v14;
      if ( v12 > v26.top )
        v26.top = v12;
      if ( v26.right > v13 )
        v26.right = v13;
      if ( v26.bottom > v15 )
        v26.bottom = v15;
      if ( IsEmpty(&v26) )
      {
        *(_QWORD *)&v26.right = 0LL;
        v26.top = 0.0;
        v26.left = 0.0;
      }
      if ( IsEmpty(&v26) )
        goto LABEL_24;
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v26, 1);
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect((__int64)this + 30776, (unsigned int *)&v26, v4);
      v18 = *((_BYTE *)this + 19313) != 0 ? 0x88 : 0;
      v19 = *(_OWORD *)((char *)this + v18 + 30580);
      v27[0] = *(_OWORD *)((char *)this + v18 + 30564);
      v20 = *(_OWORD *)((char *)this + v18 + 30596);
      v27[1] = v19;
      v21 = *(_OWORD *)((char *)this + v18 + 30612);
      LODWORD(v18) = *(_DWORD *)((char *)this + v18 + 30628);
      v27[2] = v20;
      v27[3] = v21;
      v28 = v18;
      CMILMatrix::Invert((CMILMatrix *)v27, v22, v23);
      v29 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v27, &v26, v29.m128_f32);
      v24 = CComposeTop::NewContentRendered(a3, (__int64)&v29);
      v5 = v24;
      if ( v24 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x4BEu, 0LL);
    }
LABEL_27:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v5;
  }
  v10 = CComposeTop::FullRender(
          a3,
          a2,
          (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this + 19313) != 0 ? 30700LL : 30564LL)));
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x48Cu, 0LL);
    return v5;
  }
LABEL_24:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v6 )
    goto LABEL_27;
  return v5;
}
