/*
 * XREFs of CanCombineToRegion @ 0x1801D0860
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x1801D08CC (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CanCombineToRegion(__int64 a1, __int64 a2, __int64 a3, CMILMatrix *a4)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) == 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3) == 2
      && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving(a4));
}
