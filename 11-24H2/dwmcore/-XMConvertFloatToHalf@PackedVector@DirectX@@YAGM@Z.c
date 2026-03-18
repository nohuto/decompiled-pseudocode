/*
 * XREFs of ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18015C7C8
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18015C18C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18015C4C4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18015C4C4.c)
 *     ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z @ 0x180166EBC (-XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801F061C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801F061C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801F3344 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801F3344.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801F3658 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801F3658.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801F3930 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801F3930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  __m128i v2; // xmm0
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  int v5; // r10d
  unsigned int v6; // r9d
  unsigned int v8; // eax
  int v9; // r8d
  unsigned int v10; // edx

  v3 = _mm_cvtsi128_si32(v2);
  v4 = v3 & 0x7FFFFFFF;
  v5 = HIWORD(v3) & 0x8000;
  if ( v4 >= 0x47800000 )
  {
    if ( v4 <= 0x7F800000 )
      LOWORD(v6) = 0;
    else
      v6 = (v4 & 0x3FE000 | 0x400000) >> 13;
    LOWORD(v6) = v6 | 0x7C00;
  }
  else if ( v4 <= 0x33000000 )
  {
    LOWORD(v6) = 0;
  }
  else if ( v4 < 0x38800000 )
  {
    v8 = v4 >> 23;
    v9 = 125 - (v4 >> 23);
    v10 = v4 & 0x7FFFFF | 0x800000;
    v6 = v10 >> (125 - (v4 >> 23) + 1);
    LOWORD(v6) = ((unsigned __int8)(v10 >> v9) & (unsigned __int8)(v6 | ((((1 << (125 - v8)) - 1) & v10) != 0)) & 1)
               + v6;
  }
  else
  {
    v6 = (((((v4 - 939524096) >> 13) & 1) + v4 - 939524096 + 4095) >> 13) & 0x7FFF;
  }
  return (unsigned __int16)(v5 | v6);
}
