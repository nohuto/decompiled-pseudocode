/*
 * XREFs of ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801FE3EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180021B30 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetHorizontalAlignment(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT *a3)
{
  struct CResourceTable *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LODWORD(v4) = *((_DWORD *)a3 + 2);
  if ( (char *)off_180404F18 == (char *)CGeometry::SetTrimInvalidatingAnimatedProperty )
    return CGeometry::SetTrimInvalidatingAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             &v4);
  if ( (char *)off_180404F18 == (char *)CComponentTransform2D::SetRotationAngle )
    return CComponentTransform2D::SetRotationAngle(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             &v4);
  if ( (char *)off_180404F18 == (char *)CBrush::SetAnimatedProperty )
    return CBrush::SetAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CSurfaceBrush::sc_HorizontalAlignment,
             &v4);
  return off_180404F18();
}
