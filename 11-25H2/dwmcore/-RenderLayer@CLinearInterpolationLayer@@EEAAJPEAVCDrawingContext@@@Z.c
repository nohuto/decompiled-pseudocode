/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18023EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x180074398 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180074398.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@details@wil@@QEAA_NXZ @ 0x180286F30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, const void **a2)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rdi
  __m128i v4; // xmm0
  _QWORD *v5; // r14
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  bool v11; // zf
  __int64 (__fastcall *v12)(unsigned __int64); // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD v18[6]; // [rsp+40h] [rbp-18h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = (unsigned __int64)(a2 + 3);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v5 = (_QWORD *)((char *)this + 8);
  v18[0] = 0;
  v18[1] = 0;
  v18[2] = _mm_cvtepi32_ps(v2).m128_u32[0];
  v18[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( g_LockAndReadLayer )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 144LL))(*v5);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v8 + 112LL))(v8, v3 & -(__int64)(a2 != 0LL));
  }
  v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (__m128 *)&CMILMatrix::Identity, 0, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x68u, 0LL);
  }
  else
  {
    v11 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixLerpLayerRenderOpacity>::GetImpl'::`2'::impl) == 0;
    v12 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 8LL);
    if ( v11 )
    {
      v15 = v12(v3);
      v16 = CDrawingContext::DrawBitmapRealization(
              (__int64)a2,
              (*v5 + 8LL) & -(__int64)(*v5 != 0LL),
              (__int64)v18,
              (__int64)this + 120,
              v15 != 0,
              0,
              (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x78u, 0LL);
    }
    else
    {
      v13 = v12(v3);
      v14 = CDrawingContext::DrawBitmapRealization(
              (__int64)a2,
              (*v5 + 8LL) & -(__int64)(*v5 != 0LL),
              (__int64)v18,
              (__int64)this + 120,
              0,
              v13,
              (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x71u, 0LL);
    }
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  }
  return v10;
}
