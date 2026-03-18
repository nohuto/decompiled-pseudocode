/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18015D150
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801072D0 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015D680 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18015FAE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r11d
  unsigned int v4; // r14d
  unsigned int v6; // r9d
  __m128 v7; // xmm10
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm4
  __m128 *v11; // rsi
  __m128 *v12; // rdi
  int v13; // eax
  __m128 *v14; // rbp
  __m128 *v15; // r10
  __m128 *v16; // rbx
  __m128 *v17; // r8
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  __m128 v20; // xmm5
  __m128 v21; // xmm1
  __int64 v22; // rcx
  signed __int64 v23; // rbx
  __m128 v24; // xmm2
  signed __int64 v25; // r10
  __m128 *v26; // rax
  __m128 v27; // xmm3
  __m128 v28; // xmm0
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  __m128 v32; // xmm5
  __int64 v33; // rcx
  signed __int64 v34; // r8
  __m128 v35; // xmm2
  signed __int64 v36; // rbp
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 40) >> 1;
  v7 = (__m128)a2[6];
  v8 = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v9 = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  if ( v4 )
  {
    do
    {
      v10 = (__m128)DirectX::g_XMOne;
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = *(_DWORD *)(a1 + 64);
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * v13));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * v13));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v17 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v18 = *v16;
      v19 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v20 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v8));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v20, DirectX::g_XMZero)) & 3) != 3 )
      {
        v21 = _mm_mul_ps(v20, v20);
        v10.m128_f32[0] = 1.0 / fsqrt(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0]);
        v10 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), _mm_shuffle_ps(v18, v18, 170));
      }
      *v15 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v9), v7),
                   _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v8)),
                 _mm_mul_ps(v10, v20)),
               _mm_or_ps(
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne),
                 _mm_and_ps(*v11, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
               228);
      if ( v10.m128_f32[0] > 1.0 && v16->m128_f32[3] == 0.0 )
        v10 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( v6 )
      {
        v22 = v6;
        v23 = (char *)v16 - (char *)v11;
        v24 = _mm_shuffle_ps(v10, v10, 0);
        v25 = (char *)v15 - (char *)v11;
        v26 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v26 + v25) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v26, *(__m128 *)((char *)v26 + v23)), v24),
                                             *(__m128 *)((char *)v26 + v23));
          ++v26;
          --v22;
        }
        while ( v22 );
      }
      v27 = *v17;
      v28 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v17);
      v29 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v8));
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v29, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result == 3 )
      {
        v32 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v30 = _mm_mul_ps(v29, v29);
        v31 = (__m128)DirectX::g_XMOne;
        v31.m128_f32[0] = 1.0 / fsqrt(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0]);
        v32 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), _mm_shuffle_ps(v31, v31, 0));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v9), v7),
                   _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v8)),
                 _mm_mul_ps(v32, v29)),
               _mm_or_ps(
                 _mm_and_ps(*v12, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v32.m128_f32[0] > 1.0 && v17->m128_f32[3] == 0.0 )
        v32 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( v6 )
      {
        v33 = v6;
        v34 = (char *)v17 - (char *)v12;
        v35 = _mm_shuffle_ps(v32, v32, 0);
        v36 = (char *)v14 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v36) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v34)), v35),
                                                *(__m128 *)((char *)result + v34));
          ++result;
          --v33;
        }
        while ( v33 );
      }
      v3 += 2;
    }
    while ( v3 < v4 );
  }
  return result;
}
