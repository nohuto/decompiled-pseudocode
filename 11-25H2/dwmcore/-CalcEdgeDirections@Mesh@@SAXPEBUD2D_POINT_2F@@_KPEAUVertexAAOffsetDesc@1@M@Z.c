/*
 * XREFs of ?CalcEdgeDirections@Mesh@@SAXPEBUD2D_POINT_2F@@_KPEAUVertexAAOffsetDesc@1@M@Z @ 0x1801C3F50
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

void __fastcall Mesh::CalcEdgeDirections(
        const struct D2D_POINT_2F *a1,
        unsigned __int64 a2,
        struct Mesh::VertexAAOffsetDesc *a3,
        float a4)
{
  int v4; // r9d
  int v8; // ebx
  int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // rdx
  __int64 v19; // rax

  if ( a2 )
  {
    v4 = 0;
    v8 = 0;
    do
    {
      v9 = v4 + 1;
      v10 = (unsigned int)(v4 + 1) % a2;
      v11 = (unsigned int)(v4 + 1);
      v12 = a1[v10].x - a1[v4].x;
      v13 = a1[v10].y - a1[v4].y;
      if ( a4 <= COERCE_FLOAT(LODWORD(v12) & _xmm) || a4 <= COERCE_FLOAT(LODWORD(v13) & _xmm) )
      {
        v14 = (float)(v12 * v12) + (float)(v13 * v13);
        if ( v14 < 0.0 )
          v15 = sqrtf_0(v14);
        else
          v15 = fsqrt(v14);
        v16 = (float)(1.0 / v15) * v13;
        v17 = (float)(1.0 / v15) * v12;
      }
      else
      {
        v16 = 0.0;
        v17 = 0.0;
      }
      v18 = v8;
      v19 = v8;
      v8 += 32;
      v4 = v9;
      *(float *)((char *)a3 + v19) = v17;
      *(float *)((char *)a3 + v18 + 4) = v16;
    }
    while ( v11 < a2 );
  }
}
