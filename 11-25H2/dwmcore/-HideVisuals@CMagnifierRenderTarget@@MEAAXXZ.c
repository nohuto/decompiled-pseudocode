/*
 * XREFs of ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18022A560
 * Callers:
 *     <none>
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1800C6720 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::HideVisuals(CMagnifierRenderTarget *this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  v2 = *(CVisualGroup **)(*((_QWORD *)this + 3) + 6208LL);
  if ( v2 )
    CVisualGroup::HideVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this + 373);
  if ( v3 )
    CVisualGroup::HideVisuals(v3);
  COffScreenRenderTarget::HideVisuals((CComposition **)this);
}
