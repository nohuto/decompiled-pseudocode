/*
 * XREFs of MI_NODE_FROM_PFN @ 0x14021CB00
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiClearStackOwners @ 0x14021C960 (MiClearStackOwners.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x14021E2D0 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404168F8 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 *     MiDrainZeroLookasides @ 0x140448904 (MiDrainZeroLookasides.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_NODE_FROM_PFN(__int64 a1)
{
  int v1; // edx
  ULONG_PTR v2; // rcx
  char *v3; // rax
  int i; // r8d
  int v5; // r9d

  v1 = dword_140E2D884;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2D880 > (unsigned int)dword_140E2D884
    || (v3 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v2 < *(_QWORD *)v3)
    || dword_140E2D880 != dword_140E2D884 && v2 >= *((_QWORD *)v3 + 2) )
  {
    for ( i = 0; ; i = v5 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, 0LL, 0LL);
        v5 = (i + v1) >> 1;
        v3 = (char *)qword_140E2D8E0 + 16 * v5;
        if ( v2 >= *(_QWORD *)v3 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, (ULONG_PTR)qword_140E2D8E0, 0LL);
        v1 = v5 - 1;
      }
      if ( v5 == dword_140E2D884 || v2 < *((_QWORD *)v3 + 2) )
        break;
    }
    dword_140E2D880 = (i + v1) >> 1;
  }
  return *((unsigned int *)v3 + 2);
}
