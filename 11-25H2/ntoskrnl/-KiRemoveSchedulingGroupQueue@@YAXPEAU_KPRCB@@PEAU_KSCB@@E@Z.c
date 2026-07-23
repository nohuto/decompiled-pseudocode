/*
 * XREFs of ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968
 * Callers:
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402F6460 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140351E34 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiRemoveThreadFromScbQueue @ 0x140352968 (KiRemoveThreadFromScbQueue.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiRemoveSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _RTL_RB_TREE *p_ScbQueue; // rdi
  _KSCB **p_Parent; // r14
  _KSCB *Parent; // rax
  _RTL_RB_TREE *p_ChildScbQueue; // rsi
  __int64 v9; // rcx
  unsigned __int64 Root; // rax

  p_ScbQueue = &a1->ScbQueue;
  do
  {
    p_Parent = &a2->Parent;
    Parent = a2->Parent;
    p_ChildScbQueue = &Parent->ChildScbQueue;
    if ( !Parent )
      p_ChildScbQueue = p_ScbQueue;
    if ( a3 )
      a2->ReadyTime += MEMORY[0xFFFFF78000000008] - a2->InsertTime;
    a2->PrcbLockFlags &= ~1u;
    RtlRbRemoveNode(p_ChildScbQueue, &a2->QueueNode);
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v9)
      && p_ChildScbQueue == p_ScbQueue
      && !p_ScbQueue->Root
      && !a1->ReadyThreadCount )
    {
      _InterlockedAnd64(
        (volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues,
        ~a1->GroupSetMember);
    }
    a2 = *p_Parent;
    if ( !*p_Parent || (*(_BYTE *)&a2->0 & 1) == 0 )
      break;
    Root = (unsigned __int64)a2->ChildScbQueue.Root;
    if ( (*(_BYTE *)&a2->ChildScbQueue.0 & 1) == 0 )
      goto LABEL_15;
    if ( Root )
    {
      Root ^= (unsigned __int64)&a2->ChildScbQueue;
LABEL_15:
      if ( Root )
        return;
    }
  }
  while ( !a2->ReadySummary );
}
