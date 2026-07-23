/*
 * XREFs of MiUnlockPageTableInternal @ 0x1402C9C00
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x1402005C8 (MiDeleteEmptyPageTableWorker.c)
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x14020B840 (MiYieldPageTableWalk.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402155E0 (MiFlushDirtyBitsToPfn.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiEncodeProtoFill @ 0x140269858 (MiEncodeProtoFill.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiFinishPageTableForLargePage @ 0x14026B33C (MiFinishPageTableForLargePage.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiLockPoolCommitPageTable @ 0x14034BC80 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x14034C024 (MiUnlockPoolCommitWs.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     MiMakeProtoPrivate @ 0x1403C9630 (MiMakeProtoPrivate.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiFillHyperPtes @ 0x1404502E8 (MiFillHyperPtes.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14049D728 (MiWorkingSetInfoCheckPageTable.c)
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
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiGetNextNonGapPfnPage @ 0x14066E798 (MiGetNextNonGapPfnPage.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140693080 (MiComputeIdealLargePage.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v5; // al
  __int64 v6; // rdx
  volatile signed __int64 **v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  char v11; // cl
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // di
  __int64 v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *SchedulerAssist; // r8
  int v20; // ett
  signed __int32 v22[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        v6 = 1LL;
      }
      else
      {
        v6 = 3LL;
        if ( v5 == 5 )
          v6 = 0LL;
      }
    }
    else
    {
      v6 = 2LL;
    }
    v7 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v6];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v7);
      v3 = (signed __int64)*v7;
      if ( !*v7 )
      {
        v3 = _InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7);
        if ( v7 == (volatile signed __int64 **)v3 )
          return v3;
        v3 = KxWaitForLockChainValid(v7);
      }
      v12 = v3 + 8;
      *v7 = 0LL;
      v13 = (__int64)v7[1];
      LOBYTE(v3) = v13 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), v13);
      if ( (v3 & 4) != 0 )
      {
        _InterlockedOr(v22, 0);
        v16 = KeDisableInterrupts(v13, v6 * 24, (v12 >> 5) & 0x7F, 0x140000000uLL);
        LOBYTE(v3) = KiHaltOnAddressWakeEntireList(
                       v17,
                       _InterlockedExchange64((volatile __int64 *)(v15 + 8 * v14 + 15863808), 0LL));
        if ( v16 )
        {
          v18 = KeGetCurrentPrcb();
          SchedulerAssist = v18->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            LODWORD(v3) = *SchedulerAssist;
            do
            {
              v20 = v3;
              LODWORD(v3) = _InterlockedCompareExchange(SchedulerAssist, v3 & 0xFFDFFFFF, v3);
            }
            while ( v20 != (_DWORD)v3 );
            if ( (v3 & 0x200000) != 0 )
              LOBYTE(v3) = KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
          _enable();
        }
      }
    }
    else
    {
      LOBYTE(v3) = KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v11 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v3 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
      _InterlockedAnd(&dword_140E2F1EC[v3], ~(2 << v11) & ~(1 << v11));
    }
    else
    {
      LOBYTE(v3) = -1;
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v9 = (a2 >> 3) & 0x1FF;
    LODWORD(v3) = *(_DWORD *)(v8 + 4 * v9);
    v10 = (volatile signed __int32 *)(v8 + 4 * v9);
    if ( (v3 & 0x3FFFFFFF) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      else
      {
        LOBYTE(v3) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
    }
    else
    {
      if ( (int)v3 >= 0 )
        KeBugCheckEx(0x10u, (ULONG_PTR)v10, 0x100uLL, 0LL, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
        *v10 = 0;
      else
        LOBYTE(v3) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    }
  }
  return v3;
}
