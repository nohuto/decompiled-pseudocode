/*
 * XREFs of ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x1801DB0CC
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x1801DB000 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800DD940 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800DD9D4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011AD84 (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801DB9E0 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 */

__int64 __fastcall CShadowBlurProducer::Create(
        __int128 *a1,
        struct CDrawingContext *a2,
        __int64 *a3,
        __int64 a4,
        const __m128i *a5,
        int a6,
        __int64 *a7,
        _OWORD *a8)
{
  __m128 v12; // xmm6
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  CCachedImageProducer *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  int v22; // edi
  const __m128i *v23; // rdx
  const __m128i *v25; // rdx
  const __m128i *v26; // [rsp+28h] [rbp-58h] BYREF
  char v27; // [rsp+30h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v12 = (__m128)_mm_loadu_si128(a5);
  v13 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v14 = v12.m128_f32[0] + 1.0;
  v15 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] + 1.0;
  v16 = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] + 1.0;
  v17 = v13 + 1.0;
  v18 = (CCachedImageProducer *)MIDL_user_allocate(0x80uLL);
  v19 = (__int64)v18;
  if ( v18 )
  {
    CCachedImageProducer::CCachedImageProducer(v18);
    v20 = *a3;
    *(_QWORD *)(v19 + 16) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v19 = &CShadowBlurProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    v21 = *a1;
    *(_QWORD *)(v19 + 96) = a4;
    *(_QWORD *)(v19 + 88) = v20;
    *(_OWORD *)(v19 + 72) = v21;
    LODWORD(v21) = a6;
    *(float *)(v19 + 104) = v14;
    *(float *)(v19 + 108) = v15;
    *(float *)(v19 + 112) = v17;
    *(float *)(v19 + 116) = v16;
    *(_DWORD *)(v19 + 120) = v21;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v19 + 8));
    a5 = 0LL;
    v26 = 0LL;
    v27 = 1;
    v22 = CShadowBlurProducer::ProduceRealizationInternal(v19, a2, &v26, a8);
    if ( v27 )
    {
      v23 = a5;
      a5 = v26;
      if ( v23 )
        std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
    }
    if ( v22 >= 0 )
    {
      CCachedImageProducer::Initialize(v19, (_QWORD **)&a5);
      v25 = a5;
      *a7 = v19;
      if ( v25 )
        std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x275,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v22);
      if ( a5 )
        std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease((CEffectIntermediateProducer *)v19);
      return (unsigned int)v22;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
