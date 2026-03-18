/*
 * XREFs of MiLockWorkingSetExclusive @ 0x140211FE0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiMakeSecureExclusive @ 0x1402A3168 (MiMakeSecureExclusive.c)
 *     MiLocateOldestSecure @ 0x1402A32BC (MiLocateOldestSecure.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiCleanWorkingSet @ 0x1403C3D9C (MiCleanWorkingSet.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MiOutSwapWorkingSet @ 0x1403D958C (MiOutSwapWorkingSet.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteCloneZombies @ 0x14048FC24 (MiDeleteCloneZombies.c)
 *     MiRotateComplete @ 0x1404A647C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404A6528 (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x1404B0C38 (MiCreateCloneChain.c)
 *     MiCloneCaptureVadCommit @ 0x1404B369C (MiCloneCaptureVadCommit.c)
 *     MiLockDownWorkingSet @ 0x1404CA1BC (MiLockDownWorkingSet.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404CC278 (MiCheckHoldFaultForHotPatch.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D99E4 (MiLockWorkingSetForLargeMapping.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     MiClearCommitReleaseState @ 0x14065E11C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14065F194 (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x14066CC00 (MiRemoveVadEvent.c)
 *     MiSetTrimWhileAgingState @ 0x14066D36C (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x140671680 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406718EC (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
    v1 = (volatile LONG **)&unk_140E38500;
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
