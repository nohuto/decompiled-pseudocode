/*
 * XREFs of ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1801F40EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134F50 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetOffset(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET *a3)
{
  int v3; // xmm1_4
  struct CResourceTable *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = *((_DWORD *)a3 + 3);
  LODWORD(v5) = *((_DWORD *)a3 + 2);
  HIDWORD(v5) = v3;
  if ( (char *)off_1803F8360 == (char *)CGeometry::SetTrimInvalidatingAnimatedProperty )
    return CGeometry::SetTrimInvalidatingAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_Offset,
             &v5);
  if ( (char *)off_1803F8360 == (char *)CComponentTransform2D::SetRotationAngle )
    return CComponentTransform2D::SetRotationAngle(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_Offset,
             (float *)&v5);
  if ( (char *)off_1803F8360 == (char *)CBrush::SetAnimatedProperty )
    return CBrush::SetAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_Offset,
             &v5);
  return off_1803F8360();
}
