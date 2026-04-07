/*
 * XREFs of ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z @ 0x1800105D4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z @ 0x18001057C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x180010C10 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisualHelper::Length(const struct D2D_VECTOR_3F *a1)
{
  return o_sqrtf_0((float)((float)(a1->x * a1->x) + (float)(a1->y * a1->y)) + (float)(a1->z * a1->z));
}
