/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180167C04
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180166790 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r11d
  unsigned int v5; // r14d
  __m128 v6; // xmm8
  unsigned int v7; // r8d
  __m128 v8; // xmm11
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __m128 *v11; // rbx
  __m128 *v12; // rbp
  __m128 *v13; // r10
  __m128 *v14; // rdi
  __m128 *v15; // r9
  __m128 *v16; // rdx
  __m128i v17; // xmm6
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128i v20; // xmm6
  __m128 v21; // xmm6
  __m128 v22; // xmm7
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __int64 v25; // rcx
  signed __int64 v26; // rdx
  __m128 v27; // xmm1
  signed __int64 v28; // r10
  __m128 *v29; // rax
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm7
  __m128 v33; // xmm2
  __m128i v34; // xmm6
  __m128i v35; // xmm6
  __m128 v36; // xmm6
  __m128 v37; // xmm1
  __int64 v38; // rcx
  signed __int64 v39; // r9
  __m128 v40; // xmm1
  signed __int64 v41; // rdi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = (__m128)a2[6];
  v7 = *(_DWORD *)(a1 + 40) >> 1;
  v8 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  v9 = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v10 = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  if ( v5 )
  {
    do
    {
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * *(_DWORD *)(a1 + 64)));
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * (v3 + 1)));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * (v3 + 1)));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v17 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v11, *v11, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v18 = *v16;
      v19 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v20 = _mm_packs_epi32(v17, v17);
      v21 = (__m128)_mm_packus_epi16(v20, v20);
      v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v9));
      v23 = (__m128)DirectX::g_XMOne;
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v22, DirectX::g_XMZero)) & 3) != 3 )
      {
        v24 = _mm_mul_ps(v22, v22);
        v23.m128_f32[0] = 1.0 / fsqrt(v24.m128_f32[0] + _mm_shuffle_ps(v24, v24, 85).m128_f32[0]);
        v23 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), _mm_shuffle_ps(v18, v18, 170));
      }
      *v13 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v10), v6),
                   _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v9)),
                 _mm_mul_ps(v23, v22)),
               _mm_or_ps(
                 _mm_and_ps(v21, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v23.m128_f32[0] > 1.0 && v16->m128_f32[3] == 0.0 )
        v23 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( v7 )
      {
        v25 = v7;
        v26 = (char *)v16 - (char *)v11;
        v27 = _mm_shuffle_ps(v23, v23, 0);
        v28 = (char *)v13 - (char *)v11;
        v29 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v29 + v28) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v29, *(__m128 *)((char *)v29 + v26)), v27),
                                             *(__m128 *)((char *)v29 + v26));
          ++v29;
          --v25;
        }
        while ( v25 );
      }
      v30 = *v15;
      v31 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v15);
      v32 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v9));
      v33 = (__m128)DirectX::g_XMOne;
      v34 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v12, *v12, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v35 = _mm_packs_epi32(v34, v34);
      v36 = (__m128)_mm_packus_epi16(v35, v35);
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v32, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result != 3 )
      {
        v37 = _mm_mul_ps(v32, v32);
        v33.m128_f32[0] = 1.0 / fsqrt(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0]);
        v33 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), _mm_shuffle_ps(v30, v30, 170));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), v10), v6),
                   _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v9)),
                 _mm_mul_ps(v33, v32)),
               _mm_or_ps(
                 _mm_and_ps(v36, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v33.m128_f32[0] > 1.0 && v15->m128_f32[3] == 0.0 )
        v33 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( v7 )
      {
        v38 = v7;
        v39 = (char *)v15 - (char *)v12;
        v40 = _mm_shuffle_ps(v33, v33, 0);
        v41 = (char *)v14 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v41) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v39)), v40),
                                                *(__m128 *)((char *)result + v39));
          ++result;
          --v38;
        }
        while ( v38 );
      }
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
