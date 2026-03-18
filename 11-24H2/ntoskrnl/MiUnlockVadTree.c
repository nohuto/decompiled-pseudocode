/*
 * XREFs of MiUnlockVadTree @ 0x140261370
 * Callers:
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiSetVadFlags @ 0x1402B8D5C (MiSetVadFlags.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x1402E8330 (MiImagePageOk.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReturnLockedVadOrNextVa @ 0x1402FC120 (MiReturnLockedVadOrNextVa.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiStoreGetVadForAddress @ 0x14039788C (MiStoreGetVadForAddress.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
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
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
