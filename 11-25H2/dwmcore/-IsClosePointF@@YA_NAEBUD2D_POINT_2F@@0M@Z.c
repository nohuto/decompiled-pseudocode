/*
 * XREFs of ?IsClosePointF@@YA_NAEBUD2D_POINT_2F@@0M@Z @ 0x1801978A0
 * Callers:
 *     ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x180196C74 (-TryAddEdgeFromEndPoints@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClosePointF(const struct D2D_POINT_2F *a1, const struct D2D_POINT_2F *a2, float a3)
{
  return a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->x - a2->x) & _xmm)
      && a3 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(a1->y - a2->y) & _xmm);
}
