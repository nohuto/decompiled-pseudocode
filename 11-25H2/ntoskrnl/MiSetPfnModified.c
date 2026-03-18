/*
 * XREFs of MiSetPfnModified @ 0x1403871E0
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiAbandonPrivatePfn @ 0x1402CC258 (MiAbandonPrivatePfn.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x140386C54 (MiStoreModifiedWriteCompletePfn.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140387164 (MiReleaseWsSwapReservationPfn.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteEnclavePage @ 0x1403FC8BC (MiDeleteEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1403FD254 (MiInitializeEnclavePfn.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiStoreModifiedWriteComplete @ 0x140463814 (MiStoreModifiedWriteComplete.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiMarkMdlComplete @ 0x1404947B0 (MiMarkMdlComplete.c)
 *     MiMapSystemCachePage @ 0x1404C945C (MiMapSystemCachePage.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiDbgMarkPfnModified @ 0x1406734BC (MiDbgMarkPfnModified.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C5413C (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 */

__int64 __fastcall MiSetPfnModified(__int64 a1, char a2)
{
  char v2; // r11
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h]

  v2 = a2;
  v5 = *(_DWORD *)(a1 + 32);
  if ( (v5 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
    && (*(_BYTE *)(a1 + 34) & 0x10) == 0
    && (*(_DWORD *)(a1 + 16) & 4) != 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
  }
  BYTE2(v5) ^= (BYTE2(v5) ^ (16 * v2)) & 0x10;
  result = v5;
  *(_DWORD *)(a1 + 32) = v5;
  return result;
}
