/*
 * XREFs of ?DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z @ 0x180010808
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTouchDragVisualHelper::DotProduct(const struct D2D_VECTOR_3F *a1, const struct D2D_VECTOR_3F *a2)
{
  return (float)((float)(a1->y * a2->y) + (float)(a1->x * a2->x)) + (float)(a1->z * a2->z);
}
