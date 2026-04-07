/*
 * XREFs of ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@M@Z @ 0x180010604
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18000FE58 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z @ 0x18001057C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z @ 0x180010C10 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 * Callees:
 *     <none>
 */

float *__fastcall CTouchDragVisualHelper::Multiply(float *a1, float *a2, float a3)
{
  float v3; // xmm0_4
  float *result; // rax
  float v5; // xmm1_4
  float v6; // xmm2_4

  v3 = a3 * *a2;
  result = a1;
  v5 = a3 * a2[1];
  v6 = a3 * a2[2];
  *a1 = v3;
  a1[1] = v5;
  a1[2] = v6;
  return result;
}
