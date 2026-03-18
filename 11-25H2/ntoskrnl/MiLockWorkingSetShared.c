/*
 * XREFs of MiLockWorkingSetShared @ 0x140212A90
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x140246118 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiUnlockPageTableRange @ 0x1402CC7F0 (MiUnlockPageTableRange.c)
 *     MiEncodeProtoFill @ 0x1402CDF70 (MiEncodeProtoFill.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D437C (MiGetWorkingSetInfoEx.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403C22D8 (MmQuerySystemWorkingSetInformation.c)
 *     MiTrimOrAgeWorkingSet @ 0x1403C2D90 (MiTrimOrAgeWorkingSet.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403D9338 (MiEmptyWorkingSetInitiate.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiQueryAddressSpan @ 0x14045AA68 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPageTables @ 0x140465F44 (MiDeleteSystemPageTables.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 *     MmQueryCommitReleaseState @ 0x14047CE80 (MmQueryCommitReleaseState.c)
 *     MmCheckProcessShadow @ 0x1404877A0 (MmCheckProcessShadow.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiCountCommittedPages @ 0x140492B64 (MiCountCommittedPages.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiLockPageTableRange @ 0x14049569C (MiLockPageTableRange.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404973E0 (MmUpdateOldWorkingSetPages.c)
 *     MiObtainRotateProtectionRanges @ 0x140499700 (MiObtainRotateProtectionRanges.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MmRemoveExecuteGrants @ 0x14049FA30 (MmRemoveExecuteGrants.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C5D98 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiCopyWorkingSetFields @ 0x14065E2C4 (MiCopyWorkingSetFields.c)
 *     MiWalkResetCommitPages @ 0x14065EE64 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiGetFileOnlyRanges @ 0x140661830 (MiGetFileOnlyRanges.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140666BE8 (MiSetGraphicsPtes.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14066C4E8 (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x14066C948 (MiExceptionForMappedVa.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiCombineWorkingSet @ 0x1406799B8 (MiCombineWorkingSet.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140686B50 (MiComputeIdealLargePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407DABEC (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140C3C7E4 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140C3EBAC (MiMarkLargePageMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140C42318 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned int v2; // edi
  _DWORD *v3; // rbx
  unsigned __int8 v4; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // bl

  if ( (*(_DWORD *)(a1 + 184) & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    return CurrentIrql;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v1 = &unk_140E38500;
    else
      v1 = (_QWORD *)(a1 + 192);
    v2 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v3 = (_DWORD *)(*v1 + ((unsigned __int64)v2 << 6));
    v4 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v4);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v3);
      v5 = *v3 & 0x7FFFFFFF;
      while ( 1 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(v3, v5 + 1, v5);
        if ( v6 == v5 )
          break;
        if ( v5 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v3, v4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3, v4);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v2;
    return v4;
  }
}
