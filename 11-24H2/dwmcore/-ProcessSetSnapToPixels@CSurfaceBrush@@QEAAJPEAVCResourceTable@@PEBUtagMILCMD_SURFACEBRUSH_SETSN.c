/*
 * XREFs of ?ProcessSetSnapToPixels@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS@@@Z @ 0x18021412C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSnapToPixels(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_SnapToPixels,
           (char *)a3 + 8);
}
