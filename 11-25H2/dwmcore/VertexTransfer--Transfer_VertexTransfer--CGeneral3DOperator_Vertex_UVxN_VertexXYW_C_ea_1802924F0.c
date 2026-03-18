/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802924F0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1801619F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011E3B4 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011E654 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015F944 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180167790 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x180257E6C (-BlendStraightColorDW@@YAKKM@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // r15
  __int64 v6; // rax
  CMILMatrix *v7; // rdx
  __int64 v8; // r9
  float v9; // xmm6_4
  unsigned int v10; // esi
  unsigned int v11; // r12d
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v21; // [rsp+80h] [rbp-98h]
  __int64 v22; // [rsp+90h] [rbp-88h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v22, a2);
  v9 = *(float *)(a1 + 44);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_OWORD *)(v6 + 16);
  v20[0] = *(_OWORD *)v6;
  v20[1] = v12;
  v13 = *(_OWORD *)(v6 + 32);
  v14 = *(_OWORD *)(v6 + 48);
  result = *(unsigned int *)(v6 + 64);
  v20[2] = v13;
  v20[3] = v14;
  v21 = result;
  v19 = *(__int128 *)&_xmm.r;
  if ( v16 && v8 )
  {
    result = CalculateTBNFrameFrom3Vertices((__int64)&v19, (__int64)v3, (__int64 *)(a1 + 8));
    v7 = (CMILMatrix *)a2;
    v19 = *(_OWORD *)result;
  }
  if ( v11 )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v10);
      v18 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v10);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v20,
        (const struct D2D_POINT_2F *)v17,
        (const struct D2D_POINT_2F *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v10)),
        *(_DWORD *)(a1 + 40),
        v7,
        v18);
      *(_DWORD *)(v18 + 12) = BlendStraightColorDW(*(_DWORD *)(v17 + 12), v9);
      result = (__int64)VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3, &v19, v18);
      v7 = (CMILMatrix *)a2;
      ++v3;
      ++v10;
    }
    while ( v10 < v11 );
  }
  return result;
}
