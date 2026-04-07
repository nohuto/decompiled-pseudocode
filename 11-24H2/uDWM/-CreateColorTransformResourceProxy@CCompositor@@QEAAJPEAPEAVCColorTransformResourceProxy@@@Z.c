/*
 * XREFs of ?CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x18009B144
 * Callers:
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180088898 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C8450 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateColorTransformResourceProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CColorTransformResourceProxy>(this, a2);
}
