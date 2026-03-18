/*
 * XREFs of ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9E78
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
        CRenderingTechnique *this,
        unsigned int a2,
        const struct EffectInput *a3,
        struct CSurfaceDrawListBrush **a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  char v8; // di
  char v9; // r14
  char v10; // bp
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128 v13; // xmm6
  float v14; // xmm0_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, char *); // rax
  __int64 *Size; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char v26; // [rsp+B0h] [rbp+8h] BYREF
  char v27; // [rsp+B1h] [rbp+9h]
  char v28; // [rsp+B2h] [rbp+Ah]

  v4 = 0LL;
  v7 = 44LL * a2;
  v8 = *((_BYTE *)this + v7 + 88);
  v9 = *((_BYTE *)this + v7 + 89);
  if ( !v8 )
  {
    v8 = 1;
    v9 = 1;
  }
  v10 = *((_BYTE *)a3 + 104);
  v11 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  if ( v11
    && (v26 = v10,
        v27 = v8,
        v28 = v9,
        (v12 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(v11, a3, &v26, (char *)a3 + 48, 0)) != 0) )
  {
    if ( v10 )
    {
      v13.m128_i32[0] = *((_DWORD *)a3 + 21);
      v14 = floorf_0(v13.m128_f32[0]);
      if ( (float)(v13.m128_f32[0] - v14) < 0.5 )
        v13.m128_f32[0] = v14 + 0.5;
      v15 = *((float *)a3 + 23);
      v16 = ceilf_0(v15);
      if ( (float)(v16 - v15) < 0.5 )
        v15 = v16 - 0.5;
      if ( v13.m128_f32[0] > v15 )
      {
        v13.m128_f32[0] = (float)(*((float *)a3 + 23) + *((float *)a3 + 21)) * 0.5;
        v15 = v13.m128_f32[0];
      }
      v17 = *((float *)a3 + 22);
      v18 = floorf_0(v17);
      if ( (float)(v17 - v18) < 0.5 )
        v17 = v18 + 0.5;
      v19 = *((float *)a3 + 24);
      v20 = ceilf_0(v19);
      if ( (float)(v20 - v19) < 0.5 )
        v19 = v20 - 0.5;
      if ( v17 > v19 )
      {
        v17 = (float)(*((float *)a3 + 24) + *((float *)a3 + 22)) * 0.5;
        v19 = v17;
      }
    }
    else
    {
      v13 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 84));
      LODWORD(v19) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
      LODWORD(v15) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
      LODWORD(v17) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
    }
    v21 = *((_QWORD *)a3 + 1);
    if ( v21 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 32LL);
      if ( (char *)v22 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
      {
        Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                            v21,
                            &v26);
      }
      else if ( (char *)v22 == (char *)CDxHandleBitmapRealization::GetSize )
      {
        Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v21, &v26);
      }
      else
      {
        Size = (__int64 *)v22(v21, &v26);
      }
      v4 = *Size;
    }
    result = 0LL;
    *(float *)(v12 + 120) = v13.m128_f32[0] / (float)(int)v4;
    *(float *)(v12 + 124) = v17 / (float)SHIDWORD(v4);
    *(float *)(v12 + 128) = v15 / (float)(int)v4;
    *(float *)(v12 + 132) = v19 / (float)SHIDWORD(v4);
    *(_BYTE *)(v12 + 145) = 1;
    *a4 = (struct CSurfaceDrawListBrush *)v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
