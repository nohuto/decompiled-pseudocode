/*
 * XREFs of ?D2DCombineModeFromMilCombineMode@@YA?AW4D2D1_COMBINE_MODE@@W4Enum@MilCombineMode@@@Z @ 0x18004DFC0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DCombineModeFromMilCombineMode(int a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 == 1 )
    return 1LL;
  return 3LL;
}
