/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801FD2AC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1801619F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015F944 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180160C18 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v10; // ebp
  __int128 v11; // xmm11
  __m128 v12; // xmm10
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  __m128 v15; // xmm7
  __m128 v16; // xmm8
  __m128 v17; // xmm9
  __m128 *v18; // r9
  __m128 *v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r11
  __m128i v23; // xmm3
  __m128i v24; // xmm3
  _OWORD *v25; // rax
  char *v26; // r9
  __m128i v27; // xmm3
  __m128i v28; // xmm3
  _OWORD *v29; // rax
  char *v30; // r8
  __m128 v31; // xmm6
  __m128 v32; // xmm5
  __m128 v33; // xmm4
  __m128 v34; // xmm3
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  DirectX::PackedVector *v37; // rcx
  DirectX::PackedVector *v38; // rcx
  __int16 v39; // ax
  __int64 v40; // r11
  DirectX::PackedVector *v41; // rcx
  __int64 v42; // r11
  __int128 v43; // [rsp+30h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1 + 8;
  v6 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 40) >> 1;
  v11 = *(__int128 *)&_xmm.r;
  v12 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  if ( a3 && a4 )
  {
    result = (_UNKNOWN **)CalculateTBNFrameFrom3Vertices((__int64)&v43, v6, (__int64 *)v5);
    v11 = v43;
  }
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 20);
  v15 = (__m128)*a2;
  v16 = (__m128)a2[2];
  v17 = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  if ( v14 )
  {
    do
    {
      v18 = (__m128 *)(*(_QWORD *)v5 + (int)(v13 * *(_DWORD *)(v5 + 8)));
      v19 = (__m128 *)(*(_QWORD *)v5 + (int)(*(_DWORD *)(v5 + 8) * (v13 + 1)));
      v20 = (v13 + 1) * *(_DWORD *)(a1 + 64);
      v21 = *(_QWORD *)(a1 + 56) + (int)(v13 * *(_DWORD *)(a1 + 64));
      v22 = *(_QWORD *)(a1 + 56) + (int)v20;
      v23 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v18, *v18, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v12),
                  _mm_and_ps(
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    DirectX::g_XMOne))));
      v24 = _mm_packs_epi32(v23, v23);
      *(__m128 *)v21 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 85), v16), v17),
                             _mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 0), v15))),
                         _mm_and_ps(
                           (__m128)_mm_packus_epi16(v24, v24),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v10 )
      {
        v25 = (_OWORD *)(v21 + 48);
        v20 = v10;
        v26 = (char *)v18 - v21;
        do
        {
          *v25 = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 32);
          ++v25;
          --v20;
        }
        while ( v20 );
      }
      v27 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v19, *v19, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_andnot_ps((__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask, v12),
                  _mm_and_ps(
                    (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    DirectX::g_XMOne))));
      v28 = _mm_packs_epi32(v27, v27);
      *(__m128 *)v22 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 85), v16), v17),
                             _mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 0), v15))),
                         _mm_and_ps(
                           (__m128)_mm_packus_epi16(v28, v28),
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v10 )
      {
        v29 = (_OWORD *)(v22 + 48);
        v20 = v10;
        v30 = (char *)v19 - v22;
        do
        {
          *v29 = *(_OWORD *)((char *)v29 + (_QWORD)v30 - 32);
          ++v29;
          --v20;
        }
        while ( v20 );
      }
      v31 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v13 >> 1));
      if ( a3 )
      {
        v32 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
        v33 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
        v34 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
        v35 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v33), v34),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v32));
        v36 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v33), v34),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v32));
      }
      else
      {
        v35 = _mm_shuffle_ps(v31, DirectX::g_XMZero, 228);
        v36 = (__m128)_mm_unpackhi_pd((__m128d)v31, DirectX::g_XMZero);
      }
      *(__m128 *)(v21 + 16) = v35;
      *(_OWORD *)(v21 + 32) = v11;
      *(__m128 *)(v22 + 16) = v36;
      *(_OWORD *)(v22 + 32) = v11;
      *(_WORD *)(v21 + 28) = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)v20, v35.m128_f32[0]);
      *(_WORD *)(v21 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v37, v35.m128_f32[0]);
      v39 = DirectX::PackedVector::XMConvertFloatToHalf(v38, v35.m128_f32[0]);
      *(_WORD *)(v40 + 28) = v39;
      result = (_UNKNOWN **)DirectX::PackedVector::XMConvertFloatToHalf(v41, v35.m128_f32[0]);
      v13 += 2;
      *(_WORD *)(v42 + 30) = (_WORD)result;
    }
    while ( v13 < v14 );
  }
  return result;
}
