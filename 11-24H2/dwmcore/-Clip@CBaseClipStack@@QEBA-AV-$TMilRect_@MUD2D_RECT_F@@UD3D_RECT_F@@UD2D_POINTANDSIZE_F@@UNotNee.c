/*
 * XREFs of ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18019CA20
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall CBaseClipStack::Clip(__int64 a1, __m128 *a2, float *a3)
{
  int v3; // eax
  __m128 v4; // xmm1
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  __m128 v8; // xmm1
  float v9; // xmm2_4
  float v10; // xmm3_4
  __m128 v11; // xmm1
  float v12; // xmm5_4
  float v13; // xmm2_4
  __m128 v14; // xmm1
  __m128 *result; // rax
  __m128 v16; // [rsp+0h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(__m128 *)(*(_QWORD *)a1 + 16LL * (unsigned int)(v3 - 1));
    v16 = v4;
    v5 = v4.m128_f32[0];
    if ( *a3 > v4.m128_f32[0] )
    {
      v4.m128_f32[0] = *a3;
      v5 = v4.m128_f32[0];
      v16 = v4;
    }
    v6 = a3[1];
    v7 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
    if ( v6 > v7 )
    {
      v7 = a3[1];
      v8 = _mm_shuffle_ps(v16, v16, 225);
      v8.m128_f32[0] = v6;
      v4 = _mm_shuffle_ps(v8, v8, 225);
      v16 = v4;
    }
    v9 = a3[2];
    v10 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
    if ( v10 > v9 )
    {
      v10 = a3[2];
      v11 = _mm_shuffle_ps(v16, v16, 210);
      v11.m128_f32[0] = v9;
      v4 = _mm_shuffle_ps(v11, v11, 201);
      v16 = v4;
    }
    v12 = a3[3];
    v13 = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
    if ( v13 > v12 )
    {
      v13 = a3[3];
      v14 = _mm_shuffle_ps(v16, v16, 147);
      v14.m128_f32[0] = v12;
      v4 = _mm_shuffle_ps(v14, v14, 57);
    }
    if ( v10 <= v5 || v13 <= v7 )
      v4 = 0uLL;
    *a2 = v4;
    return a2;
  }
  else
  {
    result = a2;
    *a2 = *(__m128 *)a3;
  }
  return result;
}
