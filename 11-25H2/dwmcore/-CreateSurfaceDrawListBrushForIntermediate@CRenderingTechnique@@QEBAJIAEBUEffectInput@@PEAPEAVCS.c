/*
 * XREFs of ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800DED18
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
        CRenderingTechnique *this,
        unsigned int a2,
        const struct EffectInput *a3,
        struct CSurfaceDrawListBrush **a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  char v8; // bp
  char v9; // r14
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  CMILRefCountImpl *v14; // rcx
  void (*v15)(void); // rax
  __int64 v16; // rcx
  __m128 v17; // xmm6
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, __int16 *); // rax
  __int64 *Size; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int16 v30; // [rsp+B0h] [rbp+8h] BYREF

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
  v13 = v11;
  if ( v11 )
  {
    LOBYTE(v30) = v10;
    HIBYTE(v30) = v8;
    *(_QWORD *)(v11 + 8) = 1065353216LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 20) = 1065353216LL;
    *(_DWORD *)(v11 + 28) = 0;
    *(_BYTE *)(v11 + 52) = 0;
    *(_QWORD *)v11 = &CSurfaceDrawListBrush::`vftable';
    v14 = *(CMILRefCountImpl **)a3;
    *(_QWORD *)(v11 + 56) = *(_QWORD *)a3;
    if ( v14 )
    {
      v15 = *(void (**)(void))(*(_QWORD *)v14 + 8LL);
      if ( (char *)v15 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v14);
      else
        v15();
    }
    v16 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v13 + 64) = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *(_BYTE *)(v13 + 72) = *((_BYTE *)a3 + 16);
    *(_WORD *)(v13 + 80) = v30;
    *(_BYTE *)(v13 + 82) = v9;
    *(_DWORD *)(v13 + 84) = *((_DWORD *)a3 + 12);
    *(_DWORD *)(v13 + 88) = *((_DWORD *)a3 + 13);
    *(_DWORD *)(v13 + 92) = *((_DWORD *)a3 + 14);
    *(_DWORD *)(v13 + 96) = *((_DWORD *)a3 + 15);
    *(_DWORD *)(v13 + 100) = *((_DWORD *)a3 + 16);
    *(_DWORD *)(v13 + 104) = *((_DWORD *)a3 + 17);
    *(_DWORD *)(v13 + 108) = *((_DWORD *)a3 + 18);
    *(_DWORD *)(v13 + 112) = *((_DWORD *)a3 + 19);
    *(_DWORD *)(v13 + 116) = *((_DWORD *)a3 + 20);
    *(_DWORD *)(v13 + 144) = 0;
    *(_OWORD *)(v13 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( v10 )
    {
      v17.m128_i32[0] = *((_DWORD *)a3 + 21);
      v18 = floorf_0(v17.m128_f32[0]);
      if ( (float)(v17.m128_f32[0] - v18) < 0.5 )
        v17.m128_f32[0] = v18 + 0.5;
      v19 = *((float *)a3 + 23);
      v20 = ceilf_0(v19);
      if ( (float)(v20 - v19) < 0.5 )
        v19 = v20 - 0.5;
      if ( v17.m128_f32[0] > v19 )
      {
        v17.m128_f32[0] = (float)(*((float *)a3 + 23) + *((float *)a3 + 21)) * 0.5;
        v19 = v17.m128_f32[0];
      }
      v21 = *((float *)a3 + 22);
      v22 = floorf_0(v21);
      if ( (float)(v21 - v22) < 0.5 )
        v21 = v22 + 0.5;
      v23 = *((float *)a3 + 24);
      v24 = ceilf_0(v23);
      if ( (float)(v24 - v23) < 0.5 )
        v23 = v24 - 0.5;
      if ( v21 > v23 )
      {
        v21 = (float)(*((float *)a3 + 24) + *((float *)a3 + 22)) * 0.5;
        v23 = v21;
      }
    }
    else
    {
      v17 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 84));
      LODWORD(v23) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
      LODWORD(v21) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
    }
    v25 = *((_QWORD *)a3 + 1);
    if ( v25 )
    {
      v26 = *(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v25 + 32LL);
      if ( (char *)v26 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
      {
        Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                            v25,
                            &v30);
      }
      else if ( (char *)v26 == (char *)CDxHandleBitmapRealization::GetSize )
      {
        Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v25, &v30, v12);
      }
      else
      {
        Size = (__int64 *)v26(v25, &v30);
      }
      v4 = *Size;
    }
    result = 0LL;
    *(float *)(v13 + 120) = v17.m128_f32[0] / (float)(int)v4;
    *(float *)(v13 + 124) = v21 / (float)SHIDWORD(v4);
    *(float *)(v13 + 128) = v19 / (float)(int)v4;
    *(float *)(v13 + 132) = v23 / (float)SHIDWORD(v4);
    *(_BYTE *)(v13 + 145) = 1;
    *a4 = (struct CSurfaceDrawListBrush *)v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
