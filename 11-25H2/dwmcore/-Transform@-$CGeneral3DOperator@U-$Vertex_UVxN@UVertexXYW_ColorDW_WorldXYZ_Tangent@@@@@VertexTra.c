/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011E3B4
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011E260 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180292390 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180292390.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802924F0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1802924F0.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18011E770 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

void __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        __int64 a6)
{
  __int64 v8; // r14
  unsigned int v10; // r9d
  float v11; // xmm11_4
  __m128 v12; // xmm12
  float v13; // xmm14_4
  float v14; // xmm13_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  unsigned int v17; // r9d
  float v18; // xmm0_4
  float v19; // xmm6_4
  FLOAT v20; // xmm0_4
  unsigned int v21; // r9d
  float v22; // xmm1_4
  __int64 v23; // rbx
  float v24; // xmm7_4
  signed __int64 v25; // rdi
  float *p_y; // rax
  __int64 v27; // rcx
  float v28; // xmm1_4
  struct D2D_POINT_2F v29; // [rsp+28h] [rbp-99h] BYREF
  __int64 v30; // [rsp+30h] [rbp-91h]
  __int64 v31; // [rsp+38h] [rbp-89h] BYREF
  float v32; // [rsp+40h] [rbp-81h]
  __int64 v33; // [rsp+48h] [rbp-79h] BYREF
  float v34; // [rsp+50h] [rbp-71h]

  v8 = a4;
  v29 = 0LL;
  LODWORD(v30) = 0;
  v33 = 0LL;
  v34 = 0.0;
  CMILMatrix::Transform(a5, a2, (struct HomogeneousPoint2D *)&v29, a4);
  CMILMatrix::Transform(a5, a3, (struct HomogeneousPoint2D *)&v33, v10);
  v11 = v34;
  v12 = (__m128)HIDWORD(v33);
  v13 = *((float *)&v33 + 1) / v34;
  v14 = *(float *)&v33 / v34;
  v15 = (float)(v29.y / *(float *)&v30) - (float)(*((float *)&v33 + 1) / v34);
  v16 = (float)(v29.x / *(float *)&v30) - (float)(*(float *)&v33 / v34);
  v18 = sqrtf_0((float)(v15 * v15) + (float)(v16 * v16));
  v19 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v18 > 0.0 )
    v19 = a3[1].x / v18;
  v31 = 0LL;
  v32 = 0.0;
  v29.x = (float)(v16 * v19) + v14;
  v29.y = (float)(v15 * v19) + v13;
  CMILMatrix::Transform(this, &v29, (struct HomogeneousPoint2D *)&v31, v17);
  v29.x = *(float *)&v31 / v32;
  v20 = *((float *)&v31 + 1) / v32;
  v31 = 0LL;
  v32 = 0.0;
  v29.y = v20;
  CMILMatrix::Transform(a5, &v29, (struct HomogeneousPoint2D *)&v31, v21);
  v22 = v32;
  if ( v32 <= 0.0 )
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps((__m128)(unsigned int)v33, v12).m128_u64[0];
    *(float *)(a6 + 8) = v11;
  }
  else
  {
    *(_QWORD *)a6 = v31;
    *(float *)(a6 + 8) = v22;
  }
  if ( v19 > 1.0 && a3[1].y == 0.0 )
    v19 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( (_DWORD)v8 )
  {
    v23 = a6 - (_QWORD)a2;
    v24 = 1.0 - v19;
    v25 = (char *)a3 - (char *)a2;
    p_y = &a2[2].y;
    v27 = v8;
    do
    {
      v28 = (float)(v24 * *(float *)((char *)p_y + v25)) + (float)(v19 * *p_y);
      *(float *)((char *)p_y + v23 + 28) = (float)(v24 * *(float *)((char *)p_y + v25 - 4)) + (float)(v19 * *(p_y - 1));
      *(float *)((char *)p_y + v23 + 32) = v28;
      p_y += 2;
      --v27;
    }
    while ( v27 );
  }
}
