/*
 * XREFs of ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801F0EBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform3D::ProcessSetTransformMatrix(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *a3)
{
  char *v3; // r8

  v3 = (char *)a3 + 8;
  if ( (char *)off_1803F8518 == (char *)CGeometry::SetTrimInvalidatingAnimatedProperty )
    return CGeometry::SetTrimInvalidatingAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform3D::sc_TransformMatrix,
             v3);
  if ( (char *)off_1803F8518 == (char *)CComponentTransform2D::SetRotationAngle )
    return CComponentTransform2D::SetRotationAngle(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform3D::sc_TransformMatrix,
             (float *)v3);
  if ( (char *)off_1803F8518 == (char *)CBrush::SetAnimatedProperty )
    return CBrush::SetAnimatedProperty(
             this,
             (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform3D::sc_TransformMatrix,
             v3);
  return off_1803F8518();
}
