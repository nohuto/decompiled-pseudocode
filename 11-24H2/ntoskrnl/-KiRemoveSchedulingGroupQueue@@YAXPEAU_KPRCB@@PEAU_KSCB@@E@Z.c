/*
 * XREFs of ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D9DF0 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14045D264 (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 */

void __fastcall KiRemoveSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _RTL_RB_TREE *p_ScbQueue; // rsi
  _KSCB **p_Parent; // r14
  _KSCB *Parent; // rax
  _RTL_RB_TREE *p_ChildScbQueue; // rdi
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
    if ( p_ChildScbQueue == p_ScbQueue && !p_ScbQueue->Root && !a1->ReadyThreadCount )
      _InterlockedAnd64(
        (volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues,
        ~a1->GroupSetMember);
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
