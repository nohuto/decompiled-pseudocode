/*
 * XREFs of MiGetSystemRegionType @ 0x1402FDF90
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiAddWorkingSetEntries @ 0x140242260 (MiAddWorkingSetEntries.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiStoreCheckCandidatePage @ 0x1402FC214 (MiStoreCheckCandidatePage.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPfnIsNonPagedPool @ 0x1404437EC (MiPfnIsNonPagedPool.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1404A79E0 (MmIsNonPagedSystemAddressValid.c)
 *     MmGetVaTypeForVerifier @ 0x140676814 (MmGetVaTypeForVerifier.c)
 *     MiCrashdumpRemovePte @ 0x1406786F0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x140678790 (MiFilterCrashDumpPte.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x14067DEA0 (MmFreeSecurePoolMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiCheckPteRelease @ 0x14068F110 (MiCheckPteRelease.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemRegionType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return 0LL;
  else
    return byte_140E38AE8[((a1 >> 39) & 0x1FF) - 256];
}
