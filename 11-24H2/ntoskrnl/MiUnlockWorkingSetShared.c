/*
 * XREFs of MiUnlockWorkingSetShared @ 0x140241CF0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiGetWorkingSetInfoEx @ 0x14025E8F0 (MiGetWorkingSetInfoEx.c)
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiEncodeProtoFill @ 0x140269858 (MiEncodeProtoFill.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiUnlockPoolCommitWs @ 0x14034C024 (MiUnlockPoolCommitWs.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403C9630 (MiMakeProtoPrivate.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiAllowProtectionChange @ 0x1404389E8 (MiAllowProtectionChange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiComparePteProtections @ 0x140440114 (MiComparePteProtections.c)
 *     MiQueryAddressSpan @ 0x14044AF24 (MiQueryAddressSpan.c)
 *     MiDeleteSystemPageTables @ 0x14045B798 (MiDeleteSystemPageTables.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046A3B0 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140473714 (MiDeleteEmptyPageTableCommit.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MmQueryCommitReleaseState @ 0x140478DE4 (MmQueryCommitReleaseState.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MmCheckProcessShadow @ 0x140482160 (MmCheckProcessShadow.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 *     MiUnlockFaultWorkingSet @ 0x140487790 (MiUnlockFaultWorkingSet.c)
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiCountCommittedPages @ 0x14048CFA4 (MiCountCommittedPages.c)
 *     MmUpdateOldWorkingSetPages @ 0x140491190 (MmUpdateOldWorkingSetPages.c)
 *     MiObtainRotateProtectionRanges @ 0x140494200 (MiObtainRotateProtectionRanges.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MmRemoveExecuteGrants @ 0x140499A20 (MmRemoveExecuteGrants.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A0B1C (MiInitializeWorkingSetList.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404BFA78 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiCopyWorkingSetFields @ 0x14066AFB4 (MiCopyWorkingSetFields.c)
 *     MiWalkResetCommitPages @ 0x14066BB18 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140679018 (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x140679424 (MiExceptionForMappedVa.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140693080 (MiComputeIdealLargePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EB07C (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140C4FC84 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageMappings @ 0x140C51F6C (MiMarkLargePageMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140C556D8 (MiCreateInitialSystemWsles.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 *     MiSelfTrim @ 0x140243008 (MiSelfTrim.c)
 *     MiReduceWs @ 0x1402430A0 (MiReduceWs.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // bl
  volatile signed __int32 *v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // ebp
  _QWORD *v7; // rsi
  unsigned int *MmInternal; // rcx
  __int64 v9; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 17;
  if ( a2 != 2 )
    v2 = a2;
  LOBYTE(v4) = *(_DWORD *)(a1 + 184) & 0xF;
  if ( (unsigned __int8)v4 >= 6u )
  {
    if ( v2 == 17 )
      return (char)v4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 188) & 3) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0
        && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x2000) == 0 )
      {
        v6 = *(_DWORD *)(a1 + 188);
        if ( (v6 & 1) != 0 )
          MiSelfTrim(a1, v2);
        if ( (v6 & 2) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 188), 0xFFFFFFFD);
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
          MiReduceWs(a1, v2, *(_QWORD *)(a1 + 120));
        }
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      }
    }
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v7 = &unk_140E38880;
    else
      v7 = (_QWORD *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      v9 = MmInternal[81];
    else
      v9 = 0LL;
    v4 = (volatile signed __int32 *)(*v7 + (v9 << 6));
    if ( v2 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v4, 0xBFFFFFFF);
        _InterlockedDecrement(v4);
      }
      else
      {
        LOBYTE(v4) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
      }
      return (char)v4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  LOBYTE(v4) = v2;
  __writecr8(v2);
  return (char)v4;
}
