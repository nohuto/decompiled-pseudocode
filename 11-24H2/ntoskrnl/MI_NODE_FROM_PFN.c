/*
 * XREFs of MI_NODE_FROM_PFN @ 0x140251340
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearStackOwners @ 0x1402511A0 (MiClearStackOwners.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403E2438 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_NODE_FROM_PFN(__int64 a1)
{
  int v1; // edx
  ULONG_PTR v2; // rcx
  char *v3; // rax
  int i; // r9d
  int v5; // r8d

  v1 = dword_140E2DC04;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v3 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v2 < *(_QWORD *)v3)
    || dword_140E2DC00 != dword_140E2DC04 && v2 >= *((_QWORD *)v3 + 2) )
  {
    for ( i = 0; ; i = v5 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, 0LL, 0LL);
        v5 = (i + v1) >> 1;
        v3 = (char *)qword_140E2DC60 + 16 * v5;
        if ( v2 >= *(_QWORD *)v3 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, (ULONG_PTR)v3, 0LL);
        v1 = v5 - 1;
      }
      if ( v5 == dword_140E2DC04 || v2 < *((_QWORD *)v3 + 2) )
        break;
    }
    dword_140E2DC00 = (i + v1) >> 1;
  }
  return *((unsigned int *)v3 + 2);
}
