/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769C8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B94 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1802875D0 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  float v15; // xmm7_4
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  __int128 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  struct Windows::Foundation::Numerics::float4x4 *v31; // r8
  bool v32; // al
  int v33; // eax
  __int128 v35; // [rsp+38h] [rbp-A9h] BYREF
  __m128i v36; // [rsp+48h] [rbp-99h] BYREF
  _OWORD v37[4]; // [rsp+58h] [rbp-89h] BYREF
  int v38; // [rsp+98h] [rbp-49h]
  __int128 v39; // [rsp+A8h] [rbp-39h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_32;
    v35 = 0LL;
    if ( this[1230].m128i_i8[9] )
    {
      v11 = this[1933].m128i_i32[0];
      v12 = 0;
      v13 = this[1933].m128i_i32[1];
      v36.m128i_i64[0] = 0LL;
      v36.m128i_i64[1] = __PAIR64__(v13, v11);
    }
    else
    {
      v11 = this[1932].m128i_i32[2];
      v36 = this[1932];
      v12 = _mm_cvtsi128_si32(v36);
    }
    v5 = 1;
    v14 = (float)v12;
    v15 = (float)v11;
    *(float *)&v39 = (float)v12;
    *((float *)&v39 + 1) = (float)v36.m128i_i32[1];
    *((float *)&v39 + 2) = (float)v11;
    *((float *)&v39 + 3) = (float)v36.m128i_i32[3];
    v16 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v39, 1, 0);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x4AEu, 0LL);
      return v4;
    }
    v17 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
    v18 = CComposeTop::RenderWorker(a3, a2, v17);
    v4 = v18;
    if ( v18 >= 0 )
    {
      v19 = *(float *)&v35;
      if ( v14 > *(float *)&v35 )
      {
        v19 = v14;
        *(float *)&v35 = v14;
      }
      v20 = *((float *)&v35 + 1);
      v21 = *((float *)&v35 + 1);
      if ( (float)v36.m128i_i32[1] > *((float *)&v35 + 1) )
      {
        *((float *)&v35 + 1) = (float)v36.m128i_i32[1];
        v20 = (float)v36.m128i_i32[1];
        v21 = (float)v36.m128i_i32[1];
      }
      v22 = *((float *)&v35 + 2);
      if ( *((float *)&v35 + 2) > v15 )
      {
        *((float *)&v35 + 2) = v15;
        v22 = v15;
      }
      v23 = *((float *)&v35 + 3);
      if ( *((float *)&v35 + 3) > (float)v36.m128i_i32[3] )
      {
        *((float *)&v35 + 3) = (float)v36.m128i_i32[3];
        v23 = (float)v36.m128i_i32[3];
      }
      if ( v22 <= v19 || v23 <= v21 )
      {
        v19 = 0.0;
        v20 = 0.0;
        v22 = 0.0;
        v35 = 0uLL;
        v23 = 0.0;
      }
      if ( v22 <= v19 || v23 <= v20 )
        goto LABEL_32;
      v39 = 0LL;
      v25 = (__int128 *)PixelAlign(&v36, &v35);
      v26 = this[12].m128i_i64[1] + 24;
      v39 = *v25;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 112LL))(v26, &v39);
      this[2118].m128i_i8[8] = 1;
      CTargetDirtyBase<8>::AddTightDeviceDirtyRect(&this[1947], &v35);
      v27 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
      v28 = *(_OWORD *)(v27 + 16);
      v37[0] = *(_OWORD *)v27;
      v29 = *(_OWORD *)(v27 + 32);
      v37[1] = v28;
      v30 = *(_OWORD *)(v27 + 48);
      LODWORD(v27) = *(_DWORD *)(v27 + 64);
      v37[2] = v29;
      v37[3] = v30;
      v38 = v27;
      v32 = Windows::Foundation::Numerics::invert(
              (Windows::Foundation::Numerics *)v37,
              (const struct Windows::Foundation::Numerics::float4x4 *)v37,
              v31);
      LOWORD(v38) = v38 & 0xC003;
      v38 = v32 ? v38 : 0;
      v39 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v37, &v35, &v39);
      v33 = CComposeTop::NewContentRendered((CRectanglesShape **)a3, (__int64)&v39);
      v4 = v33;
      if ( v33 >= 0 )
        goto LABEL_32;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x4CFu, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xECu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x4B9u, 0LL);
    }
LABEL_35:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(__int8 *))(this[5].m128i_i64[1] + 64))(&this[5].m128i_i8[8]);
  v10 = CComposeTop::FullRender(a3, (__int64)a2, v9);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x49Du, 0LL);
    return v4;
  }
LABEL_32:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_35;
  return v4;
}
