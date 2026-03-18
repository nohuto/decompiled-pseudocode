/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0C98 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1538 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18027C190 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        __m128i *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r14
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  __int32 v13; // eax
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  double v17; // xmm8_8
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  float left; // xmm0_4
  float top; // xmm1_4
  float v23; // xmm4_4
  float right; // xmm3_4
  double v25; // xmm2_8
  __m128 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  struct Windows::Foundation::Numerics::float4x4 *v33; // r8
  bool v34; // al
  int v35; // eax
  struct D2D_RECT_F v37; // [rsp+38h] [rbp-A9h] BYREF
  __m128i v38; // [rsp+48h] [rbp-99h] BYREF
  __m128 v39[4]; // [rsp+58h] [rbp-89h] BYREF
  int v40; // [rsp+98h] [rbp-49h]
  __m128 v41; // [rsp+A8h] [rbp-39h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_32;
    v37 = 0LL;
    if ( this[1206].m128i_i8[9] )
    {
      v11 = this[1909].m128i_i32[0];
      v12 = 0;
      v13 = this[1909].m128i_i32[1];
      v38.m128i_i64[0] = 0LL;
      v38.m128i_i64[1] = __PAIR64__(v13, v11);
    }
    else
    {
      v11 = this[1908].m128i_i32[2];
      v38 = this[1908];
      v12 = _mm_cvtsi128_si32(v38);
    }
    HIDWORD(v17) = 0;
    v5 = 1;
    v14 = (float)v12;
    v15 = (float)v38.m128i_i32[1];
    v16 = (float)v11;
    v41.m128_f32[0] = (float)v12;
    *(float *)&v17 = (float)v38.m128i_i32[3];
    v41.m128_f32[1] = (float)v38.m128i_i32[1];
    v41.m128_f32[2] = (float)v11;
    v41.m128_f32[3] = (float)v38.m128i_i32[3];
    v18 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v41, 1, 0);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x49Au, 0LL);
      return v4;
    }
    v19 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
    v20 = CComposeTop::RenderWorker(a3, a2, v19, *((_QWORD *)a3 + 2), &v37);
    v4 = v20;
    if ( v20 >= 0 )
    {
      left = v37.left;
      if ( v14 > v37.left )
      {
        left = v14;
        v37.left = v14;
      }
      top = v37.top;
      v23 = v37.top;
      if ( v15 > v37.top )
      {
        v37.top = v15;
        top = v15;
        v23 = v15;
      }
      right = v37.right;
      if ( v37.right > v16 )
      {
        v37.right = v16;
        right = v16;
      }
      *(_QWORD *)&v25 = LODWORD(v37.bottom);
      if ( v37.bottom > *(float *)&v17 )
      {
        v37.bottom = *(FLOAT *)&v17;
        v25 = v17;
      }
      if ( right <= left || *(float *)&v25 <= v23 )
      {
        left = 0.0;
        *(_QWORD *)&v37.right = 0LL;
        top = 0.0;
        right = 0.0;
        *(_QWORD *)&v37.left = 0LL;
        v25 = 0.0;
      }
      if ( right <= left || *(float *)&v25 <= top )
        goto LABEL_32;
      v41 = 0LL;
      v27 = (__m128 *)PixelAlign(v38.m128i_i32, (unsigned int *)&v37, v25);
      v28 = this[12].m128i_i64[1] + 24;
      v41 = *v27;
      (*(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v28 + 112LL))(v28, &v41);
      this[2094].m128i_i8[8] = 1;
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect(&this[1923], &v37);
      v29 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
      v30 = *(__m128 *)(v29 + 16);
      v39[0] = *(__m128 *)v29;
      v31 = *(__m128 *)(v29 + 32);
      v39[1] = v30;
      v32 = *(__m128 *)(v29 + 48);
      LODWORD(v29) = *(_DWORD *)(v29 + 64);
      v39[2] = v31;
      v39[3] = v32;
      v40 = v29;
      v34 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v39, v39, v33);
      LOWORD(v40) = v40 & 0xC003;
      v40 = v34 ? v40 : 0;
      v41 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v39, &v37, v41.m128_f32);
      v35 = CComposeTop::NewContentRendered(a3);
      v4 = v35;
      if ( v35 >= 0 )
        goto LABEL_32;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x4BBu, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xECu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x4A5u, 0LL);
    }
LABEL_35:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
  v10 = CComposeTop::FullRender(a3, a2, v9, &this[1907]);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x489u, 0LL);
    return v4;
  }
LABEL_32:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_35;
  return v4;
}
