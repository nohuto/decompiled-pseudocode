/*
 * XREFs of ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x180146C9C
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1802034D0 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180146C68 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 */

void __fastcall CRegionShape::BuildFromCRegion(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  CRegionShape::SetEmpty((CRegionShape *)this);
  CRegion::Copy(this + 2, a2);
}
