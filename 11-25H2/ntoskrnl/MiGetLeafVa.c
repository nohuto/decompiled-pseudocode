/*
 * XREFs of MiGetLeafVa @ 0x1402B5480
 * Callers:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402FAF80 (MiDeleteNonPagedPoolPte.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x140341580 (MiDecommitFreePage.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiInsertLargeUserMapping @ 0x140384EB8 (MiInsertLargeUserMapping.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiFinishPteChangesInPageTable @ 0x1403FCA58 (MiFinishPteChangesInPageTable.c)
 *     MiFlushValidPteFromTb @ 0x1403FF67C (MiFlushValidPteFromTb.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiMirrorRemoveInactivePages @ 0x1404A2958 (MiMirrorRemoveInactivePages.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiGetNextNonGapPfnPage @ 0x140661A84 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiUnlockPhysicalPageByVa @ 0x140663060 (MiUnlockPhysicalPageByVa.c)
 *     MiCrashdumpRemovePte @ 0x14066BBC0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14066BC60 (MiFilterCrashDumpPte.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiRealVaToFlushType @ 0x14067440C (MiRealVaToFlushType.c)
 *     MiScrubLargePageRegions @ 0x1406EC948 (MiScrubLargePageRegions.c)
 *     MiFreeEmptyBootPageTable @ 0x140C403C0 (MiFreeEmptyBootPageTable.c)
 *     MxCreatePfnsForPtes @ 0x140C41600 (MxCreatePfnsForPtes.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
