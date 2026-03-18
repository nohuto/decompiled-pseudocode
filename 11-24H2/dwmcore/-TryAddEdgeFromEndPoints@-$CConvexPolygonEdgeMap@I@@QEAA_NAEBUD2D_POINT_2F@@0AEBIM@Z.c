/*
 * XREFs of ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x18015152C
 * Callers:
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180151948 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 * Callees:
 *     ?CalcDirectionVector@@YA?AUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@0@Z @ 0x1801515D0 (-CalcDirectionVector@@YA-AUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@0@Z.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x180151C04 (-TryAddEdge@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z.c)
 *     ?IsClosePointF@@YA_NAEBUD2D_POINT_2F@@0M@Z @ 0x180152150 (-IsClosePointF@@YA_NAEBUD2D_POINT_2F@@0M@Z.c)
 */

char __fastcall CConvexPolygonEdgeMap<unsigned int>::TryAddEdgeFromEndPoints(
        int a1,
        const struct D2D_POINT_2F *a2,
        FLOAT *a3,
        int a4,
        int a5)
{
  FLOAT v6; // xmm1_4
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  const struct D2D_POINT_2F *v11; // r8
  struct D2D_VECTOR_2F v13; // [rsp+48h] [rbp+10h] BYREF
  struct D2D_POINT_2F v14; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3[1];
  v13.x = *a3;
  x = a2->x;
  v13.y = v6;
  y = a2->y;
  v14.x = x;
  v14.y = y;
  if ( IsClosePointF(&v14, (const struct D2D_POINT_2F *)&v13, 0.0000011920929) )
    return 0;
  v13 = CalcDirectionVector(a2, v11);
  return CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(a1, (unsigned int)&v13, (_DWORD)a2, a4, a5);
}
