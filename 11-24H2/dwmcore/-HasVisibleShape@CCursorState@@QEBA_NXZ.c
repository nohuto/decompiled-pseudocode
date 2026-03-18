/*
 * XREFs of ?HasVisibleShape@CCursorState@@QEBA_NXZ @ 0x1802B2FE8
 * Callers:
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x1802906B0 (-HasNonEmptyContent@CCursorVisual@@UEBA_NXZ.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x1802906F0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorState::HasVisibleShape(CCursorState *this)
{
  return *((_QWORD *)this + 22) != 0LL;
}
