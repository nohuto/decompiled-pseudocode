/*
 * XREFs of qsort_0 @ 0x140064F21
 * Callers:
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x14031D5A8 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl qsort_0(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  qsort(Base, NumOfElements, SizeOfElements, PtFuncCompare);
}
