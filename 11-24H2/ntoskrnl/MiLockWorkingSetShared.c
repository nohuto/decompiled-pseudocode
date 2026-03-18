/*
 * XREFs of MiLockWorkingSetShared @ 0x1402DF970
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTables @ 0x140234368 (MiDeleteSystemPageTables.c)
 *     MiIsCfgBitMapPageShared @ 0x140234458 (MiIsCfgBitMapPageShared.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiGetWorkingSetInfoEx @ 0x140267310 (MiGetWorkingSetInfoEx.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1402C6470 (MiEncodeProtoFill.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiDeletePagablePteRange @ 0x1403CC1D4 (MiDeletePagablePteRange.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiQueryAddressSpan @ 0x1403CE718 (MiQueryAddressSpan.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiEmptyWorkingSetInitiate @ 0x140404B98 (MiEmptyWorkingSetInitiate.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiAllowProtectionChange @ 0x140441E14 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x1404479F4 (MiComparePteProtections.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046FF88 (MmQuerySystemWorkingSetInformation.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140477174 (MiDeleteEmptyPageTableCommit.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MmQueryCommitReleaseState @ 0x14047DB54 (MmQueryCommitReleaseState.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MmCheckProcessShadow @ 0x1404870F0 (MmCheckProcessShadow.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiCountCommittedPages @ 0x140492104 (MiCountCommittedPages.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MmUpdateOldWorkingSetPages @ 0x140496800 (MmUpdateOldWorkingSetPages.c)
 *     MiObtainRotateProtectionRanges @ 0x140499870 (MiObtainRotateProtectionRanges.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MmRemoveExecuteGrants @ 0x14049EBE8 (MmRemoveExecuteGrants.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A5D8C (MiInitializeWorkingSetList.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C6618 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiCopyWorkingSetFields @ 0x140669DE4 (MiCopyWorkingSetFields.c)
 *     MiWalkResetCommitPages @ 0x14066A948 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiGetFileOnlyRanges @ 0x14066D370 (MiGetFileOnlyRanges.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140672698 (MiSetGraphicsPtes.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140677E38 (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140678298 (MiExceptionForMappedVa.c)
 *     MiCommitHotPatchTable @ 0x14067CF28 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiCombineWorkingSet @ 0x140685248 (MiCombineWorkingSet.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068C850 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140691FB0 (MiComputeIdealLargePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EAAAC (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4DAE8 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140C4FDDC (MiMarkLargePageMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140C53548 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  unsigned __int8 v4; // si
  _DWORD *MmInternal; // rcx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int8 CurrentIrql; // bl

  if ( (*(_DWORD *)(a1 + 184) & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    return CurrentIrql;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v1 = &unk_140E38740;
    else
      v1 = (_QWORD *)(a1 + 192);
    v2 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v3 = (_DWORD *)(*v1 + ((unsigned __int64)v2 << 6));
    v4 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v3);
      v7 = *v3 & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v3, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
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
