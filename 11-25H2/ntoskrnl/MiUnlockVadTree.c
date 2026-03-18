/*
 * XREFs of MiUnlockVadTree @ 0x1402A8690
 * Callers:
 *     MiStoreGetVadForAddress @ 0x140207B58 (MiStoreGetVadForAddress.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiFindActualFaultingPte @ 0x140246570 (MiFindActualFaultingPte.c)
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
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiImagePageOk @ 0x14033B990 (MiImagePageOk.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MiComputeMaximumFaultCluster @ 0x1403E1520 (MiComputeMaximumFaultCluster.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiProcessCommitIntact @ 0x1403FA380 (MiProcessCommitIntact.c)
 *     MiCanGrantExecute @ 0x1404A3608 (MiCanGrantExecute.c)
 *     MiLeapPrefetch @ 0x1404C0B80 (MiLeapPrefetch.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUnlockVadTree(char a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  volatile signed __int32 *v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

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
        return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr, v4);
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
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr, v4);
  }
LABEL_8:
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
  return result;
}
