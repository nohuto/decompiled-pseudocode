/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18011E770
 * Callers:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011E3B4 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct HomogeneousPoint2D *a3)
{
  float x; // xmm4_4
  float y; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm3_4

  x = a2->x;
  y = a2->y;
  v5 = a2->x;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(a2->x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(v5 * *((float *)this + 1)))
                     + *((float *)this + 13);
  if ( (char)(4 * *((_BYTE *)this + 65)) >> 6 == 1
    || (char)(4 * *((_BYTE *)this + 65)) >> 6 >= 0
    && (LODWORD(v7) = COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                      - 1.0) & _xmm,
        *((_BYTE *)this + 65) = *((_BYTE *)this + 65) & 0xCF | (32 * (v7 < 0.000081380211) + 16),
        v7 >= 0.000081380211) )
  {
    v6 = (float)((float)(x * *((float *)this + 3)) + (float)(y * *((float *)this + 7))) + *((float *)this + 15);
  }
  else
  {
    v6 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  *((float *)a3 + 2) = v6;
}
