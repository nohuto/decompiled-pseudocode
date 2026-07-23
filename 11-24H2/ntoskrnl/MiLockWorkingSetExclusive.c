/*
 * XREFs of MiLockWorkingSetExclusive @ 0x1403367E0
 * Callers:
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiDeleteRotateAndStopFaults @ 0x14026622C (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x140267008 (MiCreateCloneChain.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiOutSwapWorkingSet @ 0x1403C745C (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1403D6FD8 (MiCheckHoldFaultForHotPatch.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MiCleanWorkingSet @ 0x140462994 (MiCleanWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 *     MiRotateComplete @ 0x1404A0FB4 (MiRotateComplete.c)
 *     MiCloneCaptureVadCommit @ 0x1404A4B08 (MiCloneCaptureVadCommit.c)
 *     MiLockDownWorkingSet @ 0x1404C3800 (MiLockDownWorkingSet.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D1EB4 (MiLockWorkingSetForLargeMapping.c)
 *     MiClearCommitReleaseState @ 0x14066AE0C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MmEnableProcessSvm @ 0x14066BC8C (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14066BEA4 (MmSetCommitReleaseEligibility.c)
 *     MiSetTrimWhileAgingState @ 0x140679E58 (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x14067E020 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067E28C (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  volatile LONG **v1; // rbx
  volatile LONG *v2; // rbx
  __int64 i; // rdx
  KIRQL v4; // bp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edi

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = (volatile LONG **)&unk_140E38880;
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
        LOBYTE(i) = -1;
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(v5, i);
      }
      for ( i = *(unsigned int *)v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v5 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v5, 0x40000000u);
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      LOBYTE(i) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, i);
    }
    v5 += 16;
    --v6;
  }
  while ( v6 );
  return v4;
}
