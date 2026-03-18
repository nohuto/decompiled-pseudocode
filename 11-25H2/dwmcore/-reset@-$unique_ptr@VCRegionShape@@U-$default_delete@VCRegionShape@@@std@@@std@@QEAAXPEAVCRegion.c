/*
 * XREFs of ?reset@?$unique_ptr@VCRegionShape@@U?$default_delete@VCRegionShape@@@std@@@std@@QEAAXPEAVCRegionShape@@@Z @ 0x180219C70
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegionShape *__fastcall std::unique_ptr<CRegionShape>::reset(CRegionShape **a1, CRegionShape *a2)
{
  CRegionShape *result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return CRegionShape::`vector deleting destructor'(result, 1);
  return result;
}
