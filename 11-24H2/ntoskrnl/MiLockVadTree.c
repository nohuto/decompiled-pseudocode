/*
 * XREFs of MiLockVadTree @ 0x1402DEE70
 * Callers:
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x1402E8330 (MiImagePageOk.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x1402FBB08 (MiVadSupportsCombine.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiStoreGetVadForAddress @ 0x14039788C (MiStoreGetVadForAddress.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     MiProcessCommitIntact @ 0x140402340 (MiProcessCommitIntact.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiComputeMaximumFaultCluster @ 0x14040EB50 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x1404A3418 (MiCanGrantExecute.c)
 *     MiLeapPrefetch @ 0x1404BF28C (MiLeapPrefetch.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockVadTree(char a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdx
  int *v4; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned __int8 v8; // di
  unsigned int v9; // edi
  int v10; // ecx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int8 CurrentIrql; // si
  unsigned int v14; // edi
  int i; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = (int *)&Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v9 = 0;
        if ( _interlockedbittestandset(v4, 0x1Fu) )
          v9 = ExpWaitForSpinLockExclusiveAndAcquire(v4, 0xFFu, a3);
        v10 = *v4;
        if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
          return 17;
        do
        {
          if ( (v10 & 0x40000000) == 0 )
            _InterlockedOr(v4, 0x40000000u);
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
          v10 = *v4;
        }
        while ( (*v4 & 0xBFFFFFFF) != 0x80000000 );
        return 17;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, 0xFFu);
        return 17;
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v14 = 0;
        if ( _interlockedbittestandset(v4, 0x1Fu) )
          v14 = ExpWaitForSpinLockExclusiveAndAcquire(v4, CurrentIrql, a3);
        for ( i = *v4; (*v4 & 0xBFFFFFFF) != 0x80000000; i = *v4 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v4, 0x40000000u);
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        return CurrentIrql;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
        return CurrentIrql;
      }
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
      {
        LOBYTE(Process) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, Process);
        return 17;
      }
      _m_prefetchw(v4);
      v6 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange(v4, v6 + 1, v6);
        if ( v7 == v6 )
          break;
        if ( v6 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v4, 0xFFu);
          return 17;
        }
      }
      return 17;
    }
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v8, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v4);
      v11 = *v4 & 0x7FFFFFFF;
      while ( 1 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v4, v11 + 1, v11);
        if ( v12 == v11 )
          break;
        if ( v11 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v4, v8);
          return v8;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, v8);
    }
    return v8;
  }
}
