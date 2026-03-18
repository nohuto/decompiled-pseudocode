/*
 * XREFs of ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1800C4270
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C53E0 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1800C6BB0 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::RestoreVisuals(CVisualGroup **this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  COffScreenRenderTarget::RestoreVisuals((COffScreenRenderTarget *)this);
  v2 = this[373];
  if ( v2 )
    CVisualGroup::RestoreVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this[3] + 776);
  if ( v3 )
    CVisualGroup::RestoreVisuals(v3);
}
