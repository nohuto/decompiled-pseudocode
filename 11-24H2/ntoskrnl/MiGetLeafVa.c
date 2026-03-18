/*
 * XREFs of MiGetLeafVa @ 0x1402DEE20
 * Callers:
 *     MiMapBackgroundPagesToZero @ 0x14020B740 (MiMapBackgroundPagesToZero.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402349C0 (MiDeleteNonPagedPoolPte.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiInsertLargeUserMapping @ 0x14036ECE0 (MiInsertLargeUserMapping.c)
 *     MiFlushValidPteFromTb @ 0x1403942E4 (MiFlushValidPteFromTb.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140477174 (MiDeleteEmptyPageTableCommit.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiMirrorRemoveInactivePages @ 0x1404A2358 (MiMirrorRemoveInactivePages.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiGetNextNonGapPfnPage @ 0x14066D5C4 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066EBA0 (MiUnlockPhysicalPageByVa.c)
 *     MiCrashdumpRemovePte @ 0x140677510 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x1406775B0 (MiFilterCrashDumpPte.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiRealVaToFlushType @ 0x14067FC2C (MiRealVaToFlushType.c)
 *     MiScrubLargePageRegions @ 0x1406F80D4 (MiScrubLargePageRegions.c)
 *     MiFreeEmptyBootPageTable @ 0x140C515F0 (MiFreeEmptyBootPageTable.c)
 *     MxCreatePfnsForPtes @ 0x140C52830 (MxCreatePfnsForPtes.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
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
