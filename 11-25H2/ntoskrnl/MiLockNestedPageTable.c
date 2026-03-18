/*
 * XREFs of MiLockNestedPageTable @ 0x1402FB780
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiCheckProcessShadow @ 0x1402BAB40 (MiCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x1402CC7F0 (MiUnlockPageTableRange.c)
 *     MiEncodeProtoFill @ 0x1402CDF70 (MiEncodeProtoFill.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiDecommitLockNewPageTable @ 0x140383410 (MiDecommitLockNewPageTable.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403911E8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiDeleteEmptyPageTableWorker @ 0x140475828 (MiDeleteEmptyPageTableWorker.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiInitializeWorkingSetList @ 0x1404A791C (MiInitializeWorkingSetList.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407D8000 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

void __fastcall MiLockNestedPageTable(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v7; // al
  volatile __int64 *v8; // rdx
  unsigned int v9; // ebx
  _KSPIN_LOCK_QUEUE *volatile *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  bool v16; // zf
  signed __int64 v17; // rax
  signed __int64 v18; // rdi
  signed __int64 v19; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // ebp
  unsigned __int64 v25; // rdi
  unsigned int v26; // r14d
  unsigned __int32 v27; // edx
  volatile signed __int32 *v28; // rdi
  char v29; // cl
  int v30; // r15d
  int v31; // ebx
  int v32; // esi
  __int64 v33; // rcx
  signed __int32 v34; // eax
  int v35; // ecx
  signed __int32 v36; // eax

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v7 )
    {
      if ( v7 == 7 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 3;
        if ( v7 == 5 )
          v9 = 0;
      }
      v8 = (volatile __int64 *)(&MiState + 2 * v9 + 3232);
    }
    else
    {
      v8 = (volatile __int64 *)(a1 + 176);
      v9 = 2;
    }
    v10 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v9 + v9;
    *((_QWORD *)v10 + 1) = v8;
    *v10 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v11 = _InterlockedExchange64(v8, (__int64)v10);
      if ( v11 )
        KxWaitForLockOwnerShip(v10, v11, CurrentPrcb, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v10, v8);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
         && a2 >= 0xFFFFF6FB7DBED000uLL
         && a2 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v12 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 4 * ((a2 >> 3) & 0x1FF)));
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v24 = 0;
    v25 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
    v26 = (2 * (unsigned __int8)((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
    v27 = *(&MiState + v25 + 2459);
    v28 = (volatile signed __int32 *)(&MiState + v25 + 2459);
    v29 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
    v30 = 1 << v29;
    v31 = 2 << v29;
    v32 = ~(2 << v29);
    do
    {
      while ( 1 )
      {
        v33 = v26;
        if ( ((v27 >> v26) & 1) == 0 )
          break;
        if ( ((v27 >> v26) & 2) != 0 )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
            v27 = *v28;
            v33 = v26;
          }
          while ( (((unsigned __int32)*v28 >> v26) & 1) != 0 );
        }
        else
        {
          v35 = v27 | v31;
          v36 = _InterlockedCompareExchange(v28, v27 | v31, v27);
          v16 = v27 == v36;
          v27 = v36;
          if ( v16 )
            v27 = v35;
        }
      }
      v34 = _InterlockedCompareExchange(v28, v32 & (v27 | v30), v27);
      v16 = v27 == v34;
      v27 = v34;
    }
    while ( !v16 );
  }
  else
  {
    v13 = *(_QWORD *)a2;
    v14 = 0;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v13 & 1) != 0
      && ((v13 & 0x42) == 0 || (v13 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v22 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v13 |= 0x20uLL;
          v23 = v13;
          v13 |= 0x42uLL;
          if ( (v22 & 0x42) == 0 )
            v13 = v23;
        }
      }
    }
LABEL_15:
    v15 = 0x2000000000000000LL;
    while ( (v13 & 1) != 0 )
    {
      if ( (v13 & 0x1000000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v17 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)a2,
                v13 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v13);
        v16 = v13 == v17;
        v13 = v17;
        if ( !v16 )
          goto LABEL_15;
        return;
      }
      if ( ((v13 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
          v13 = *(_QWORD *)a2;
        }
        while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        goto LABEL_15;
      }
      v18 = v13 | 0x2000000000000000LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (v13 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(a2, v13 | 0x2000000000000000LL);
        v15 = 0x2000000000000000LL;
      }
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v18, v13);
      v16 = v13 == v19;
      v13 = v19;
      if ( v16 )
        v13 = v18;
    }
  }
}
