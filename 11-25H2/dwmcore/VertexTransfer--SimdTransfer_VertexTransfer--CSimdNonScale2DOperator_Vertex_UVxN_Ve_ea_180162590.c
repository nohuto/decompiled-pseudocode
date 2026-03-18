/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180162590
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     <none>
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned int v2; // r11d
  unsigned int v4; // esi
  __m128 v5; // xmm5
  __m128 v6; // xmm6
  unsigned int v7; // ebx
  __m128 v8; // xmm8
  __m128 v9; // xmm7
  __m128 *v10; // r10
  __m128 *v11; // r9
  int v12; // eax
  __m128 *v13; // r8
  __m128 *v14; // rdi
  __m128i v15; // xmm3
  __m128i v16; // xmm3
  _OWORD *m128_f32; // rax
  __int64 v18; // rcx
  signed __int64 v19; // r10
  __m128i v20; // xmm3
  __m128i v21; // xmm3
  _OWORD *v22; // rax
  __int64 v23; // rcx
  signed __int64 v24; // r9

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = (__m128)*a2;
  v6 = (__m128)a2[2];
  v7 = *(_DWORD *)(a1 + 40) >> 1;
  v8 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  v9 = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  if ( v4 )
  {
    do
    {
      v10 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v2 * *(_DWORD *)(a1 + 16)));
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v2 + 1)));
      v12 = *(_DWORD *)(a1 + 64);
      v13 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v2 + 1) * v12));
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v2 * v12));
      v15 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v10, *v10, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v16 = _mm_packs_epi32(v15, v15);
      *v14 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 85), v6), v9),
                   _mm_mul_ps(_mm_shuffle_ps(*v10, *v10, 0), v5))),
               _mm_and_ps(
                 (__m128)_mm_packus_epi16(v16, v16),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v7 )
      {
        m128_f32 = (_OWORD *)v14[1].m128_f32;
        v18 = v7;
        v19 = (char *)v10 - (char *)v14;
        do
        {
          *m128_f32 = *(_OWORD *)((char *)m128_f32 + v19);
          ++m128_f32;
          --v18;
        }
        while ( v18 );
      }
      v20 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v11, *v11, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v21 = _mm_packs_epi32(v20, v20);
      *v13 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v11, *v11, 85), v6), v9),
                   _mm_mul_ps(_mm_shuffle_ps(*v11, *v11, 0), v5))),
               _mm_and_ps(
                 (__m128)_mm_packus_epi16(v21, v21),
                 (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v7 )
      {
        v22 = (_OWORD *)v13[1].m128_f32;
        v23 = v7;
        v24 = (char *)v11 - (char *)v13;
        do
        {
          *v22 = *(_OWORD *)((char *)v22 + v24);
          ++v22;
          --v23;
        }
        while ( v23 );
      }
      v2 += 2;
    }
    while ( v2 < v4 );
  }
}
