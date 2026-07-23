/*
 * XREFs of MiClearPfnReuseFields @ 0x140218960
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiReuseStandbyPage @ 0x14043BE20 (MiReuseStandbyPage.c)
 *     MiPreInitializeSystemImagePage @ 0x1404C5268 (MiPreInitializeSystemImagePage.c)
 *     MiStackCopyHighLevel @ 0x1406764D4 (MiStackCopyHighLevel.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
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
