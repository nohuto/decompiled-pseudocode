/*
 * XREFs of ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140430568
 * Callers:
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140351E34 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140430508 (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _KSCB *Parent; // rbx
  _RTL_RB_TREE *p_ChildScbQueue; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v9; // r8
  unsigned int Rank; // r10d
  int v11; // eax
  unsigned int ReadySummary; // eax
  unsigned int v13; // r8d
  int v14; // r9d
  int v15; // eax
  _RTL_BALANCED_NODE *v16; // rax

  Parent = a2->Parent;
  a2->PrcbLockFlags |= 1u;
  if ( Parent )
  {
    p_ChildScbQueue = &Parent->ChildScbQueue;
  }
  else
  {
    p_ChildScbQueue = &a1->ScbQueue;
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(a1)
      && !p_ChildScbQueue->Root
      && !a1->ReadyThreadCount )
    {
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
    }
  }
  Root = (unsigned __int64)p_ChildScbQueue->Root;
  if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 && Root )
    Root ^= (unsigned __int64)p_ChildScbQueue;
  v9 = 0;
  if ( Root )
  {
    Rank = a2->Rank;
    while ( 1 )
    {
      v11 = Rank - *(_DWORD *)(Root + 36);
      if ( Rank != *(_DWORD *)(Root + 36) )
        goto LABEL_14;
      ReadySummary = a2->ReadySummary;
      if ( (_WORD)ReadySummary )
        break;
      if ( Rank || a2->GenerationCycles > *(_QWORD *)(Root - 88) )
      {
LABEL_20:
        v16 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_22;
          v16 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v16);
        }
        if ( !v16 )
        {
LABEL_22:
          v9 = 1;
          goto LABEL_23;
        }
        goto LABEL_19;
      }
LABEL_15:
      v16 = *(_RTL_BALANCED_NODE **)Root;
      if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_32;
        v16 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v16);
      }
      if ( !v16 )
      {
LABEL_32:
        v9 = 0;
        goto LABEL_23;
      }
LABEL_19:
      Root = (unsigned __int64)v16;
    }
    v13 = *(unsigned __int16 *)(Root + 32);
    _BitScanReverse((unsigned int *)&v14, ReadySummary);
    v15 = 0;
    if ( (_WORD)v13 )
      _BitScanReverse((unsigned int *)&v15, v13);
    v11 = v15 - v14;
LABEL_14:
    if ( v11 >= 0 )
      goto LABEL_20;
    goto LABEL_15;
  }
LABEL_23:
  RtlRbInsertNodeEx(p_ChildScbQueue, (PRTL_BALANCED_NODE)Root, v9, &a2->QueueNode);
  if ( a3 )
    a2->InsertTime = MEMORY[0xFFFFF78000000008];
}
