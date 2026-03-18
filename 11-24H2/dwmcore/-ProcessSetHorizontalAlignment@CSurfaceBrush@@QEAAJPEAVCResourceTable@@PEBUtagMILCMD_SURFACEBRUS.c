/*
 * XREFs of ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801F1DFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134F50 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetHorizontalAlignment(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT *a3)
{
  struct CResourceTable *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LODWORD(v4) = *((_DWORD *)a3 + 2);
  if ( (char *)off_1803F8F18 == (char *)CGeometry::SetTrimInvalidatingAnimatedProperty )
    return CGeometry::SetTrimInvalidatingAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             &v4);
  if ( (char *)off_1803F8F18 == (char *)CComponentTransform2D::SetRotationAngle )
    return CComponentTransform2D::SetRotationAngle(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             (float *)&v4);
  if ( (char *)off_1803F8F18 == (char *)CBrush::SetAnimatedProperty )
    return CBrush::SetAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             &v4);
  return off_1803F8F18();
}
