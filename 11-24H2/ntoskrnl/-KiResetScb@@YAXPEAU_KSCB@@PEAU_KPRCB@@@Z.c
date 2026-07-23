/*
 * XREFs of ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14045D264
 * Callers:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045C86C (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14045CFB4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402D716C (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiResetScb(struct _KSCB *a1, struct _KPRCB *a2)
{
  unsigned __int16 v2; // ax
  struct _KSCB *v4; // rbx
  unsigned int Rank; // eax
  struct _KPRCB *v6; // r8
  unsigned __int64 Root; // rax
  _KSCB *Parent; // rax

  v2 = a1->PrcbLockFlags & 0xFFF1;
  a1->GenerationCycles = 0LL;
  v4 = a1;
  a1->RankCycleTarget = 0LL;
  a1->LastReportedCycles = 0LL;
  a1->ReadyTime = 0LL;
  a1->Rank = 0;
  a1->PrcbLockFlags = v2;
  if ( (v2 & 0x40) != 0 )
  {
    a1->OwnerShareRank = 0;
  }
  else if ( a1->ShareRank )
  {
    *a1->ShareRank = 0;
  }
  if ( a1->ReadySummary )
  {
    if ( !a1->Rank )
    {
      do
      {
        Parent = a1->Parent;
        if ( !Parent )
          break;
        a1 = a1->Parent;
      }
      while ( !Parent->Rank );
    }
    Rank = a1->Rank;
    v6 = 0LL;
    if ( !Rank )
      v6 = a2;
    KiMoveScbThreadsToNewReadylist(v4, (struct _KSCB *)((unsigned __int64)a1 & -(__int64)(Rank != 0)), v6, 0LL);
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
    {
      Root = (unsigned __int64)v4->ChildScbQueue.Root;
      if ( (*(_BYTE *)&v4->ChildScbQueue.0 & 1) != 0 )
      {
        if ( !Root )
          goto LABEL_13;
        Root ^= (unsigned __int64)&v4->ChildScbQueue;
      }
      if ( !Root )
LABEL_13:
        KiRemoveSchedulingGroupQueue(a2, v4, 0);
    }
  }
}
