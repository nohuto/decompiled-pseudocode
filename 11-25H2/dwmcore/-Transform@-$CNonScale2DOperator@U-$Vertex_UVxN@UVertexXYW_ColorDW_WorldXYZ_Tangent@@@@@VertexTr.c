/*
 * XREFs of ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180292814
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023885C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B818 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18023B818.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18023B914 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_18023B914.c)
 * Callees:
 *     <none>
 */

void __fastcall VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __int64 a1,
        float *a2,
        unsigned int a3,
        float *a4,
        __int64 a5)
{
  float v5; // xmm1_4
  _QWORD *v6; // rax
  char *v7; // rdx
  __int64 v8; // rcx

  *(float *)a5 = (float)((float)(a4[4] * a2[1]) + (float)(*a2 * *a4)) + a4[12];
  v5 = (float)((float)(a4[1] * *a2) + (float)(a4[5] * a2[1])) + a4[13];
  *(_DWORD *)(a5 + 8) = 1065353216;
  *(float *)(a5 + 4) = v5;
  if ( a3 )
  {
    v6 = (_QWORD *)(a5 + 48);
    v7 = (char *)a2 - a5;
    v8 = a3;
    do
    {
      *v6 = *(_QWORD *)((char *)v6 + (_QWORD)v7 - 32);
      ++v6;
      --v8;
    }
    while ( v8 );
  }
}
