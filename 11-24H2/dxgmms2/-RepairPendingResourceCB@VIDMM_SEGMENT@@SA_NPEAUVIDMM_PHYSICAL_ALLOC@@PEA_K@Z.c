/*
 * XREFs of ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009E8DC
 * Callers:
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x1400A0364 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::RepairPendingResourceCB(struct VIDMM_PHYSICAL_ALLOC *a1, unsigned __int64 *a2)
{
  bool result; // al

  if ( !a1 || !*((_QWORD *)a1 + 13) )
    return 0;
  *a2 = *((_QWORD *)a1 + 9);
  result = 1;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  return result;
}
