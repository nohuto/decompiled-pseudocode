/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140243400
 * Callers:
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiDeleteRotateAndStopFaults @ 0x14026622C (MiDeleteRotateAndStopFaults.c)
 *     MiCreateCloneChain @ 0x140267008 (MiCreateCloneChain.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiMapWithLargePages @ 0x14026BB00 (MiMapWithLargePages.c)
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiDuplicateCloneLeaf @ 0x14038FAFC (MiDuplicateCloneLeaf.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiOutSwapWorkingSet @ 0x1403C745C (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1403C826C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MmStealTopLevelPage @ 0x1403F4960 (MmStealTopLevelPage.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MiCleanWorkingSet @ 0x140462994 (MiCleanWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     MiUnlockFaultWorkingSet @ 0x140487790 (MiUnlockFaultWorkingSet.c)
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
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 *     MiSetTrimWhileAgingState @ 0x140679E58 (MiSetTrimWhileAgingState.c)
 *     MiBeginHoldingDirtyFaults @ 0x14067E020 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14067E28C (MiFinishHoldingDirtyFaults.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // r14
  __int64 v15; // rdi
  _DWORD *v16; // rbx
  _SLIST_ENTRY *Next; // rbx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **p_IdealProcessorAssignmentBlock; // rbp
  _SLIST_ENTRY *v19; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 184);
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v6 = (_DWORD **)&unk_140E38880;
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
          p_IdealProcessorAssignmentBlock = &Process[1].IdealProcessorAssignmentBlock;
          do
          {
            v19 = v9 - 5;
            v9 = v9->Next;
            RtlAvlRemoveNode(p_IdealProcessorAssignmentBlock, v19);
            v19->Next = v5;
            v5 = v19;
          }
          while ( v9 );
        }
      }
    }
  }
  v10 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(a1, 2uLL);
  v14 = *v6;
  v15 = 3LL;
  v16 = v14 + 16;
  do
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v16 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    v16 += 16;
    --v15;
  }
  while ( v15 );
  if ( (_BYTE)v3 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v14 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v14 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
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
      MiUnlockWorkingSetShared(a1, 0x11u);
    }
    else
    {
      MiLockWorkingSetShared(a1, v11, v12, v13);
      MiUnlockWorkingSetShared(a1, v3);
    }
  }
}
