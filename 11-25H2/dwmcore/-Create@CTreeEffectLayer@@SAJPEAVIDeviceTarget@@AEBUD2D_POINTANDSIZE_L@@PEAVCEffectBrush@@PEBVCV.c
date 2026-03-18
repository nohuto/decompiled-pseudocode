/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180029038
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180028A60 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800293A0 (--0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitma.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180029650 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        _QWORD *a1,
        __m128i *a2,
        CEffectBrush *a3,
        __int64 a4,
        float *a5,
        __int64 a6,
        _QWORD *a7)
{
  __m128 v7; // xmm2
  float v9; // xmm7_4
  __m128i v13; // xmm6
  int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // xmm6_8
  __int64 (__fastcall *v17)(_QWORD *); // rax
  unsigned __int64 v18; // rdi
  int v19; // ecx
  __m128i v20; // xmm0
  int v21; // edx
  __m128i v22; // xmm0
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edi
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  float v32[4]; // [rsp+48h] [rbp-71h] BYREF
  __m128i v33; // [rsp+58h] [rbp-61h] BYREF
  const char *v34; // [rsp+68h] [rbp-51h] BYREF
  int v35; // [rsp+70h] [rbp-49h]
  _BYTE v36[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v37[4]; // [rsp+90h] [rbp-29h] BYREF
  int v38; // [rsp+94h] [rbp-25h]

  v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *a7 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _BYTE *))(a1[1] + 24LL))(a1 + 1, v37);
  v38 = 1;
  v13 = *a2;
  v33 = *a2;
  if ( a3 && CEffectBrush::HasBlurEffectNode(a3) )
  {
    v14 = (int)a5[2];
    v33.m128i_i32[0] = (int)*a5;
    *(__int64 *)((char *)v33.m128i_i64 + 4) = __PAIR64__(v14, (int)a5[1]);
    v33.m128i_i32[3] = (int)a5[3];
    v13 = v33;
  }
  else
  {
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  }
  v15 = *a1;
  v33 = v13;
  v16 = _mm_srli_si128(v13, 8).m128i_u64[0];
  v17 = *(__int64 (__fastcall **)(_QWORD *))(v15 + 40);
  v18 = HIDWORD(v16);
  if ( (unsigned int)v14 > HIDWORD(v16) )
    LODWORD(v18) = v14;
  v19 = *(_DWORD *)(v17(a1) + 960);
  if ( (unsigned int)v18 > v19 )
    v9 = (float)v19 / (float)(int)v18;
  v20 = (__m128i)COERCE_UNSIGNED_INT((float)v14);
  *(float *)v20.m128i_i32 = *(float *)v20.m128i_i32 * v9;
  if ( (_mm_cvtsi128_si32(v20) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v20.m128i_i32 - *(float *)v20.m128i_i32;
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v21 = (int)*(float *)v20.m128i_i32 - _mm_cvtsi128_si32((__m128i)v7);
  }
  else
  {
    v32[0] = *(float *)v20.m128i_i32 + 6291456.25;
    v21 = (int)(LODWORD(v32[0]) << 10) >> 11;
  }
  v22 = (__m128i)COERCE_UNSIGNED_INT((float)v33.m128i_i32[3]);
  v33.m128i_i32[2] = v21;
  *(float *)v22.m128i_i32 = *(float *)v22.m128i_i32 * v9;
  if ( (_mm_cvtsi128_si32(v22) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v22.m128i_i32 - *(float *)v22.m128i_i32;
    v23 = (int)*(float *)v22.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v32[0] = *(float *)v22.m128i_i32 + 6291456.25;
    v23 = (int)(LODWORD(v32[0]) << 10) >> 11;
  }
  v33.m128i_i32[3] = v23;
  if ( v21 <= 0 || v23 <= 0 )
  {
    v26 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0x80u, 0LL);
    return v26;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 64LL))(a4, 92LL) )
  {
    v26 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x7Bu, 0LL);
    return v26;
  }
  *(_QWORD *)v32 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v32);
  v24 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v36);
  v35 = 44;
  v34 = "DWM Scratch Rendertarget (tree effect layer)";
  v25 = CExternalLayer::CreateBitmap(&v34, &v33, v37, v24, 1, v32);
  v26 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x6Eu, 0LL);
    v30 = *(_QWORD **)v32;
    if ( !*(_QWORD *)v32 )
      return v26;
    v29 = **(_QWORD **)v32;
    goto LABEL_20;
  }
  v27 = operator new(0x120uLL);
  v28 = *(_QWORD **)v32;
  if ( v27 )
    v27 = (_QWORD *)CTreeEffectLayer::CTreeEffectLayer(v27, &v33, a5, *(_QWORD *)v32, a3, a6, LODWORD(v9));
  *a7 = v27;
  v27[32] = a4;
  if ( v28 )
  {
    v29 = *v28;
    v30 = v28;
LABEL_20:
    (*(void (__fastcall **)(_QWORD *))(v29 + 16))(v30);
  }
  return v26;
}
