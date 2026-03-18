/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1801520B0
 * Callers:
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180151948 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 * Callees:
 *     <none>
 */

struct D2D_POINT_2F __fastcall Matrix3x3::TransformHomogeneousPoint(
        Matrix3x3 *this,
        struct D2D_POINT_2F a2,
        __int64 a3)
{
  float v3; // xmm2_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  struct D2D_POINT_2F result; // rax

  v3 = (float)((float)(*((float *)&a3 + 1) * *((float *)this + 3)) + (float)(*(float *)&a3 * *(float *)this))
     + *((float *)this + 6);
  v4 = (float)((float)(*(float *)&a3 * *((float *)this + 2)) + (float)(*((float *)&a3 + 1) * *((float *)this + 5)))
     + *((float *)this + 8);
  v5 = (float)((float)(*(float *)&a3 * *((float *)this + 1)) + (float)(*((float *)&a3 + 1) * *((float *)this + 4)))
     + *((float *)this + 7);
  if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v3 = v3 / v4;
    v5 = v5 / v4;
  }
  **(float **)&a2 = v3;
  result = a2;
  *(float *)(*(_QWORD *)&a2 + 4LL) = v5;
  return result;
}
