/*
 * XREFs of ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1800747B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180018F60 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::RenderNoOpLayer(CExternalLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  double left; // xmm3_8
  double top; // xmm4_8
  double v18; // xmm2_8
  float v19; // xmm0_4
  float v20; // xmm0_4
  double v21; // xmm2_8
  float v22; // xmm0_4
  float v23; // xmm0_4
  int v24; // eax
  bool v26; // al
  int v27; // [rsp+20h] [rbp-69h]
  _DWORD v28[8]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v29[4]; // [rsp+60h] [rbp-29h] BYREF
  int v30; // [rsp+A0h] [rbp+17h]
  struct D2D_RECT_F v31; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6 = *((_DWORD *)this + 28);
  v31.left = 0.0;
  v31.top = 0.0;
  v30 = v6;
  LODWORD(v31.right) = _mm_cvtepi32_ps(v2).m128_u32[0];
  v7 = *((_OWORD *)this + 3);
  LODWORD(v31.bottom) = _mm_cvtepi32_ps(v4).m128_u32[0];
  v8 = *((_OWORD *)this + 4);
  v29[0] = v7;
  v9 = *((_OWORD *)this + 5);
  v29[1] = v8;
  v10 = *((_OWORD *)this + 6);
  v29[2] = v9;
  v29[3] = v10;
  if ( CMILMatrix::IsIdentity<1>((__int64)v29)
    || (v26 = Windows::Foundation::Numerics::invert(
                (Windows::Foundation::Numerics *)v29,
                (const struct Windows::Foundation::Numerics::float4x4 *)v29,
                v11),
        LOWORD(v30) = v30 & 0xC003,
        v26) )
  {
    v12 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v29, 0, 1);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x120u, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 8LL))((char *)a2 + 24);
      v15 = *((_QWORD *)this + 1);
      v28[1] = 0;
      v28[2] = 0;
      left = v31.left;
      top = v31.top;
      v18 = (v31.right - left) / (v31.right - left);
      v19 = v18;
      *(float *)v28 = v19;
      v20 = left - left * v18;
      v21 = (v31.bottom - top) / (v31.bottom - top);
      *(float *)&v28[4] = v20;
      v22 = v21;
      *(float *)&v28[3] = v22;
      v23 = top - top * v21;
      *(float *)&v28[5] = v23;
      v24 = CDrawingContext::DrawBitmapRealization(
              a2,
              (struct IBitmapRealization *)((v15 + 8) & -(__int64)(v15 != 0)),
              &v31,
              (const struct D2D1::Matrix3x2F *)v28,
              0,
              v14,
              (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
      v13 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x914,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          (const char *)(unsigned int)v24,
          v27);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x127u, 0LL);
      }
      else
      {
        v13 = 0;
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  else
  {
    v13 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x11Eu, 0LL);
  }
  return v13;
}
