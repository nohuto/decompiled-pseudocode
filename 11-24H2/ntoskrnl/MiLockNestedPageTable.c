/*
 * XREFs of MiLockNestedPageTable @ 0x140285190
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiEvictPageTableLock @ 0x140234EEC (MiEvictPageTableLock.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiDecommitLockNewPageTable @ 0x140289DC0 (MiDecommitLockNewPageTable.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiEncodeProtoFill @ 0x1402C6470 (MiEncodeProtoFill.c)
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiUnlockPageTableRange @ 0x1402C7A54 (MiUnlockPageTableRange.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x1403D1CC8 (MiUnlockOpportunisticPagesInPageTable.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiDeleteEmptyPageTableWorker @ 0x140473768 (MiDeleteEmptyPageTableWorker.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiInitializeWorkingSetList @ 0x1404A5D8C (MiInitializeWorkingSetList.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D80F4 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406830EC (MiUnmapLegacyAwePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E7EC0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C575E4 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLockNestedPageTable(__int64 a1, ULONG_PTR a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v5; // al
  volatile __int64 *v6; // rdx
  unsigned int v7; // ebx
  _KSPIN_LOCK_QUEUE *volatile *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  bool v13; // zf
  signed __int64 v14; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  signed __int64 v19; // rdi
  signed __int64 v20; // rax
  unsigned int v21; // ebp
  unsigned __int64 v22; // rdi
  unsigned int v23; // r14d
  unsigned __int32 v24; // edx
  volatile signed __int32 *v25; // rdi
  char v26; // cl
  int v27; // r15d
  int v28; // ebx
  int v29; // esi
  __int64 v30; // rcx
  signed __int32 v31; // eax
  int v32; // ecx
  signed __int32 v33; // eax

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        v7 = 1;
      }
      else
      {
        v7 = 3;
        if ( v5 == 5 )
          v7 = 0;
      }
      v6 = (volatile __int64 *)(&MiState + 2 * v7 + 3232);
    }
    else
    {
      v6 = (volatile __int64 *)(a1 + 176);
      v7 = 2;
    }
    v8 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v7 + v7;
    *((_QWORD *)v8 + 1) = v6;
    *v8 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v6, (__int64)v8) )
        KxWaitForLockOwnerShip(v8);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v8, v6);
    }
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
         && a2 >= 0xFFFFF6FB7DBED000uLL
         && a2 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v9 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 4 * ((a2 >> 3) & 0x1FF)));
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v21 = 0;
    v22 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
    v23 = (2 * (unsigned __int8)((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
    v24 = *(&MiState + v22 + 2459);
    v25 = (volatile signed __int32 *)(&MiState + v22 + 2459);
    v26 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
    v27 = 1 << v26;
    v28 = 2 << v26;
    v29 = ~(2 << v26);
    do
    {
      while ( 1 )
      {
        v30 = v23;
        if ( ((v24 >> v23) & 1) == 0 )
          break;
        if ( ((v24 >> v23) & 2) != 0 )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
            v24 = *v25;
            v30 = v23;
          }
          while ( (((unsigned __int32)*v25 >> v23) & 1) != 0 );
        }
        else
        {
          v32 = v24 | v28;
          v33 = _InterlockedCompareExchange(v25, v24 | v28, v24);
          v13 = v24 == v33;
          v24 = v33;
          if ( v13 )
            v24 = v32;
        }
      }
      v31 = _InterlockedCompareExchange(v25, v29 & (v24 | v27), v24);
      v13 = v24 == v31;
      v24 = v31;
    }
    while ( !v13 );
  }
  else
  {
    v10 = *(_QWORD *)a2;
    v11 = 0;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v10 & 1) != 0
      && ((v10 & 0x42) == 0 || (v10 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v10 |= 0x20uLL;
          v18 = v10;
          v10 |= 0x42uLL;
          if ( (v17 & 0x42) == 0 )
            v10 = v18;
        }
      }
    }
LABEL_18:
    v12 = 0x2000000000000000LL;
    while ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x1000000000000000LL) == 0 )
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v14 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)a2,
                v10 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v10);
        v13 = v10 == v14;
        v10 = v14;
        if ( !v13 )
          goto LABEL_18;
        return;
      }
      if ( ((v10 >> 60) & 2) != 0 )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
          v10 = *(_QWORD *)a2;
        }
        while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        goto LABEL_18;
      }
      v19 = v10 | 0x2000000000000000LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(a2, v10 | 0x2000000000000000LL, 128);
        v12 = 0x2000000000000000LL;
      }
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v19, v10);
      v13 = v10 == v20;
      v10 = v20;
      if ( v13 )
        v10 = v19;
    }
  }
}
