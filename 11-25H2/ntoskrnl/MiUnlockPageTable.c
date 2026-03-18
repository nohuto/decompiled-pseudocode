/*
 * XREFs of MiUnlockPageTable @ 0x14028B6B0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiCheckProcessShadow @ 0x1402BAB40 (MiCheckProcessShadow.c)
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402C2F60 (MiFillPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402C3BC0 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitPageTable @ 0x1402C3CB8 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPageTableRange @ 0x1402CC7F0 (MiUnlockPageTableRange.c)
 *     MiEncodeProtoFill @ 0x1402CDF70 (MiEncodeProtoFill.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E8120 (MiYieldPageTableWalk.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
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
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiFillHyperPtes @ 0x14045BBC8 (MiFillHyperPtes.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     MiDeleteEmptyPageTableWorker @ 0x140475828 (MiDeleteEmptyPageTableWorker.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiLockPageTableRange @ 0x14049569C (MiLockPageTableRange.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2D98 (MiWorkingSetInfoCheckPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C5D98 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiFinishPageTableForLargePage @ 0x1404C998C (MiFinishPageTableForLargePage.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiGetNextNonGapPfnPage @ 0x140661A84 (MiGetNextNonGapPfnPage.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140666BE8 (MiSetGraphicsPtes.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140686B50 (MiComputeIdealLargePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  char v3; // cl
  signed __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v9; // al
  __int64 v10; // rdx
  volatile signed __int64 **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // di
  __int64 v16; // rcx
  struct _KPRCB *v17; // rcx
  _DWORD *SchedulerAssist; // r8
  int v19; // ett
  signed __int32 v21[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        v10 = 1LL;
      }
      else
      {
        v10 = 3LL;
        if ( v9 == 5 )
          v10 = 0LL;
      }
    }
    else
    {
      v10 = 2LL;
    }
    v11 = (volatile signed __int64 **)&CurrentPrcb->SelfmapLockHandle[v10];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v11);
      v4 = (signed __int64)*v11;
      if ( !*v11 )
      {
        v4 = _InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11);
        if ( v11 == (volatile signed __int64 **)v4 )
          return v4;
        v4 = KxWaitForLockChainValid((__int64 *)v11);
      }
      *v11 = 0LL;
      v12 = (__int64)v11[1];
      LOBYTE(v4) = v12 ^ _InterlockedExchange64((volatile __int64 *)(v4 + 8), v12);
      if ( (v4 & 4) != 0 )
      {
        _InterlockedOr(v21, 0);
        v15 = KeDisableInterrupts();
        LOBYTE(v4) = KiHaltOnAddressWakeEntireList(
                       v16,
                       _InterlockedExchange64((volatile __int64 *)(v14 + 8 * v13 + 15861120), 0LL));
        if ( v15 )
        {
          v17 = KeGetCurrentPrcb();
          SchedulerAssist = v17->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            LODWORD(v4) = *SchedulerAssist;
            do
            {
              v19 = v4;
              LODWORD(v4) = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
            }
            while ( v19 != (_DWORD)v4 );
            if ( (v4 & 0x200000) != 0 )
              LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(v17);
          }
          _enable();
        }
      }
    }
    else
    {
      LOBYTE(v4) = KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v5 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v3 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v4 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
      _InterlockedAnd(&dword_140E2EE6C[v4], ~(2 << v3) & ~(1 << v3));
    }
    else
    {
      LOBYTE(v4) = -1;
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v6 = (a2 >> 3) & 0x1FF;
    LODWORD(v4) = *(_DWORD *)(v5 + 4 * v6);
    v7 = (volatile signed __int32 *)(v5 + 4 * v6);
    if ( (v4 & 0x3FFFFFFF) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v4) = PopHibernateInProgress, PopHibernateInProgress) )
      {
        _InterlockedAnd(v7, 0xBFFFFFFF);
        _InterlockedDecrement(v7);
      }
      else
      {
        LOBYTE(v4) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v7, retaddr, 0xFFFFF6FB7DBED000uLL);
      }
    }
    else
    {
      if ( (int)v4 >= 0 )
        KeBugCheckEx(0x10u, (ULONG_PTR)v7, 0x100uLL, 0LL, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v4) = PopHibernateInProgress, PopHibernateInProgress) )
        *v7 = 0;
      else
        LOBYTE(v4) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    }
  }
  return v4;
}
