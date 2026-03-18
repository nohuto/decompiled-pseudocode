/*
 * XREFs of ?AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1802761E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CGdiSpriteBitmap::AppendDirtyRectangles(CGdiSpriteBitmap *this, __int64 a2)
{
  return CGdiSpriteBitmap::SetDirtyRectangles(this, a2);
}
