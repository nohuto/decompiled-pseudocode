/*
 * XREFs of MiSetPfnModified @ 0x140215EC0
 * Callers:
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiStoreModifiedWriteCompletePfn @ 0x140215DB8 (MiStoreModifiedWriteCompletePfn.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140215E44 (MiReleaseWsSwapReservationPfn.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiMarkMdlComplete @ 0x140267140 (MiMarkMdlComplete.c)
 *     MiAbandonPrivatePfn @ 0x140269D68 (MiAbandonPrivatePfn.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiStoreModifiedWriteComplete @ 0x1402DD72C (MiStoreModifiedWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiDeleteEnclavePage @ 0x14046D37C (MiDeleteEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x14046DD14 (MiInitializeEnclavePfn.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiMapSystemCachePage @ 0x1404C2D08 (MiMapSystemCachePage.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14067CD7C (MiPurgeFileOnlyPfn.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiDbgMarkPfnModified @ 0x14067FEDC (MiDbgMarkPfnModified.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C675CC (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
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
