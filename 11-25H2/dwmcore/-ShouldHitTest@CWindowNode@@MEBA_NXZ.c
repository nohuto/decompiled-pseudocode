/*
 * XREFs of ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18007C760
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C4A0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  return !*((_BYTE *)this + 745) && *((_QWORD *)this + 99);
}
