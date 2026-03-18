/*
 * XREFs of ?ProcessSetCenterPoint@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT@@@Z @ 0x1802A4194
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetCenterPoint(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CEllipseGeometry::sc_CenterPoint,
           (char *)a3 + 8);
}
