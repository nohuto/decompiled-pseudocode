/*
 * XREFs of ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800996B0
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180098E40 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 774);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
