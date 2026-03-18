/*
 * XREFs of ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800A27D0
 * Callers:
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800513D0 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2B98 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800A2B98.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800A2E98 (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180195460 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA_ea_180195460.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::GetUnOccludedWorldShape(__int64 a1, const __m128i *a2, float *a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  const __m128i *v6; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _DWORD *v10; // r13
  __int64 v11; // r12
  __int128 v12; // xmm6
  float *v13; // r9
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  __m128i v18; // xmm0
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  __int64 v22; // rbx
  int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // rax
  float v27; // xmm7_4
  const struct D2D_RECT_F *v28; // r9
  char v29; // r10
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm6_4
  float v33; // xmm2_4
  bool v34; // cc
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rdx
  __m128i v38; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-79h]
  const __m128i *v40; // [rsp+50h] [rbp-71h]
  _QWORD *v41; // [rsp+58h] [rbp-69h]
  unsigned __int64 v42[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v43; // [rsp+78h] [rbp-49h] BYREF
  struct D2D_POINT_2F v44[2]; // [rsp+88h] [rbp-39h] BYREF

  v4 = 0;
  v41 = a4;
  *a4 = 0LL;
  v6 = a2;
  v40 = a2;
  v8 = (_QWORD *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v39 = 0LL;
    *v8 = &CRectanglesShape::`vftable';
    v8[2] = v8 + 5;
    v8[3] = v8 + 5;
    v8[4] = v8 + 7;
    v8[7] = 0LL;
    if ( (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 4 )
    {
      v10 = v8 + 2;
      v11 = 0LL;
      do
      {
        v12 = 0LL;
        v43 = 0LL;
        if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)a3) )
        {
          v14 = a3[12] + *v13;
          v15 = a3[12] + v13[2];
          v16 = a3[13] + v13[1];
          v17 = a3[13] + v13[3];
          *(float *)&v43 = v14;
          *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(LODWORD(v15), LODWORD(v16));
          *((float *)&v43 + 3) = v17;
        }
        else
        {
          v27 = 0.0;
          if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a3) )
          {
            v31 = *a3;
            v29 = 1;
            v32 = a3[5];
            v14 = (float)(*a3 * v28->left) + a3[12];
            v15 = (float)(*a3 * v28->right) + a3[12];
            v33 = v32 * v28->bottom;
            v16 = (float)(v32 * v28->top) + a3[13];
            *(float *)&v43 = v14;
            v30 = v14;
            v17 = v33 + a3[13];
            v27 = v15;
            *(_QWORD *)((char *)&v43 + 4) = __PAIR64__(LODWORD(v15), LODWORD(v16));
            *((float *)&v43 + 3) = v17;
            if ( v31 <= 0.0 )
            {
              v12 = v43;
            }
            else
            {
              v34 = v32 <= 0.0;
              v12 = v43;
              if ( !v34 )
                goto LABEL_10;
            }
          }
          else
          {
            LODWORD(v17) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
            LODWORD(v15) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
            v14 = 0.0;
            LODWORD(v16) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
          }
          if ( v29 )
          {
            if ( v30 > v27 )
            {
              v35 = v14;
              *(float *)&v43 = v15;
              *((float *)&v43 + 2) = v14;
              v14 = v15;
              v12 = v43;
              v15 = v35;
            }
            if ( v16 <= v17 )
              goto LABEL_10;
            v36 = v16;
            *((float *)&v43 + 1) = v17;
            v16 = v17;
            *((float *)&v43 + 3) = v36;
            v17 = v36;
          }
          else
          {
            CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a3, v28, v44);
            v42[0] = 4LL;
            v42[1] = (unsigned __int64)v44;
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
              (float *)&v43,
              v42);
            v17 = *((float *)&v43 + 3);
            v15 = *((float *)&v43 + 2);
            v16 = *((float *)&v43 + 1);
            v14 = *(float *)&v43;
          }
        }
        v12 = v43;
LABEL_10:
        v18 = _mm_loadu_si128(v6);
        v38 = v18;
        if ( v14 > *(float *)v18.m128i_i32 )
        {
          *(float *)v38.m128i_i32 = v14;
          *(float *)v18.m128i_i32 = v14;
        }
        v19 = *(float *)&v38.m128i_i32[1];
        if ( v16 > *(float *)&v38.m128i_i32[1] )
        {
          *(float *)&v38.m128i_i32[1] = v16;
          v19 = v16;
        }
        v20 = *(float *)&v38.m128i_i32[2];
        if ( *(float *)&v38.m128i_i32[2] > v15 )
        {
          *(float *)&v38.m128i_i32[2] = v15;
          v20 = v15;
        }
        v21 = *(float *)&v38.m128i_i32[3];
        if ( *(float *)&v38.m128i_i32[3] > v17 )
        {
          *(float *)&v38.m128i_i32[3] = v17;
          v21 = v17;
        }
        if ( v20 <= *(float *)v18.m128i_i32 || v21 <= v19 )
        {
          v37 = v9[3] - v9[2];
          v38 = 0uLL;
          *(_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                       v9 + 2,
                       v37 >> 4,
                       1LL) = v12;
        }
        else
        {
          v22 = (__int64)(v9[3] - v9[2]) >> 4;
          *(_OWORD *)&v44[0].x = 0LL;
          detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::resize(
            v9 + 2,
            v22 + 4,
            v44);
          v24 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                  (unsigned int)&v43,
                  (unsigned int)&v38,
                  v23,
                  *v10 + 16 * (int)v22,
                  4);
          *(_OWORD *)&v44[0].x = 0LL;
          detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::resize(
            v9 + 2,
            v22 + v24,
            v44);
          v6 = v40;
        }
        v11 += 16LL;
        v25 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
        ++v39;
      }
      while ( v39 < v25 >> 4 );
    }
    *v41 = v9;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB4u, 0LL);
  }
  return v4;
}
