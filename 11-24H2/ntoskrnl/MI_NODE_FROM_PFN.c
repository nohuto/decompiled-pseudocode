/*
 * XREFs of MI_NODE_FROM_PFN @ 0x1402245F0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearStackOwners @ 0x140224450 (MiClearStackOwners.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1403EF4B4 (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404133A0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_NODE_FROM_PFN(__int64 a1)
{
  int v1; // edx
  ULONG_PTR v2; // rcx
  char *v3; // rax
  int i; // r9d
  int v5; // r8d

  v1 = dword_140E2DAC4;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v3 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v2 < *(_QWORD *)v3)
    || dword_140E2DAC0 != dword_140E2DAC4 && v2 >= *((_QWORD *)v3 + 2) )
  {
    for ( i = 0; ; i = v5 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, 0LL, 0LL);
        v5 = (i + v1) >> 1;
        v3 = (char *)qword_140E2DB20 + 16 * v5;
        if ( v2 >= *(_QWORD *)v3 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v2, (ULONG_PTR)v3, 0LL);
        v1 = v5 - 1;
      }
      if ( v5 == dword_140E2DAC4 || v2 < *((_QWORD *)v3 + 2) )
        break;
    }
    dword_140E2DAC0 = (i + v1) >> 1;
  }
  return *((unsigned int *)v3 + 2);
}
