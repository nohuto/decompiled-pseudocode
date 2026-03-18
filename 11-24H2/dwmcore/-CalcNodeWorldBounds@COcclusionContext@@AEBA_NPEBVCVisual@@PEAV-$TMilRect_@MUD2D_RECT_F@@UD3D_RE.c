/*
 * XREFs of ?CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EF30
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::CalcNodeWorldBounds(__int64 a1, __int64 a2, __m128 *a3)
{
  __m128 *v3; // r9
  __m128 *v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  void *v9; // rcx
  __m128 v10; // xmm1
  float v11; // xmm2_4
  bool v12; // cc
  int v13; // eax
  __m128 v14; // xmm3
  float v15; // xmm4_4
  __int32 v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm8_4
  float v21; // xmm2_4
  __m128 v22; // xmm1
  __m128 v23; // xmm1
  __m128 v24; // xmm1
  char result; // al
  __m128 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h]
  __m128 v28; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-50h]

  v3 = *(__m128 **)(a1 + 8);
  v6 = v3 + 5;
  if ( a2 != v3[4].m128_u64[1] )
    v6 = (__m128 *)(a2 + 152);
  v28 = *v6;
  v29 = v6[1].m128_u64[0];
  v7 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 85).m128_f32[0] <= *(float *)&v29;
  if ( _mm_shuffle_ps(v28, v28, 170).m128_f32[0] <= v28.m128_f32[0] )
    ++v7;
  if ( _mm_shuffle_ps(v28, v28, 255).m128_f32[0] <= _mm_shuffle_ps(v28, v28, 85).m128_f32[0] )
    ++v7;
  if ( v7 <= 1 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    v27 = 0LL;
    v26 = 0LL;
    v9 = v8 ? (void *)(*(_QWORD *)(a1 + 32) + 68LL * (unsigned int)(v8 - 1)) : &CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v9, &v28, &v26);
    v10 = v26;
    v11 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
    v12 = v11 <= v26.m128_f32[0];
    *a3 = v26;
    if ( !v12 && a3->m128_f32[3] > a3->m128_f32[1] )
    {
      v13 = *(_DWORD *)(a1 + 136);
      if ( v13 )
      {
        v26 = *(__m128 *)(*(_QWORD *)(a1 + 128) + 16LL * (unsigned int)(v13 - 1));
        v14 = v26;
        if ( v10.m128_f32[0] > v26.m128_f32[0] )
          v14 = v10;
        v15 = v26.m128_f32[1];
        v16 = v26.m128_i32[1];
        if ( a3->m128_f32[1] > v26.m128_f32[1] )
        {
          v15 = a3->m128_f32[1];
          v16 = LODWORD(v15);
        }
        v17 = v26.m128_f32[2];
        v18 = *(float *)&v16;
        v19 = v26.m128_f32[2];
        if ( v26.m128_f32[2] > v11 )
        {
          v17 = v11;
          v19 = v11;
        }
        v20 = v26.m128_f32[3];
        v21 = v26.m128_f32[3];
        if ( v26.m128_f32[3] > a3->m128_f32[3] )
        {
          v20 = a3->m128_f32[3];
          v21 = v20;
          v18 = *(float *)&v16;
        }
        if ( v19 <= v14.m128_f32[0] || v21 <= v18 )
        {
          v20 = 0.0;
          v17 = 0.0;
          v15 = 0.0;
          v14 = 0LL;
        }
        v22 = _mm_shuffle_ps(v14, v14, 225);
        v22.m128_f32[0] = v15;
        v23 = _mm_shuffle_ps(v22, v22, 198);
        v23.m128_f32[0] = v17;
        v24 = _mm_shuffle_ps(v23, v23, 39);
        v24.m128_f32[0] = v20;
        v10 = _mm_shuffle_ps(v24, v24, 57);
      }
      *a3 = v10;
      if ( _mm_shuffle_ps(v10, v10, 170).m128_f32[0] > v10.m128_f32[0] && a3->m128_f32[3] > a3->m128_f32[1] )
        return 1;
    }
  }
  a3->m128_u64[1] = 0LL;
  result = 0;
  a3->m128_u64[0] = 0LL;
  return result;
}
