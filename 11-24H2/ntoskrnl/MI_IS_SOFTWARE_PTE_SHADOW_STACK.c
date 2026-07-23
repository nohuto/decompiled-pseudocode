/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1403517B0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_SOFTWARE_PTE_SHADOW_STACK(unsigned __int64 a1)
{
  if ( (a1 & 0x400) != 0 )
    return 0LL;
  else
    return (a1 >> 26) & 1;
}
