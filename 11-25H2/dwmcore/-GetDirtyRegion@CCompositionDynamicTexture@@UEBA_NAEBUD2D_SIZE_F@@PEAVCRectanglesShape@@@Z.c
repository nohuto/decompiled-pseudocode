/*
 * XREFs of ?GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1802A0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x180192150 (-Copy@CRectanglesShape@@QEAAXAEBV1@@Z.c)
 */

char __fastcall CCompositionDynamicTexture::GetDirtyRegion(
        CCompositionDynamicTexture *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  CRectanglesShape::Copy(a3, (CCompositionDynamicTexture *)((char *)this + 8));
  return 1;
}
