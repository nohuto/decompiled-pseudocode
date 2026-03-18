/*
 * XREFs of MiGetSystemRegionType @ 0x14022AD20
 * Callers:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStoreCheckCandidatePage @ 0x140229014 (MiStoreCheckCandidatePage.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiFaultInProbeAddress @ 0x1402C3798 (MiFaultInProbeAddress.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140398DC4 (MiIssueHardFaultIo.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPfnIsNonPagedPool @ 0x14044C8EC (MiPfnIsNonPagedPool.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1404AD300 (MmIsNonPagedSystemAddressValid.c)
 *     MmGetVaTypeForVerifier @ 0x140675644 (MmGetVaTypeForVerifier.c)
 *     MiCrashdumpRemovePte @ 0x140677510 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x1406775B0 (MiFilterCrashDumpPte.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmAllocateSecurePoolMemory @ 0x14067CB78 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14067CCC0 (MmFreeSecurePoolMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiCheckPteRelease @ 0x14068DFE0 (MiCheckPteRelease.c)
 *     MiPerformFixups @ 0x140958AE0 (MiPerformFixups.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemRegionType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  else
    return byte_140E389A8[((a1 >> 39) & 0x1FF) - 256];
}
