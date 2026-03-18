/*
 * XREFs of MiSetPfnModified @ 0x1402E4730
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x1402E4620 (MiStoreModifiedWriteCompletePfn.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1402E46AC (MiReleaseWsSwapReservationPfn.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiAbandonPrivatePfn @ 0x14036D268 (MiAbandonPrivatePfn.c)
 *     MiInitializePfnForOtherProcess @ 0x140396C84 (MiInitializePfnForOtherProcess.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiMarkMdlComplete @ 0x1403CD75C (MiMarkMdlComplete.c)
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     MiStoreModifiedWriteComplete @ 0x14045C418 (MiStoreModifiedWriteComplete.c)
 *     MiInitializeEnclavePfn @ 0x1404740A8 (MiInitializeEnclavePfn.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiMapSystemCachePage @ 0x1404C9858 (MiMapSystemCachePage.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiDbgMarkPfnModified @ 0x14067ECDC (MiDbgMarkPfnModified.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C65450 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
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
