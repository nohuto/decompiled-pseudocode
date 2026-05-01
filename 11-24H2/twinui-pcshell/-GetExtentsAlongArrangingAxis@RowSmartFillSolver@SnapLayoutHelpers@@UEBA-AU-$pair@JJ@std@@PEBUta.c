/*
 * XREFs of ?GetExtentsAlongArrangingAxis@RowSmartFillSolver@SnapLayoutHelpers@@UEBA?AU?$pair@JJ@std@@PEBUtagRECT@@@Z @ 0x1805AAB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SnapLayoutHelpers::RowSmartFillSolver::GetExtentsAlongArrangingAxis(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  *a2 = *(_DWORD *)(a3 + 4);
  a2[1] = *(_DWORD *)(a3 + 12);
  return a2;
}
