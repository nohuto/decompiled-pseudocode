/*
 * XREFs of MiClearPfnReuseFields @ 0x1402C4CC0
 * Callers:
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiDiscardTransitionPteEx @ 0x1402C5640 (MiDiscardTransitionPteEx.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiReuseStandbyPage @ 0x1404C2648 (MiReuseStandbyPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBE94 (MiPreInitializeSystemImagePage.c)
 *     MiStackCopyHighLevel @ 0x1406698A4 (MiStackCopyHighLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClearPfnReuseFields(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+8h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  HIWORD(v2) &= 0xD7C7u;
  *(_DWORD *)(a1 + 32) = v2;
  result = *(_QWORD *)(a1 + 40);
  if ( (result & 0x10000000000LL) != 0 )
  {
    result = *(_DWORD *)(a1 + 36) & 0x18000000;
    *(_DWORD *)(a1 + 36) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
  }
  return result;
}
