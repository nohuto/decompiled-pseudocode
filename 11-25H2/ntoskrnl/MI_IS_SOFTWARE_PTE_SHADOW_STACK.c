/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140208510
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
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
