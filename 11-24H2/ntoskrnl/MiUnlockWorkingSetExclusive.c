/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140218550
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiOutSwapWorkingSet @ 0x1402345FC (MiOutSwapWorkingSet.c)
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MmStealTopLevelPage @ 0x1403116F0 (MmStealTopLevelPage.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiDeleteRotateAndStopFaults @ 0x1403CC068 (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x1403CCE38 (MiCreateCloneChain.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 *     MiCleanWorkingSet @ 0x140469A70 (MiCleanWorkingSet.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     MiUnlockFaultWorkingSet @ 0x14048CA70 (MiUnlockFaultWorkingSet.c)
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
 *     MiFreedUnusedPfnPagesDpc @ 0x14066D068 (MiFreedUnusedPfnPagesDpc.c)
 *     MiSetTrimWhileAgingState @ 0x140678C78 (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x14067CE94 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067D100 (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // r12
  int v4; // ecx
  _SLIST_ENTRY *v5; // r15
  _DWORD **v6; // r14
  _KPROCESS *Process; // rbx
  union _SLIST_HEADER *v8; // rcx
  PSLIST_ENTRY v9; // rdi
  int v10; // ebp
  _DWORD *v11; // r14
  __int64 v12; // rdi
  _DWORD *v13; // rbx
  _SLIST_ENTRY *Next; // rbx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **p_IdealProcessorAssignmentBlock; // rbp
  struct _SLIST_ENTRY *v16; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 184);
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v6 = (_DWORD **)&unk_140E38740;
  else
    v6 = (_DWORD **)(a1 + 192);
  if ( (v4 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v8 = (union _SLIST_HEADER *)&Process[2].ActiveProcessors[4].StaticBitmap[1];
      if ( LOWORD(v8->Alignment) )
      {
        v9 = RtlpInterlockedFlushSList(v8);
        if ( v9 )
        {
          p_IdealProcessorAssignmentBlock = &Process[1].IdealProcessorAssignmentBlock;
          do
          {
            v16 = v9 - 5;
            v9 = v9->Next;
            RtlAvlRemoveNode(p_IdealProcessorAssignmentBlock, v16);
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
