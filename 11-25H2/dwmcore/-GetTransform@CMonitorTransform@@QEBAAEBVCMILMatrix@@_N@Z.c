/*
 * XREFs of ?GetTransform@CMonitorTransform@@QEBAAEBVCMILMatrix@@_N@Z @ 0x180052B50
 * Callers:
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180052640 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CMonitorTransform::GetTransform(CMonitorTransform *this, char a2)
{
  const struct CMILMatrix *result; // rax

  result = (CMonitorTransform *)((char *)this + 188);
  if ( !a2 )
    return (CMonitorTransform *)((char *)this + 52);
  return result;
}
