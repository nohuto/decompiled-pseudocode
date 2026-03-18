/*
 * XREFs of MiGetSystemRegionType @ 0x140219770
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStoreCheckCandidatePage @ 0x1402CA054 (MiStoreCheckCandidatePage.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiPfnIsNonPagedPool @ 0x14044CE38 (MiPfnIsNonPagedPool.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1404ABE70 (MmIsNonPagedSystemAddressValid.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     MmGetVaTypeForVerifier @ 0x140669BE4 (MmGetVaTypeForVerifier.c)
 *     MiCrashdumpRemovePte @ 0x14066BBC0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14066BC60 (MiFilterCrashDumpPte.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MmAllocateSecurePoolMemory @ 0x1406713B8 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140671500 (MmFreeSecurePoolMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiCheckPteRelease @ 0x140682750 (MiCheckPteRelease.c)
 *     MiPerformFixups @ 0x140946214 (MiPerformFixups.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemRegionType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  else
    return byte_140E38768[((a1 >> 39) & 0x1FF) - 256];
}
