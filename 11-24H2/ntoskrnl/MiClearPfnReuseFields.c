/*
 * XREFs of MiClearPfnReuseFields @ 0x1403A1D30
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiRelinkStandbyPage @ 0x14022C848 (MiRelinkStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiReuseStandbyPage @ 0x140442E50 (MiReuseStandbyPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404CBDEC (MiPreInitializeSystemImagePage.c)
 *     MiStackCopyHighLevel @ 0x140675304 (MiStackCopyHighLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
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
