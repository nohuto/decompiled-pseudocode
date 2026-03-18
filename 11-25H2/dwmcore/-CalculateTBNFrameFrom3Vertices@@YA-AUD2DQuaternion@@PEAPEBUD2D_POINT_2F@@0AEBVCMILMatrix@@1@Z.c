/*
 * XREFs of ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x18015F9BC
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18015F944 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180160914 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180160914.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180294320 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     CalculateTBNFrame @ 0x18015FD54 (CalculateTBNFrame.c)
 *     EncodeTBNFrameToQuaternion @ 0x18015FF90 (EncodeTBNFrameToQuaternion.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall CalculateTBNFrameFrom3Vertices(
        struct D2DQuaternion *a1,
        int a2,
        int a3,
        float *a4,
        float *a5)
{
  float v7; // xmm14_4
  float v8; // xmm13_4
  float v9; // xmm11_4
  float v10; // xmm9_4
  float v11; // xmm15_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  float v23; // [rsp+58h] [rbp-B0h]
  float v24; // [rsp+60h] [rbp-A8h] BYREF
  float v25; // [rsp+64h] [rbp-A4h]
  __int64 v26; // [rsp+68h] [rbp-A0h]

  LODWORD(v26) = 1065353216;
  v24 = 0.0;
  v25 = 0.0;
  v22 = 0LL;
  v23 = 0.0;
  v20 = 0LL;
  LODWORD(v21) = 0;
  CalculateTBNFrame(a2, a3, (unsigned int)&v24, (unsigned int)&v22, (__int64)&v20);
  v7 = (float)((float)(*a4 * *(float *)&v22) + (float)(a4[4] * *((float *)&v22 + 1))) + (float)(a4[8] * v23);
  v8 = (float)((float)(a4[1] * *(float *)&v22) + (float)(a4[5] * *((float *)&v22 + 1))) + (float)(a4[9] * v23);
  v9 = (float)((float)(a4[2] * *(float *)&v22) + (float)(a4[6] * *((float *)&v22 + 1))) + (float)(a4[10] * v23);
  v10 = (float)((float)(a4[5] * *((float *)&v20 + 1)) + (float)(a4[1] * *(float *)&v20))
      + (float)(a4[9] * *(float *)&v21);
  v19 = (float)((float)(*a4 * *(float *)&v20) + (float)(a4[4] * *((float *)&v20 + 1))) + (float)(a4[8] * *(float *)&v21);
  v11 = (float)((float)(a4[6] * *((float *)&v20 + 1)) + (float)(a4[2] * *(float *)&v20))
      + (float)(a4[10] * *(float *)&v21);
  v12 = (float)((float)(a5[4] * 0.0) + (float)(*a5 * 0.0)) + a5[8];
  v13 = (float)((float)(a5[5] * 0.0) + (float)(a5[1] * 0.0)) + a5[9];
  v14 = (float)((float)(a5[6] * 0.0) + (float)(a5[2] * 0.0)) + a5[10];
  v15 = sqrtf_0((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  v23 = v9 * (float)(1.0 / v15);
  *(float *)&v22 = v7 * (float)(1.0 / v15);
  *((float *)&v22 + 1) = v8 * (float)(1.0 / v15);
  v16 = 1.0 / sqrtf_0((float)((float)(v10 * v10) + (float)(v19 * v19)) + (float)(v11 * v11));
  *(float *)&v20 = v19 * v16;
  *((float *)&v20 + 1) = v10 * v16;
  *(float *)&v21 = v11 * v16;
  v17 = sqrtf_0((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  v24 = v12 * (float)(1.0 / v17);
  v25 = v13 * (float)(1.0 / v17);
  *(float *)&v26 = v14 * (float)(1.0 / v17);
  EncodeTBNFrameToQuaternion(a1);
  return a1;
}
