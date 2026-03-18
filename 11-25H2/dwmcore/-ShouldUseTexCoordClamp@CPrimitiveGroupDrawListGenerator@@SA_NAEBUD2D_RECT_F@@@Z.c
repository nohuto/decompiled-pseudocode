/*
 * XREFs of ?ShouldUseTexCoordClamp@CPrimitiveGroupDrawListGenerator@@SA_NAEBUD2D_RECT_F@@@Z @ 0x18019C72C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18019BE10 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroupDrawListGenerator::ShouldUseTexCoordClamp(const struct D2D_RECT_F *a1)
{
  return a1->left != 0.0 || a1->top != 0.0 || a1->right != 1.0 || a1->bottom != 1.0;
}
