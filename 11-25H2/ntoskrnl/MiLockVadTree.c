/*
 * XREFs of MiLockVadTree @ 0x1402B54D0
 * Callers:
 *     MiStoreGetVadForAddress @ 0x140207B58 (MiStoreGetVadForAddress.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x140239CF4 (MiVadSupportsCombine.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiObtainReferencedSecureVad @ 0x1402A6B28 (MiObtainReferencedSecureVad.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402A77E4 (MiReturnLockedVadOrNextVa.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiImagePageOk @ 0x14033B990 (MiImagePageOk.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MiComputeMaximumFaultCluster @ 0x1403E1520 (MiComputeMaximumFaultCluster.c)
 *     MiProcessCommitIntact @ 0x1403FA380 (MiProcessCommitIntact.c)
 *     MiCanGrantExecute @ 0x1404A3608 (MiCanGrantExecute.c)
 *     MiLeapPrefetch @ 0x1404C0B80 (MiLeapPrefetch.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockVadTree(char a1, __int64 a2)
{
  int *v2; // rbx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  unsigned __int8 v6; // di
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx

  v2 = (int *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v9 = 0;
        if ( _interlockedbittestandset(v2, 0x1Fu) )
          v9 = ExpWaitForSpinLockExclusiveAndAcquire(v2, 0xFFu);
        v10 = (unsigned int)*v2;
        if ( (*v2 & 0xBFFFFFFF) == 0x80000000 )
          return 17;
        do
        {
          if ( (v10 & 0x40000000) == 0 )
            _InterlockedOr(v2, 0x40000000u);
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
          v10 = (unsigned int)*v2;
        }
        while ( (*v2 & 0xBFFFFFFF) != 0x80000000 );
        return 17;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2, 0xFFu);
        return 17;
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v12 = 0;
        if ( _interlockedbittestandset(v2, 0x1Fu) )
          v12 = ExpWaitForSpinLockExclusiveAndAcquire(v2, CurrentIrql);
        v13 = *v2;
        v14 = (unsigned int)*v2;
        for ( LODWORD(v14) = v14 & 0xBFFFFFFF; (_DWORD)v14 != 0x80000000; LODWORD(v14) = v14 & 0xBFFFFFFF )
        {
          if ( (v13 & 0x40000000) == 0 )
            _InterlockedOr(v2, 0x40000000u);
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
          v13 = *v2;
          v14 = (unsigned int)*v2;
        }
        return CurrentIrql;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2, CurrentIrql);
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
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, 0xFFu);
        return 17;
      }
      _m_prefetchw(v2);
      v3 = *v2 & 0x7FFFFFFF;
      while ( 1 )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange(v2, v3 + 1, v3);
        if ( v4 == v3 )
          break;
        if ( v3 < 0 )
        {
          LOBYTE(a2) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v2, a2);
          return 17;
        }
      }
      return 17;
    }
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v6);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v2);
      v7 = *v2 & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v2, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v2, v6);
          return v6;
        }
      }
      return v6;
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v6);
      return v6;
    }
  }
}
