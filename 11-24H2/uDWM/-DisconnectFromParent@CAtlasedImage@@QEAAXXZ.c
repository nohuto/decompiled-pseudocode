/*
 * XREFs of ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180021FCC
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x180021BEC (--1CButton@@MEAA@XZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180021FF0 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 */

void __fastcall CAtlasedImage::DisconnectFromParent(CAtlasedRectsVisual **this)
{
  if ( this[10] )
    CAtlasedRectsVisual::RemoveAtlasImage(this[10], (struct CAtlasedImage *)this);
}
