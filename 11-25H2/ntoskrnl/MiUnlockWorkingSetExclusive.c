/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x1402B7680
 * Callers:
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiMakeSecureExclusive @ 0x1402A3168 (MiMakeSecureExclusive.c)
 *     MiLocateOldestSecure @ 0x1402A32BC (MiLocateOldestSecure.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiMapWithLargePages @ 0x1403900B8 (MiMapWithLargePages.c)
 *     MiCleanWorkingSet @ 0x1403C3D9C (MiCleanWorkingSet.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     MiOutSwapWorkingSet @ 0x1403D958C (MiOutSwapWorkingSet.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MmStealTopLevelPage @ 0x14040B140 (MmStealTopLevelPage.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MmEnforceWorkingSetLimit @ 0x14047D754 (MmEnforceWorkingSetLimit.c)
 *     MiUnlockFaultWorkingSet @ 0x14048D360 (MiUnlockFaultWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x14048FC24 (MiDeleteCloneZombies.c)
 *     MiRotateComplete @ 0x1404A647C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404A6528 (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x1404B0C38 (MiCreateCloneChain.c)
 *     MiCloneCaptureVadCommit @ 0x1404B369C (MiCloneCaptureVadCommit.c)
 *     MiLockDownWorkingSet @ 0x1404CA1BC (MiLockDownWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D99E4 (MiLockWorkingSetForLargeMapping.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     MiClearCommitReleaseState @ 0x14065E11C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14065F194 (MmSetCommitReleaseEligibility.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x140661528 (MiFreedUnusedPfnPagesDpc.c)
 *     MiRemoveVadEvent @ 0x14066CC00 (MiRemoveVadEvent.c)
 *     MiSetTrimWhileAgingState @ 0x14066D36C (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x140671680 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406718EC (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402BAB40 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // r12
  int v4; // ecx
  _SLIST_ENTRY *v5; // r15
  _DWORD **v6; // r14
  _KPROCESS *Process; // rbx
  _SLIST_HEADER *v8; // rcx
  PSLIST_ENTRY v9; // rdi
  int v10; // ebp
  _DWORD *v11; // r14
  __int64 v12; // rdi
  _DWORD *v13; // rbx
  _SLIST_ENTRY *Next; // rbx
  unsigned __int64 *p_IdealProcessorAssignmentBlock; // rbp
  _SLIST_ENTRY *v16; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 184);
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v6 = (_DWORD **)&unk_140E38500;
  else
    v6 = (_DWORD **)(a1 + 192);
  if ( (v4 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v8 = (_SLIST_HEADER *)&Process[2].ActiveProcessors[4].StaticBitmap[1];
      if ( LOWORD(v8->Alignment) )
      {
        v9 = RtlpInterlockedFlushSList(v8);
        if ( v9 )
        {
          p_IdealProcessorAssignmentBlock = (unsigned __int64 *)&Process[1].IdealProcessorAssignmentBlock;
          do
          {
            v16 = v9 - 5;
            v9 = v9->Next;
            RtlAvlRemoveNode(p_IdealProcessorAssignmentBlock, (__int64)v16);
            v16->Next = v5;
            v5 = v16;
          }
          while ( v9 );
        }
      }
    }
  }
  v10 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(a1, 2LL);
  v11 = *v6;
  v12 = 3LL;
  v13 = v11 + 16;
  do
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v13 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
    v13 += 16;
    --v12;
  }
  while ( v12 );
  if ( (_BYTE)v3 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v11 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v11 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
    __writecr8(v3);
  }
  if ( v5 )
  {
    do
    {
      Next = v5->Next;
      ExFreePoolWithTag(v5, 0);
      v5 = Next;
    }
    while ( Next );
  }
  if ( !v10 && (*(_DWORD *)(a1 + 188) & 3) != 0 )
  {
    if ( (_BYTE)v3 == 17 )
    {
      MiLockWorkingSetSharedAtDpc(a1);
      MiUnlockWorkingSetShared(a1, 17LL);
    }
    else
    {
      MiLockWorkingSetShared(a1);
      MiUnlockWorkingSetShared(a1, (unsigned __int8)v3);
    }
  }
}
