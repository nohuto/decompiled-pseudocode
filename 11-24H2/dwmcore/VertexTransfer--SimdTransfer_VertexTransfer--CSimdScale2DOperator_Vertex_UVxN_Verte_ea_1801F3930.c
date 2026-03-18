/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801F3930
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18015C904 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015B4F4 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18015C7C8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801F3BA4 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 */

__int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int128 v8; // xmm7
  __int64 v9; // rcx
  int v10; // r15d
  __int64 result; // rax
  unsigned int v12; // r14d
  __int128 v13; // xmm2
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  int v17; // r11d
  int v18; // r10d
  int v19; // r9d
  DirectX::PackedVector *v20; // rcx
  __m128 v21; // xmm6
  __m128 v22; // xmm5
  __m128 v23; // xmm4
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  DirectX::PackedVector *v27; // rcx
  DirectX::PackedVector *v28; // rcx
  DirectX::PackedVector *v29; // rcx
  int v30; // [rsp+20h] [rbp-B8h]
  int v31; // [rsp+20h] [rbp-B8h]
  __int128 v32; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v33[5]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int i; // [rsp+E0h] [rbp+8h]
  __int64 v35; // [rsp+E8h] [rbp+10h]

  v6 = *(_QWORD *)a1;
  v8 = *(__int128 *)&_xmm.r;
  v9 = a1 + 8;
  v10 = *(_DWORD *)(a1 + 40) >> 1;
  v35 = v6;
  if ( a3 && a4 )
  {
    v30 = a4;
    CalculateTBNFrameFrom3Vertices((__int64)&v32, v6, (__int64 *)v9);
    v8 = v32;
    v9 = a1 + 8;
  }
  result = *(unsigned int *)(a1 + 20);
  v12 = 0;
  v13 = a2[6];
  v33[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v33[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v33[2] = v13;
  for ( i = result; v12 < i; v9 = a1 + 8 )
  {
    v14 = *(_QWORD *)v9 + (int)(*(_DWORD *)(v9 + 8) * (v12 + 1));
    v15 = *(_QWORD *)(a1 + 56) + (int)(v12 * *(_DWORD *)(a1 + 64));
    v16 = *(_QWORD *)(a1 + 56) + (int)((v12 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      *(_DWORD *)v9 + v12 * *(_DWORD *)(v9 + 8),
      *(_QWORD *)(a1 + 24) + v12 * *(_DWORD *)(a1 + 32),
      a4,
      v30,
      v10,
      v15);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      v14,
      v18 + (v12 + 1) * v17,
      v19,
      v31,
      v10,
      v16);
    v21 = *(__m128 *)(v35 + 16 * ((unsigned __int64)v12 >> 1));
    if ( a3 )
    {
      v22 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
      v23 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
      v24 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
      v25 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v22));
      v26 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v22));
    }
    else
    {
      v25 = _mm_shuffle_ps(v21, DirectX::g_XMZero, 228);
      v26 = (__m128)_mm_unpackhi_pd((__m128d)v21, DirectX::g_XMZero);
    }
    *(__m128 *)(v15 + 16) = v25;
    *(_OWORD *)(v15 + 32) = v8;
    *(__m128 *)(v16 + 16) = v26;
    *(_OWORD *)(v16 + 32) = v8;
    *(_WORD *)(v15 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v20, v25.m128_f32[0]);
    *(_WORD *)(v15 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v27, v25.m128_f32[0]);
    *(_WORD *)(v16 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v25.m128_f32[0]);
    result = DirectX::PackedVector::XMConvertFloatToHalf(v29, v25.m128_f32[0]);
    v12 += 2;
    *(_WORD *)(v16 + 30) = result;
  }
  return result;
}
