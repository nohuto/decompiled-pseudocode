/*
 * XREFs of ?ProcessSetRadius@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETRADIUS@@@Z @ 0x180224BF0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetRadius(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CEllipseGeometry::sc_Radius,
           (char *)a3 + 8);
}
