/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14020D480
 * Callers:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiOutSwapWorkingSet @ 0x1402345FC (MiOutSwapWorkingSet.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiRelockFaultState @ 0x1403967A0 (MiRelockFaultState.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403CC068 (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x1403CCE38 (MiCreateCloneChain.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403E932C (MiCheckHoldFaultForHotPatch.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 *     MiCleanWorkingSet @ 0x140469A70 (MiCleanWorkingSet.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     MiDeleteCloneZombies @ 0x14048F544 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 *     MiRotateComplete @ 0x1404A62D4 (MiRotateComplete.c)
 *     MiCloneCaptureVadCommit @ 0x1404AA908 (MiCloneCaptureVadCommit.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D8A64 (MiLockWorkingSetForLargeMapping.c)
 *     MiClearCommitReleaseState @ 0x140669C3C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MmEnableProcessSvm @ 0x14066AABC (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14066ACD4 (MmSetCommitReleaseEligibility.c)
 *     MiSetTrimWhileAgingState @ 0x140678C78 (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x14067CE94 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067D100 (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  volatile LONG **v1; // rbx
  volatile LONG *v2; // rbx
  __int64 v3; // rdx
  KIRQL v4; // bp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = (volatile LONG **)&unk_140E38740;
  else
    v1 = (volatile LONG **)(a1 + 192);
  v2 = *v1;
  v4 = ExAcquireSpinLockExclusive(v2);
  v5 = v2 + 16;
  v6 = 3LL;
  do
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = 0;
      if ( _interlockedbittestandset(v5, 0x1Fu) )
      {
        LOBYTE(v3) = -1;
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(v5, v3);
      }
      v3 = *(unsigned int *)v5;
      v8 = v3 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v3 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v3 & 0x40000000) == 0 )
            _InterlockedOr(v5, 0x40000000u);
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
          v3 = *(unsigned int *)v5;
        }
        while ( (*v5 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      LOBYTE(v3) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, v3);
    }
    v5 += 16;
    --v6;
  }
  while ( v6 );
  return v4;
}
