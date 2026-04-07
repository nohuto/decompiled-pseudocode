/*
 * XREFs of ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x18006ECE0
 * Callers:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18006EC90 (-Initialize@CVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CVisualProxy>(this, a2);
}
