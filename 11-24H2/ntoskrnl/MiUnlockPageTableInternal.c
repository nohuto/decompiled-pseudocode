/*
 * XREFs of MiUnlockPageTableInternal @ 0x140321070
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiFlushDirtyBitsToPfn @ 0x140233F80 (MiFlushDirtyBitsToPfn.c)
 *     MiIsCfgBitMapPageShared @ 0x140234458 (MiIsCfgBitMapPageShared.c)
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiEvictPageTableLock @ 0x140234EEC (MiEvictPageTableLock.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiMakeProtoPrivate @ 0x140239334 (MiMakeProtoPrivate.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiEncodeProtoFill @ 0x1402C6470 (MiEncodeProtoFill.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E3540 (MiYieldPageTableWalk.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiLockPoolCommitPageTable @ 0x1402EA640 (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402EA9E4 (MiUnlockPoolCommitWs.c)
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiFinishPageTableForLargePage @ 0x1403A7F88 (MiFinishPageTableForLargePage.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiFillHyperPtes @ 0x14045AF48 (MiFillHyperPtes.c)
 *     MiDeleteEmptyPageTableWorker @ 0x140473768 (MiDeleteEmptyPageTableWorker.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiQueryImageExtensionInformation @ 0x140474954 (MiQueryImageExtensionInformation.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2798 (MiWorkingSetInfoCheckPageTable.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404A5D8C (MiInitializeWorkingSetList.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404C6618 (MiZeroAndFlushGoodCitizen.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D80F4 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiCheckCommitReleaseFromVad @ 0x140669880 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiGetNextNonGapPfnPage @ 0x14066D5C4 (MiGetNextNonGapPfnPage.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiSetGraphicsPtes @ 0x140672698 (MiSetGraphicsPtes.c)
 *     MiCommitHotPatchTable @ 0x14067CF28 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068C850 (MmStoreIsVirtualAddressPoisoned.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140691FB0 (MiComputeIdealLargePage.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
        v16 = KeDisableInterrupts(v13, v6 * 24, (v12 >> 5) & 0x7F);
        LOBYTE(v3) = KiHaltOnAddressWakeEntireList(
                       v17,
                       _InterlockedExchange64((volatile __int64 *)(v15 + 8 * v14 + 15863072), 0LL));
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
      _InterlockedAnd(&dword_140E2F0AC[v3], ~(2 << v11) & ~(1 << v11));
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
