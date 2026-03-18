/*
 * XREFs of ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180135494
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180142C00 (-GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeBoundingContext::PostSubgraph(CShapeBoundingContext *this, bool *a2)
{
  const __m128i *v3; // rbx
  __m128 v4; // xmm2
  const __m128i *v5; // rdi
  CComponentTransform2D *v6; // rcx
  bool v7; // zf
  __m128 v8; // xmm0
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  void (__fastcall *v12)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *); // rax
  float *v13; // rax
  __int32 v14; // xmm2_4
  int v15; // ecx
  __int32 v16; // xmm1_4
  float m22; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float *v20; // rax
  float v21; // xmm1_4
  unsigned int v22; // ecx
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  BOOL v28; // ecx
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  BOOL v32; // eax
  D2D_SIZE_F v33[2]; // [rsp+28h] [rbp-29h] BYREF
  struct D2D_MATRIX_3X2_F v34; // [rsp+38h] [rbp-19h] BYREF
  float v35; // [rsp+50h] [rbp-1h] BYREF
  float v36; // [rsp+54h] [rbp+3h]
  __int32 v37; // [rsp+58h] [rbp+7h]
  _DWORD v38[2]; // [rsp+5Ch] [rbp+Bh] BYREF
  __int32 v39; // [rsp+64h] [rbp+13h]
  __int32 v40; // [rsp+68h] [rbp+17h]
  __int32 v41; // [rsp+6Ch] [rbp+1Bh]

  *a2 = 1;
  v3 = (const __m128i *)*((_QWORD *)this + 1);
  v4 = (__m128)_mm_loadu_si128(v3 + 5);
  if ( v3[6].m128i_i8[1] )
  {
    v5 = (const __m128i *)*((_QWORD *)this + 2);
    v6 = (CComponentTransform2D *)v3[4].m128i_i64[1];
    if ( *((_BYTE *)this + 64) && v6 )
    {
      if ( v5 )
        v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      else
        v10 = *((_QWORD *)this + 7);
      v33[0] = (D2D_SIZE_F)v10;
      v11 = *(_QWORD *)v6;
      memset(&v34, 0, sizeof(v34));
      v12 = *(void (__fastcall **)(CComponentTransform2D *__hidden, const struct D2D_SIZE_F *, struct D2D_MATRIX_3X2_F *))(v11 + 208);
      if ( v12 == CComponentTransform2D::GetRealization )
        CComponentTransform2D::GetRealization(v6, v33, &v34);
      else
        v12(v6, v33, &v34);
      v13 = &v35;
      v14 = v3[5].m128i_i32[0];
      v15 = 4;
      v16 = v3[5].m128i_i32[2];
      v36 = *(float *)&v3[5].m128i_i32[1];
      *(float *)v38 = v36;
      v39 = v3[5].m128i_i32[3];
      v41 = v39;
      v35 = *(float *)&v14;
      v37 = v16;
      v38[1] = v14;
      v40 = v16;
      do
      {
        m22 = v34.m22;
        v18 = v34.m12 * *v13;
        *v13 = (float)((float)(v34.m21 * v13[1]) + (float)(v34.m11 * *v13)) + v34.dx;
        v13[1] = (float)((float)(m22 * v13[1]) + v18) + v34.dy;
        v13 += 2;
        --v15;
      }
      while ( v15 );
      v19 = v35;
      v20 = (float *)v38;
      v21 = v36;
      v22 = 1;
      *(float *)v3[5].m128i_i32 = v35;
      *(float *)&v3[5].m128i_i32[1] = v21;
      *(float *)&v3[5].m128i_i32[2] = v19;
      *(float *)&v3[5].m128i_i32[3] = v21;
      do
      {
        v23 = *(v20 - 1);
        if ( v19 > v23 )
        {
          *(float *)v3[5].m128i_i32 = v23;
          v19 = v23;
        }
        else if ( v23 > *(float *)&v3[5].m128i_i32[2] )
        {
          *(float *)&v3[5].m128i_i32[2] = v23;
        }
        v24 = *v20;
        if ( v21 > *v20 )
        {
          *(float *)&v3[5].m128i_i32[1] = v24;
          v21 = v24;
        }
        else if ( v24 > *(float *)&v3[5].m128i_i32[3] )
        {
          *(float *)&v3[5].m128i_i32[3] = v24;
        }
        ++v22;
        v20 += 2;
      }
      while ( v22 < 4 );
      v4 = (__m128)_mm_loadu_si128(v3 + 5);
    }
    if ( v5 )
    {
      v7 = v5[6].m128i_i8[1] == 0;
      v8 = (__m128)_mm_loadu_si128(v5 + 5);
      *(__m128 *)&v33[0].width = v8;
      if ( v7 )
      {
        LODWORD(v33[0].width) = v4.m128_i32[0];
        LODWORD(v33[1].height) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
        LODWORD(v33[0].height) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
        LODWORD(v33[1].width) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
      }
      else
      {
        v25 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
        LODWORD(v26) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
        LODWORD(v27) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
        v28 = v25 <= v8.m128_f32[0] || v26 <= v27;
        v29 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
        LODWORD(v30) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
        LODWORD(v31) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
        v32 = v29 <= v4.m128_f32[0] || v30 <= v31;
        if ( v28 )
        {
          if ( v32 )
          {
            v33[1].height = 0.0;
            v33[1].width = 0.0;
            v33[0].height = 0.0;
            v33[0].width = 0.0;
            goto LABEL_7;
          }
          LODWORD(v33[0].width) = v4.m128_i32[0];
          v33[0].height = v31;
          v33[1].width = v29;
        }
        else
        {
          if ( v32 )
            goto LABEL_8;
          if ( v8.m128_f32[0] > v4.m128_f32[0] )
          {
            LODWORD(v33[0].width) = v4.m128_i32[0];
            v8 = *(__m128 *)&v33[0].width;
          }
          if ( v27 > v31 )
          {
            v33[0].height = v31;
            v8 = *(__m128 *)&v33[0].width;
          }
          if ( v29 > v25 )
          {
            v33[1].width = v29;
            v8 = *(__m128 *)&v33[0].width;
          }
          if ( v30 <= v26 )
            goto LABEL_8;
        }
        v33[1].height = v30;
      }
LABEL_7:
      v8 = *(__m128 *)&v33[0].width;
LABEL_8:
      v5[6].m128i_i16[0] = 256;
      v5[5] = (const __m128i)v8;
    }
  }
  *((_BYTE *)this + 64) = 1;
  return 0LL;
}
