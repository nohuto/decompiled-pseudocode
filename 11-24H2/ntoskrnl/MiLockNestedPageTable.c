/*
 * XREFs of MiLockNestedPageTable @ 0x140201F50
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x1402005C8 (MiDeleteEmptyPageTableWorker.c)
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 *     MiEncodeProtoFill @ 0x140269858 (MiEncodeProtoFill.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiDecommitLockNewPageTable @ 0x1402999C0 (MiDecommitLockNewPageTable.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14038DEE4 (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiUnlockPageTableRange @ 0x1403DB524 (MiUnlockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiInitializeWorkingSetList @ 0x1404A0B1C (MiInitializeWorkingSetList.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLockNestedPageTable(__int64 a1, ULONG_PTR a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v5; // al
  volatile __int64 *v6; // rdx
  unsigned int v7; // ebx
  _KSPIN_LOCK_QUEUE *volatile *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  signed __int64 v24; // rdi
  signed __int64 v25; // rax
  unsigned int v26; // ebp
  unsigned __int64 v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rdi
  char v31; // cl
  int v32; // r15d
  int v33; // ebx
  int v34; // esi
  __int64 v35; // rcx
  unsigned __int32 v36; // eax
  unsigned int v37; // ecx
  unsigned __int32 v38; // eax

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
      v9 = _InterlockedExchange64(v6, (__int64)v8);
      if ( v9 )
        KxWaitForLockOwnerShip(v8, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented();
    }
  }
  else
  {
    v10 = 0xFFFFF6FB7DBED000uLL;
    v11 = 0xFFFFF6FB7DBEDFFFuLL;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
      && a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBEDFFFuLL
      && (v12 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 4 * ((a2 >> 3) & 0x1FF)));
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v26 = 0;
      v27 = (unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5;
      v28 = (2 * (unsigned __int8)((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v29 = *(&MiState + v27 + 2459);
      v30 = (volatile signed __int32 *)(&MiState + v27 + 2459);
      v31 = (2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F;
      v32 = 1 << v31;
      v33 = 2 << v31;
      v34 = ~(2 << v31);
      do
      {
        while ( 1 )
        {
          v35 = v28;
          if ( (((unsigned int)v29 >> v28) & 1) == 0 )
            break;
          if ( (((unsigned int)v29 >> v28) & 2) != 0 )
          {
            do
            {
              if ( (++v26 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v35, v29, v10, v11) )
              {
                HvlNotifyLongSpinWait(v26);
              }
              else
              {
                _mm_pause();
              }
              v29 = *(unsigned int *)v30;
              v35 = v28;
            }
            while ( (((unsigned __int32)*v30 >> v28) & 1) != 0 );
          }
          else
          {
            v37 = v29 | v33;
            v38 = _InterlockedCompareExchange(v30, v29 | v33, v29);
            v18 = (_DWORD)v29 == v38;
            v29 = v38;
            if ( v18 )
              v29 = v37;
          }
        }
        v36 = _InterlockedCompareExchange(v30, v34 & (v29 | v32), v29);
        v18 = (_DWORD)v29 == v36;
        v29 = v36;
      }
      while ( !v18 );
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
LABEL_18:
      v15 = 0x4000000000LL;
      v16 = 0xFFFFF68000000000uLL;
LABEL_19:
      v17 = 0x2000000000000000LL;
      while ( (v13 & 1) != 0 )
      {
        if ( (v13 & 0x1000000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v19 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)a2,
                  v13 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                  v13);
          v18 = v13 == v19;
          v13 = v19;
          if ( !v18 )
            goto LABEL_19;
          return;
        }
        if ( ((v13 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, v16, v15, v11) )
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
          goto LABEL_18;
        }
        v24 = v13 | 0x2000000000000000LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v13 & 0x21) == 1 && a2 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit(a2, v13 | 0x2000000000000000LL);
          v17 = 0x2000000000000000LL;
          v16 = 0xFFFFF68000000000uLL;
          v15 = 0x4000000000LL;
        }
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v24, v13);
        v18 = v13 == v25;
        v13 = v25;
        if ( v18 )
          v13 = v24;
      }
    }
  }
}
