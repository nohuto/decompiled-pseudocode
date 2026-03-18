/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18015C4C4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18015C904 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x18015B56C (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18015C7C8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        float *a3,
        float *a4)
{
  __int64 v5; // r15
  unsigned int v8; // esi
  __int128 v9; // xmm10
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __m128 v14; // xmm7
  __m128 v15; // xmm8
  __m128 v16; // xmm9
  __m128 *v17; // r9
  __m128 *v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r11
  _OWORD *v22; // rax
  char *v23; // r9
  _OWORD *v24; // rax
  char *v25; // r8
  __m128 v26; // xmm6
  __m128 v27; // xmm5
  __m128 v28; // xmm4
  __m128 v29; // xmm3
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  DirectX::PackedVector *v32; // rcx
  DirectX::PackedVector *v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // r11
  DirectX::PackedVector *v36; // rcx
  unsigned __int16 v37; // ax
  __int64 v38; // r11
  __int128 v39; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v40[3]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v41[13]; // [rsp+58h] [rbp-80h] BYREF

  v5 = *a1;
  v8 = *((_DWORD *)a1 + 10) >> 1;
  v9 = *(__int128 *)&_xmm.r;
  if ( a3 && a4 )
  {
    v10 = a1[1];
    v11 = *((int *)a1 + 4);
    v41[1] = v5 + 8;
    v41[2] = v5 + 16;
    v40[0] = v10 + 16;
    v41[0] = v5;
    v40[1] = v11 + v10 + 16;
    v40[2] = 2 * (int)v11 + v10 + 16;
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v39, (int)v41, (int)v40, a3, a4);
    v9 = v39;
  }
  v12 = 0;
  v13 = *((_DWORD *)a1 + 5);
  v14 = (__m128)*a2;
  v15 = (__m128)a2[2];
  v16 = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  if ( v13 )
  {
    do
    {
      v17 = (__m128 *)(a1[1] + (int)(v12 * *((_DWORD *)a1 + 4)));
      v18 = (__m128 *)(a1[1] + (int)(*((_DWORD *)a1 + 4) * (v12 + 1)));
      v19 = (v12 + 1) * *((_DWORD *)a1 + 16);
      v20 = a1[7] + (int)(v12 * *((_DWORD *)a1 + 16));
      v21 = a1[7] + (int)v19;
      *(__m128 *)v20 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v17, *v17, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v17, *v17, 0), v14))),
                         _mm_and_ps(
                           *v17,
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        v22 = (_OWORD *)(v20 + 48);
        v19 = v8;
        v23 = (char *)v17 - v20;
        do
        {
          *v22 = *(_OWORD *)((char *)v22 + (_QWORD)v23 - 32);
          ++v22;
          --v19;
        }
        while ( v19 );
      }
      *(__m128 *)v21 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 0), v14))),
                         _mm_and_ps(
                           *v18,
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v8 )
      {
        v24 = (_OWORD *)(v21 + 48);
        v19 = v8;
        v25 = (char *)v18 - v21;
        do
        {
          *v24 = *(_OWORD *)((char *)v24 + (_QWORD)v25 - 32);
          ++v24;
          --v19;
        }
        while ( v19 );
      }
      v26 = *(__m128 *)(v5 + 16 * ((unsigned __int64)v12 >> 1));
      if ( a3 )
      {
        v27 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a3, (__m128)*((unsigned int *)a3 + 2));
        v28 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 2), (__m128)*((unsigned int *)a3 + 6));
        v29 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 6), (__m128)*((unsigned int *)a3 + 14));
        v30 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 85), v28), v29),
                _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v27));
        v31 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 255), v28), v29),
                _mm_mul_ps(_mm_shuffle_ps(v26, v26, 170), v27));
      }
      else
      {
        v30 = _mm_shuffle_ps(v26, DirectX::g_XMZero, 228);
        v31 = (__m128)_mm_unpackhi_pd((__m128d)v26, DirectX::g_XMZero);
      }
      *(__m128 *)(v20 + 16) = v30;
      *(_OWORD *)(v20 + 32) = v9;
      *(__m128 *)(v21 + 16) = v31;
      *(_OWORD *)(v21 + 32) = v9;
      *(_WORD *)(v20 + 28) = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)v19, v30.m128_f32[0]);
      *(_WORD *)(v20 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v32, v30.m128_f32[0]);
      v34 = DirectX::PackedVector::XMConvertFloatToHalf(v33, v30.m128_f32[0]);
      *(_WORD *)(v35 + 28) = v34;
      v37 = DirectX::PackedVector::XMConvertFloatToHalf(v36, v30.m128_f32[0]);
      v12 += 2;
      *(_WORD *)(v38 + 30) = v37;
    }
    while ( v12 < v13 );
  }
}
