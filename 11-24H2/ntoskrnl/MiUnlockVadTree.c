/*
 * XREFs of MiUnlockVadTree @ 0x140291980
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiStoreGetVadForAddress @ 0x1402F5754 (MiStoreGetVadForAddress.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiFindActualFaultingPte @ 0x14030CE60 (MiFindActualFaultingPte.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x140345020 (MiReturnLockedVadOrNextVa.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x140349970 (MiImagePageOk.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x14049E378 (MiCanGrantExecute.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockVadTree(char a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  volatile signed __int32 *v4; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = a1 & 1;
  v3 = a2;
  v4 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (a1 & 2) != 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      if ( a2 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
          || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
        {
          *v4 = 0;
        }
        else
        {
          result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
        }
        goto LABEL_8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
LABEL_13:
        *v4 = 0;
        return result;
      }
    }
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    goto LABEL_13;
  }
  if ( (a1 & 1) != 0 || a2 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      result = (unsigned int)PopHibernateInProgress;
      if ( !PopHibernateInProgress )
        return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
    _InterlockedAnd(v4, 0xBFFFFFFF);
    _InterlockedDecrement(v4);
    return result;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v4, 0xBFFFFFFF);
    _InterlockedDecrement(v4);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
  }
LABEL_8:
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
  return result;
}
