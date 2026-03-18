/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B43C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1801619F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011E654 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015F944 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x180257E6C (-BlendStraightColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1802928E0 (-Transform@-$CScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTrans.c)
 */

__int128 *__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        CMILMatrix *a3,
        __int64 a4)
{
  __int128 *result; // rax
  unsigned int v5; // ebp
  struct D2D_POINT_2F *v6; // r15
  unsigned int v8; // r12d
  float v10; // xmm6_4
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v15; // [rsp+88h] [rbp+10h]

  result = (__int128 *)&retaddr;
  v15 = a2;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v10 = *(float *)(a1 + 44);
  v13 = *(__int128 *)&_xmm.r;
  if ( a3 && a4 )
  {
    result = (__int128 *)CalculateTBNFrameFrom3Vertices((__int64)&v13, (__int64)v6, (__int64 *)(a1 + 8));
    a2 = v15;
    v13 = *result;
  }
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v5);
      v12 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v5);
      VertexTransfer::CScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v5,
        *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 32) * v5,
        *(_DWORD *)(a1 + 40),
        a2,
        v12);
      *(_DWORD *)(v12 + 12) = BlendStraightColorDW(*(_DWORD *)(v11 + 12), v10);
      result = (__int128 *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, a3, &v13, v12);
      a2 = v15;
      ++v6;
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
