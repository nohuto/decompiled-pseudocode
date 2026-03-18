/*
 * XREFs of ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x180241F44
 * Callers:
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180241D74 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x180241E64 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x180241EE8 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18014CE50 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRectangleCollection<8>::CalcOverhead(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // r11d
  int v7; // eax
  __m128 v8; // xmm2
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  BOOL v12; // edx
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  __m128i v17; // xmm5
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  __int64 result; // rax
  __m128i v26; // [rsp+20h] [rbp-58h]

  v3 = a1;
  v4 = 2LL * a2;
  v5 = 16LL * a3 + a1 + 4;
  v6 = a2;
  v7 = 1;
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(v3 + 16LL * a2 + 4));
  v9 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
  LODWORD(v10) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  LODWORD(v11) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v12 = v9 <= v8.m128_f32[0] || v10 <= v11;
  v13 = *(float *)(v5 + 8);
  v14 = *(float *)v5;
  if ( v13 > *(float *)v5 && *(float *)(v5 + 12) > *(float *)(v5 + 4) )
    v7 = 0;
  v15 = 0.0;
  if ( v12 )
  {
    if ( v7 || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
    {
      v10 = 0.0;
      v9 = 0.0;
      v11 = 0.0;
      v8.m128_i32[0] = 0;
    }
    else
    {
      v8 = (__m128)_mm_loadu_si128((const __m128i *)v5);
      LODWORD(v10) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
      LODWORD(v9) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
      LODWORD(v11) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    }
  }
  else if ( !v7 )
  {
    if ( v8.m128_f32[0] > v14 )
      v8.m128_i32[0] = *(_DWORD *)v5;
    if ( v11 > *(float *)(v5 + 4) )
      v11 = *(float *)(v5 + 4);
    if ( v13 > v9 )
      v9 = *(float *)(v5 + 8);
    if ( *(float *)(v5 + 12) > v10 )
      v10 = *(float *)(v5 + 12);
  }
  v16 = (float)(v9 - v8.m128_f32[0]) * (float)(v10 - v11);
  v17 = _mm_loadu_si128((const __m128i *)(v3 + 8 * v4 + 4));
  v26 = v17;
  if ( v14 > *(float *)v17.m128i_i32 )
    *(float *)v17.m128i_i32 = v14;
  v18 = *(float *)&v26.m128i_i32[1];
  v19 = *(float *)&v26.m128i_i32[1];
  if ( *(float *)(v5 + 4) > *(float *)&v26.m128i_i32[1] )
  {
    v18 = *(float *)(v5 + 4);
    v19 = v18;
  }
  v20 = *(float *)&v26.m128i_i32[2];
  v21 = v19;
  if ( *(float *)&v26.m128i_i32[2] > *(float *)(v5 + 8) )
    v20 = *(float *)(v5 + 8);
  v22 = *(float *)(v5 + 12);
  v23 = *(float *)&v26.m128i_i32[3];
  if ( *(float *)&v26.m128i_i32[3] > v22 )
  {
    v21 = v19;
    v23 = *(float *)(v5 + 12);
  }
  if ( v20 <= *(float *)v17.m128i_i32 || v23 <= v21 )
  {
    v18 = 0.0;
    v17.m128i_i32[0] = 0;
    v23 = 0.0;
    v20 = 0.0;
  }
  v24 = (float)((float)((float)((float)(v23 - v18) * (float)(v20 - *(float *)v17.m128i_i32)) + v16)
              - (float)((float)(*(float *)(v3 + 8 * v4 + 16) - *(float *)(v3 + 8 * v4 + 8))
                      * (float)(*(float *)(v3 + 8 * v4 + 12) - *(float *)(v3 + 8 * v4 + 4))))
      - (float)((float)(v22 - *(float *)(v5 + 4)) * (float)(*(float *)(v5 + 8) - *(float *)v5));
  if ( v24 < v15 )
  {
    v24 = 0.0;
    if ( v16 == v15 )
      v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  result = v6 + ((a3 * (a3 - 1)) >> 1);
  *(float *)(v3 + 8 * result + 148) = v24;
  *(float *)(v3 + 8 * result + 152) = v24 / v16;
  return result;
}
