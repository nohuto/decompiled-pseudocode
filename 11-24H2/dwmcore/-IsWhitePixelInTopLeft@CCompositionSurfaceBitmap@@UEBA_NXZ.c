/*
 * XREFs of ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801D9000
 * Callers:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x1800193F0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801D8FC4 (-IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(CCompositionSurfaceBitmap *this)
{
  return *((_BYTE *)this + 41);
}
