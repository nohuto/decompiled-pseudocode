/*
 * XREFs of ?GetTreeBounds@IVisualTreeClient@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180277100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int128 *IVisualTreeClient::GetTreeBounds()
{
  return &TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
