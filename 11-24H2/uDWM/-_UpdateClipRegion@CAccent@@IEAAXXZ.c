/*
 * XREFs of ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180065CC8
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180065BA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 */

void __fastcall CAccent::_UpdateClipRegion(CVisualProxy **this)
{
  if ( (*((_DWORD *)this + 61) & 0x210) != 0 )
    CVisualProxy::SetClip(this[2], this[42]);
}
