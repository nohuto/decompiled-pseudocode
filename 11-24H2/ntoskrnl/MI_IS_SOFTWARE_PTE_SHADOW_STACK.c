/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140397A50
 * Callers:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
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
