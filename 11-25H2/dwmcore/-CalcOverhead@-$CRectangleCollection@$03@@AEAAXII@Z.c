/*
 * XREFs of ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180248A84
 * Callers:
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18024899C (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180248A00 (-UpdateOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CRectangleCollection<4>::CalcOverhead(__int64 a1, unsigned int a2, unsigned int a3)
{
  float *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r11
  float v8; // xmm10_4
  float v9; // xmm5_4
  __m128i v10; // xmm4
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  __int64 result; // rax
  __m128i v20; // [rsp+20h] [rbp-68h] BYREF

  v20 = *(__m128i *)(a1 + 16LL * a2 + 4);
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)v20.m128i_i32,
    (float *)(16LL * a3 + a1 + 4));
  v8 = *v5;
  v9 = (float)(*(float *)&v20.m128i_i32[3] - *(float *)&v20.m128i_i32[1])
     * (float)(*(float *)&v20.m128i_i32[2] - *(float *)v20.m128i_i32);
  v10 = _mm_loadu_si128((const __m128i *)(v6 + 8 * v7 + 4));
  v20 = v10;
  if ( v8 > *(float *)v10.m128i_i32 )
    *(float *)v10.m128i_i32 = v8;
  v11 = *(float *)&v20.m128i_i32[1];
  v12 = v5[1];
  v13 = *(float *)&v20.m128i_i32[1];
  if ( v12 > *(float *)&v20.m128i_i32[1] )
  {
    v11 = v5[1];
    v13 = v11;
  }
  v14 = v5[2];
  v15 = *(float *)&v20.m128i_i32[2];
  if ( *(float *)&v20.m128i_i32[2] > v14 )
    v15 = v5[2];
  v16 = v5[3];
  v17 = *(float *)&v20.m128i_i32[3];
  if ( *(float *)&v20.m128i_i32[3] > v16 )
    v17 = v5[3];
  if ( v15 <= *(float *)v10.m128i_i32 || v17 <= v13 )
  {
    v11 = 0.0;
    v10.m128i_i32[0] = 0;
    v17 = 0.0;
    v15 = 0.0;
  }
  v18 = (float)((float)((float)((float)(v17 - v11) * (float)(v15 - *(float *)v10.m128i_i32)) + v9)
              - (float)((float)(*(float *)(v6 + 8 * v7 + 16) - *(float *)(v6 + 8 * v7 + 8))
                      * (float)(*(float *)(v6 + 8 * v7 + 12) - *(float *)(v6 + 8 * v7 + 4))))
      - (float)((float)(v14 - v8) * (float)(v16 - v12));
  if ( v18 < 0.0 )
  {
    v18 = 0.0;
    if ( v9 == 0.0 )
      v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  result = a2 + ((a3 * (a3 - 1)) >> 1);
  *(float *)(v6 + 8 * result + 84) = v18;
  *(float *)(v6 + 8 * result + 88) = v18 / v9;
  return result;
}
