/*
 * XREFs of ?CreateAtlasedRectsMeshProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x180021CFC
 * Callers:
 *     ?EnsureAtlasResource@CAtlasedImage@@AEAAJXZ @ 0x1800232BC (-EnsureAtlasResource@CAtlasedImage@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAtlasedRectsMeshProxy(CCompositor *this, struct CAtlasedRectsMeshProxy **a2)
{
  return CCompositor::CreateProxy<CAtlasedRectsMeshProxy>(this, a2);
}
