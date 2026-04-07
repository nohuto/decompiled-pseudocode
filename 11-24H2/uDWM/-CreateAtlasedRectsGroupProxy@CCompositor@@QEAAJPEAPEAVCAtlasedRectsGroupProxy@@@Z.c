/*
 * XREFs of ?CreateAtlasedRectsGroupProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180023098
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180022E40 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAtlasedRectsGroupProxy(CCompositor *this, struct CAtlasedRectsGroupProxy **a2)
{
  return CCompositor::CreateProxy<CAtlasedRectsGroupProxy>(this, a2);
}
