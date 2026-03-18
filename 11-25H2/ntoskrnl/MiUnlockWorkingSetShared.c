/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1402B9D50
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiComparePteProtections @ 0x140246118 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MmQueryWorkingSetInformation @ 0x1402BB410 (MmQueryWorkingSetInformation.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiUnlockPoolCommitWs @ 0x1402C3BC0 (MiUnlockPoolCommitWs.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiUnlockPageTableRange @ 0x1402CC7F0 (MiUnlockPageTableRange.c)
 *     MiEncodeProtoFill @ 0x1402CDF70 (MiEncodeProtoFill.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D437C (MiGetWorkingSetInfoEx.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
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
 *     MiMakeProtoPrivate @ 0x1403DE138 (MiMakeProtoPrivate.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x1403FCA58 (MiFinishPteChangesInPageTable.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
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
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     MmCheckProcessShadow @ 0x1404877A0 (MmCheckProcessShadow.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiUnlockFaultWorkingSet @ 0x14048D360 (MiUnlockFaultWorkingSet.c)
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
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
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
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
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
 *     MiCheckProcessShadow @ 0x1402BAB40 (MiCheckProcessShadow.c)
 *     MiSelfTrim @ 0x1402BAEFC (MiSelfTrim.c)
 *     MiReduceWs @ 0x1402BAF94 (MiReduceWs.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // di
  volatile signed __int32 *v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // ebp
  _QWORD *v7; // rsi
  unsigned int *MmInternal; // rcx
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

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
      v7 = &unk_140E38500;
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
