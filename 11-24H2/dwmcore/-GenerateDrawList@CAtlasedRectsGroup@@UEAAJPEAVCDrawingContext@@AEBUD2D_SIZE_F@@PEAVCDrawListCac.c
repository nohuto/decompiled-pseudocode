/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x1800193F0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F0F0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800712E0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x1800D70F0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800D7CE0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18010E730 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x18016AD60 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18016DF50 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v6; // esi
  struct CRenderingEffect *v7; // rbx
  BOOL v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(unsigned __int64, __int64 *); // rax
  __int64 *Size; // rax
  CCommonRenderingEffectFactory *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  int v15; // r14d
  __int64 v16; // r13
  __m128 v17; // xmm9
  unsigned __int64 v18; // r15
  struct CRenderingEffect *v19; // rax
  __int64 v20; // rcx
  __m128 v21; // xmm9
  __m128 v22; // xmm13
  __m128 v23; // xmm7
  int v24; // eax
  double v25; // xmm2_8
  double v26; // xmm3_8
  float v27; // xmm6_4
  double v28; // xmm2_8
  double v29; // xmm4_8
  double v30; // xmm3_8
  float v31; // xmm8_4
  double v32; // xmm1_8
  float v33; // xmm5_4
  float v34; // xmm7_4
  int v35; // eax
  int v36; // eax
  int v38; // eax
  bool IsOpaque; // [rsp+30h] [rbp-D0h]
  __int16 v40; // [rsp+40h] [rbp-C0h] BYREF
  char v41; // [rsp+42h] [rbp-BEh]
  __int16 v42; // [rsp+50h] [rbp-B0h] BYREF
  char v43; // [rsp+52h] [rbp-AEh]
  struct CRenderingEffect *v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __m128 v46; // [rsp+70h] [rbp-90h] BYREF
  __int128 v47; // [rsp+88h] [rbp-78h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  __int64 *v50; // [rsp+B0h] [rbp-50h]
  __m256i v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v52; // [rsp+D8h] [rbp-28h]
  CDrawListCache *v53; // [rsp+E0h] [rbp-20h]
  _BYTE v54[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v55[96]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v56[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v57; // [rsp+180h] [rbp+80h]
  float *v58; // [rsp+188h] [rbp+88h]
  int v59; // [rsp+1A0h] [rbp+A0h]
  _BYTE v60[4496]; // [rsp+1B0h] [rbp+B0h] BYREF
  float v61[9]; // [rsp+1340h] [rbp+1240h] BYREF
  __int128 v62; // [rsp+1364h] [rbp+1264h]
  char v63; // [rsp+1374h] [rbp+1274h]

  v53 = a4;
  v6 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v60);
  v7 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  CCpuClip::CCpuClip((CCpuClip *)v54);
  if ( *((_QWORD *)this + 9) )
  {
    BYTE12(v48) = CDrawingContext::IsWarpFastPathEnabled(a2);
    LODWORD(v47) = 2;
    v8 = *((_DWORD *)a2 + 61) != 0;
    v59 = 0;
    HIDWORD(v47) = v8;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 288), (struct CMILMatrix *)v56);
    CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)v56, (float *)&v47 + 1, (float *)&v47 + 2, 0LL);
    CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v54);
    *(_QWORD *)&v48 = v54;
    CDrawListBitmap::CDrawListBitmap(
      (CDrawListBitmap *)&v46,
      (struct IBitmapResource *)((*((_QWORD *)this + 9) + 72LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                                 + 9) >> 64)));
    if ( v46.m128_u64[1] )
    {
      LODWORD(v9) = 0;
      IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)&v46);
      v45 = 0LL;
      if ( v46.m128_u64[1] )
      {
        v10 = *(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v46.m128_u64[1] + 32LL);
        if ( (char *)v10 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
        {
          Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                              v46.m128_u64[1],
                              &v45);
        }
        else if ( (char *)v10 == (char *)CDxHandleBitmapRealization::GetSize )
        {
          Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v46.m128_u64[1], &v45);
        }
        else
        {
          Size = (__int64 *)v10(v46.m128_u64[1], &v45);
        }
        v9 = *Size;
        v45 = *Size;
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v44);
      v40 = 257;
      v42 = SamplerMode::k_ClampClampLinear;
      v43 = 1;
      memset(&v51, 0, 24);
      v41 = 1;
      v6 = CCommonRenderingEffectFactory::CreateRenderingEffect(v12, (__int64)&v46, &v42, (__int64)&v51, &v40, &v44);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v51);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7Du, 0LL);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v46);
        v7 = v44;
      }
      else
      {
        v7 = v44;
        CDrawListEntryBuilder::Begin(
          (CDrawListEntryBuilder *)v60,
          (const struct DrawListEntryBuilderSetupParams *)&v47,
          v44);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v46);
        v13 = (__int64 *)*((_QWORD *)this + 11);
        v14 = (__int64 *)*((_QWORD *)this + 10);
        v15 = DWORD2(v48);
        v52 = v13;
LABEL_10:
        v50 = v14;
        if ( v14 != v13 )
        {
          v16 = *v14;
          v17 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(*v14 + 76));
          v18 = (__int64)(*(_QWORD *)(*v14 + 112) - *(_QWORD *)(*v14 + 104)) >> 4;
          if ( (__int64)(*(_QWORD *)(*v14 + 88) - *(_QWORD *)(*v14 + 80)) >> 4 < v18 )
            v18 = (__int64)(*(_QWORD *)(*v14 + 88) - *(_QWORD *)(*v14 + 80)) >> 4;
          v19 = 0LL;
          v20 = 0LL;
          v17.m128_f32[0] = v17.m128_f32[0] / 255.0;
          v21 = _mm_shuffle_ps(v17, v17, 0);
          while ( 1 )
          {
            v49 = v20;
            v44 = v19;
            if ( (unsigned __int64)v19 >= v18 )
            {
              v13 = v52;
              v14 = v50 + 1;
              goto LABEL_10;
            }
            v22 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + *(_QWORD *)(v16 + 80)));
            v23 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + *(_QWORD *)(v16 + 104)));
            v24 = v15;
            if ( IsOpaque && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21.m128_f32[0] - 1.0) & _xmm) < 0.0000011920929 )
              v15 |= 1u;
            else
              v15 &= ~1u;
            DWORD2(v48) = v15;
            if ( v24 != v15 )
            {
              v38 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v60);
              v6 = v38;
              if ( v38 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x99u, 0LL);
                goto LABEL_23;
              }
              CDrawListEntryBuilder::Begin(
                (CDrawListEntryBuilder *)v60,
                (const struct DrawListEntryBuilderSetupParams *)&v47,
                v7);
            }
            memset(&v51.m256i_u64[2], 0, 16);
            *(__m128 *)v51.m256i_i8 = v23;
            memset_0(v61, 0, 0x70uLL);
            v61[2] = 0.0;
            v62 = _xmm;
            v63 = 1;
            v25 = (_mm_shuffle_ps(v22, v22, 170).m128_f32[0] - v22.m128_f32[0])
                / (_mm_shuffle_ps(v23, v23, 170).m128_f32[0] - v23.m128_f32[0]);
            v26 = v23.m128_f32[0] * v25;
            v27 = v25;
            v28 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
            v29 = v22.m128_f32[0] - v26;
            v30 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
            v31 = v29;
            v32 = (_mm_shuffle_ps(v22, v22, 255).m128_f32[0] - v30) / (_mm_shuffle_ps(v23, v23, 255).m128_f32[0] - v28);
            *(float *)&v29 = v32;
            v33 = v30 - v32 * v28;
            *(float *)&v30 = 1.0 / (float)(int)v9;
            v34 = 1.0 / (float)SHIDWORD(v45);
            v61[0] = (float)(*(float *)&v30 * v27) + 0.0;
            v61[1] = (float)(v34 * 0.0) + (float)(v27 * 0.0);
            v61[3] = (float)(*(float *)&v30 * 0.0) + (float)(*(float *)&v29 * 0.0);
            v61[4] = (float)(v34 * *(float *)&v29) + 0.0;
            v61[5] = 0.0;
            v61[8] = 1.0;
            v57 = 2LL;
            v58 = v61;
            v56[1] = 0LL;
            v46 = v21;
            v56[0] = v21;
            v61[6] = (float)((float)(*(float *)&v30 * v31) + (float)(v33 * 0.0)) + 0.0;
            v61[7] = (float)((float)(v34 * v33) + (float)(v31 * 0.0)) + 0.0;
            v35 = CDrawListEntryBuilder::Insert(
                    (CDrawListEntryBuilder *)v60,
                    (const struct PrimitiveGeometryDesc *)&v51,
                    (const struct PrimitiveVertexAttributesDesc *)v56,
                    0LL);
            v6 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xBCu, 0LL);
              goto LABEL_23;
            }
            v19 = (struct CRenderingEffect *)((char *)v44 + 1);
            v20 = v49 + 16;
          }
        }
        v36 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v60);
        v6 = v36;
        if ( v36 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC0u, 0LL);
        else
          CDrawListCache::Update(v53, a2, (struct CDrawListEntryBuilder *)v60);
      }
    }
    else
    {
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v46);
    }
  }
LABEL_23:
  CShapePtr::~CShapePtr((CShapePtr *)v55);
  if ( v7 )
    (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v7 + 8LL))(v7);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v60);
  return (unsigned int)v6;
}
