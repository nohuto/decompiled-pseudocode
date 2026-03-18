/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180047EA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x180082478 (--0CCpuClip@@QEAA@XZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18010D5A0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // r8
  __int64 (__fastcall *v11)(unsigned __int64, __int64 *); // rax
  __int64 *Size; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  int v17; // r14d
  __int64 v18; // r13
  __m128 v19; // xmm9
  unsigned __int64 v20; // r15
  struct CRenderingEffect *v21; // rax
  __int64 v22; // rcx
  __m128 v23; // xmm9
  __m128 v24; // xmm13
  __m128 v25; // xmm7
  int v26; // eax
  double v27; // xmm2_8
  double v28; // xmm3_8
  float v29; // xmm6_4
  double v30; // xmm2_8
  double v31; // xmm4_8
  double v32; // xmm3_8
  float v33; // xmm8_4
  double v34; // xmm1_8
  float v35; // xmm5_4
  float v36; // xmm7_4
  int v37; // eax
  int v38; // eax
  int v40; // eax
  bool IsOpaque; // [rsp+30h] [rbp-D0h]
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
    CMILMatrix::Get2DScaleDimensionsWithPerspective(v56, (char *)&v47 + 4, (char *)&v47 + 8, 0LL);
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
        v11 = *(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v46.m128_u64[1] + 32LL);
        if ( (char *)v11 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
        {
          Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                              v46.m128_u64[1],
                              &v45);
        }
        else if ( (char *)v11 == (char *)CDxHandleBitmapRealization::GetSize )
        {
          Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v46.m128_u64[1], &v45, v10);
        }
        else
        {
          Size = (__int64 *)v11(v46.m128_u64[1], &v45);
        }
        v9 = *Size;
        v45 = *Size;
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v44);
      v42 = SamplerMode::k_ClampClampLinear;
      v43 = 1;
      memset(&v51, 0, 24);
      v6 = CCommonRenderingEffectFactory::CreateRenderingEffect(v13, &v46, &v42, &v51);
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
        v15 = (__int64 *)*((_QWORD *)this + 11);
        v16 = (__int64 *)*((_QWORD *)this + 10);
        v17 = DWORD2(v48);
        v52 = v15;
LABEL_10:
        v50 = v16;
        if ( v16 != v15 )
        {
          v18 = *v16;
          v19 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(*v16 + 76));
          v20 = (__int64)(*(_QWORD *)(*v16 + 112) - *(_QWORD *)(*v16 + 104)) >> 4;
          if ( (__int64)(*(_QWORD *)(*v16 + 88) - *(_QWORD *)(*v16 + 80)) >> 4 < v20 )
            v20 = (__int64)(*(_QWORD *)(*v16 + 88) - *(_QWORD *)(*v16 + 80)) >> 4;
          v21 = 0LL;
          v22 = 0LL;
          v19.m128_f32[0] = v19.m128_f32[0] / 255.0;
          v23 = _mm_shuffle_ps(v19, v19, 0);
          while ( 1 )
          {
            v49 = v22;
            v44 = v21;
            if ( (unsigned __int64)v21 >= v20 )
            {
              v15 = v52;
              v16 = v50 + 1;
              goto LABEL_10;
            }
            v24 = (__m128)_mm_loadu_si128((const __m128i *)(v22 + *(_QWORD *)(v18 + 80)));
            v25 = (__m128)_mm_loadu_si128((const __m128i *)(v22 + *(_QWORD *)(v18 + 104)));
            v26 = v17;
            if ( IsOpaque && COERCE_FLOAT(COERCE_UNSIGNED_INT(v23.m128_f32[0] - 1.0) & _xmm) < 0.0000011920929 )
              v17 |= 1u;
            else
              v17 &= ~1u;
            DWORD2(v48) = v17;
            if ( v26 != v17 )
            {
              v40 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v60, v14);
              v6 = v40;
              if ( v40 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x99u, 0LL);
                goto LABEL_23;
              }
              CDrawListEntryBuilder::Begin(
                (CDrawListEntryBuilder *)v60,
                (const struct DrawListEntryBuilderSetupParams *)&v47,
                v7);
            }
            memset(&v51.m256i_u64[2], 0, 16);
            *(__m128 *)v51.m256i_i8 = v25;
            memset_0(v61, 0, 0x70uLL);
            v61[2] = 0.0;
            v62 = _xmm;
            v63 = 1;
            v27 = (_mm_shuffle_ps(v24, v24, 170).m128_f32[0] - v24.m128_f32[0])
                / (_mm_shuffle_ps(v25, v25, 170).m128_f32[0] - v25.m128_f32[0]);
            v28 = v25.m128_f32[0] * v27;
            v29 = v27;
            v30 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
            v31 = v24.m128_f32[0] - v28;
            v32 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
            v33 = v31;
            v34 = (_mm_shuffle_ps(v24, v24, 255).m128_f32[0] - v32) / (_mm_shuffle_ps(v25, v25, 255).m128_f32[0] - v30);
            *(float *)&v31 = v34;
            v35 = v32 - v34 * v30;
            *(float *)&v32 = 1.0 / (float)(int)v9;
            v36 = 1.0 / (float)SHIDWORD(v45);
            v61[0] = (float)(*(float *)&v32 * v29) + 0.0;
            v61[1] = (float)(v36 * 0.0) + (float)(v29 * 0.0);
            v61[3] = (float)(*(float *)&v32 * 0.0) + (float)(*(float *)&v31 * 0.0);
            v61[4] = (float)(v36 * *(float *)&v31) + 0.0;
            v61[5] = 0.0;
            v61[8] = 1.0;
            v57 = 2LL;
            v58 = v61;
            v56[1] = 0LL;
            v46 = v23;
            v56[0] = v23;
            v61[6] = (float)((float)(*(float *)&v32 * v33) + (float)(v35 * 0.0)) + 0.0;
            v61[7] = (float)((float)(v36 * v35) + (float)(v33 * 0.0)) + 0.0;
            v37 = CDrawListEntryBuilder::Insert(
                    (CDrawListEntryBuilder *)v60,
                    (const struct PrimitiveGeometryDesc *)&v51,
                    (const struct PrimitiveVertexAttributesDesc *)v56,
                    0LL);
            v6 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xBCu, 0LL);
              goto LABEL_23;
            }
            v21 = (struct CRenderingEffect *)((char *)v44 + 1);
            v22 = v49 + 16;
          }
        }
        v38 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v60, v14);
        v6 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u, 0LL);
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
