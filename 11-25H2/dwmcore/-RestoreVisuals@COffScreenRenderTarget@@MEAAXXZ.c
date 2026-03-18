/*
 * XREFs of ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C53E0
 * Callers:
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1800C4270 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 49) )
    CComposition::RestoreCursors(this[3]);
}
