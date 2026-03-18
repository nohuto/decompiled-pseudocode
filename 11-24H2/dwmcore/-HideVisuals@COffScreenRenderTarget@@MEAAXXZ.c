/*
 * XREFs of ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180061A00
 * Callers:
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18021F0D0 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?HideVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180282900 (-HideVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180061A30 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 */

void __fastcall COffScreenRenderTarget::HideVisuals(CComposition **this)
{
  bool v1; // dl

  if ( *((_DWORD *)this + 49) == 1 )
  {
    v1 = 1;
LABEL_3:
    CComposition::ShowHideCursors(this[3], v1);
    return;
  }
  if ( *((_DWORD *)this + 49) == 2 )
  {
    v1 = 0;
    goto LABEL_3;
  }
}
