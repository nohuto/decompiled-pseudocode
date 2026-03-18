/*
 * XREFs of ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18014D880
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D5C0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  return !*((_BYTE *)this + 753) && *((_QWORD *)this + 100);
}
