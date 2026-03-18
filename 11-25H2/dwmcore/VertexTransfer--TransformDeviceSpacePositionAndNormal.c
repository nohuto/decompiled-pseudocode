/*
 * XREFs of VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011E654
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011E260 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023885C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B43C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B554 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_18023B554.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B71C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_18023B71C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B818 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18023B818.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B914 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18023B914.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180292390 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180292390.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802924F0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1802924F0.c)
 * Callees:
 *     ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z @ 0x18011E85C (-XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x18011E8B0 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

unsigned __int16 *__fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v5; // r11
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  unsigned __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( this )
  {
    v13 = 0LL;
    CMILMatrix::TransformIgnoreZW(this, a1, (struct D2D_POINT_4F *)&v13, a4);
    v7 = *((float *)&v13 + 1);
    v8 = *((float *)&v13 + 2);
    *(_DWORD *)(v5 + 16) = v13;
    *(float *)(v5 + 20) = v7;
    *(float *)(v5 + 24) = v8;
    v9 = *((float *)&v13 + 3);
    if ( *((float *)&v13 + 3) != 1.0 && *((float *)&v13 + 3) != 0.0 )
    {
      *(float *)(v5 + 16) = (float)(1.0 / *((float *)&v13 + 3)) * *(float *)(v5 + 16);
      *(float *)(v5 + 20) = v7 * (float)(1.0 / v9);
      *(float *)(v5 + 24) = v8 * (float)(1.0 / v9);
    }
    *(_DWORD *)(v5 + 32) = *a3;
    *(_DWORD *)(v5 + 36) = a3[1];
    *(_DWORD *)(v5 + 40) = a3[2];
    *(_DWORD *)(v5 + 44) = a3[3];
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    *(_QWORD *)(a4 + 20) = LODWORD(a1->y);
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_DWORD *)(a4 + 40) = 0;
    *(_DWORD *)(a4 + 44) = 1065353216;
  }
  return DirectX::PackedVector::XMConvertFloatToHalfStream(
           (DirectX::PackedVector *)(v5 + 28),
           (unsigned __int16 *)this,
           (unsigned __int64)a1,
           (const float *)a4,
           v11,
           v12);
}
