/*
 * XREFs of ?CrossProductZ@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z @ 0x18001172C
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x180010C10 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisualHelper::CrossProductZ(const struct D2D_VECTOR_3F *a1, const struct D2D_VECTOR_3F *a2)
{
  return (float)(a2->y * a1->x) - (float)(a1->y * a2->x);
}
