/*
 * XREFs of MiLockVadTree @ 0x140240750
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiStoreGetVadForAddress @ 0x1402F5754 (MiStoreGetVadForAddress.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x140344CB0 (MiVadSupportsCombine.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x140349970 (MiImagePageOk.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x14049E378 (MiCanGrantExecute.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockVadTree(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _KPROCESS *Process; // rdx
  volatile signed __int32 *v5; // rbx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int8 v9; // di
  unsigned int v10; // edi
  __int64 v11; // rcx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned __int8 CurrentIrql; // si
  unsigned int v15; // edi
  volatile signed __int32 v16; // eax
  __int64 v17; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = (volatile signed __int32 *)&Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v10 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
        {
          LOBYTE(Process) = -1;
          v10 = ExpWaitForSpinLockExclusiveAndAcquire(v5, Process);
        }
        v11 = *(unsigned int *)v5;
        if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
          return 17;
        do
        {
          if ( (v11 & 0x40000000) == 0 )
            _InterlockedOr(v5, 0x40000000u);
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, Process, a3, a4) )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
          v11 = *(unsigned int *)v5;
        }
        while ( (*v5 & 0xBFFFFFFF) != 0x80000000 );
        return 17;
      }
      else
      {
        LOBYTE(Process) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, Process);
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
        v15 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
          v15 = ExpWaitForSpinLockExclusiveAndAcquire(v5, CurrentIrql);
        v16 = *v5;
        v17 = *(unsigned int *)v5;
        for ( LODWORD(v17) = v17 & 0xBFFFFFFF; (_DWORD)v17 != 0x80000000; LODWORD(v17) = v17 & 0xBFFFFFFF )
        {
          if ( (v16 & 0x40000000) == 0 )
            _InterlockedOr(v5, 0x40000000u);
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, Process, a3, a4) )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
          v16 = *v5;
          v17 = *(unsigned int *)v5;
        }
        return CurrentIrql;
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, CurrentIrql);
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
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, Process);
        return 17;
      }
      _m_prefetchw((const void *)v5);
      v7 = *v5 & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v5, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
        {
          LOBYTE(Process) = -1;
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v5, (__int64)Process, a3, a4);
          return 17;
        }
      }
      return 17;
    }
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw((const void *)v5);
      v12 = *v5 & 0x7FFFFFFF;
      while ( 1 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v5, v12 + 1, v12);
        if ( v13 == v12 )
          break;
        if ( v12 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v5, v9, a3, a4);
          return v9;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, v9);
    }
    return v9;
  }
}
