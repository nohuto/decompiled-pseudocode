/*
 * XREFs of ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180097390
 * Callers:
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x180096B60 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180282B70 (-RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800992D8 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 49) )
    CComposition::RestoreCursors(this[3]);
}
