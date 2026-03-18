/*
 * XREFs of ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x1801E970C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1801E9644 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1801E9740 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 */

void __fastcall CRegionShape::BuildFromCRegion(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  CRegionShape::SetEmpty((CRegionShape *)this);
  CRegion::Copy(this + 2, a2);
}
