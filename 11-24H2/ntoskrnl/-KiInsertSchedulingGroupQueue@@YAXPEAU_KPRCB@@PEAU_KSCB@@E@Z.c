/*
 * XREFs of ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030E824
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x14030CC70 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x14030D204 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x14030E7C4 (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 */

void __fastcall KiInsertSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _KSCB *Parent; // r10
  _RTL_RB_TREE *p_ChildScbQueue; // r10
  unsigned __int64 Root; // rdx
  bool v8; // r8
  unsigned int Rank; // r11d
  int v10; // eax
  unsigned int ReadySummary; // eax
  unsigned int v12; // r8d
  int v13; // r9d
  int v14; // eax
  unsigned __int64 v15; // rax

  Parent = a2->Parent;
  a2->PrcbLockFlags |= 1u;
  if ( Parent )
  {
    p_ChildScbQueue = &Parent->ChildScbQueue;
  }
  else
  {
    p_ChildScbQueue = &a1->ScbQueue;
    if ( !a1->ScbQueue.Root && !a1->ReadyThreadCount )
      _InterlockedOr64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, a1->GroupSetMember);
  }
  Root = (unsigned __int64)p_ChildScbQueue->Root;
  if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 && Root )
    Root ^= (unsigned __int64)p_ChildScbQueue;
  v8 = 0;
  if ( Root )
  {
    Rank = a2->Rank;
    while ( 1 )
    {
      v10 = Rank - *(_DWORD *)(Root + 36);
      if ( Rank != *(_DWORD *)(Root + 36) )
        goto LABEL_16;
      ReadySummary = a2->ReadySummary;
      if ( (_WORD)ReadySummary )
        break;
      if ( !Rank && a2->GenerationCycles <= *(_QWORD *)(Root - 88) )
      {
LABEL_24:
        v15 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_28;
          v15 ^= Root;
        }
        if ( !v15 )
        {
LABEL_28:
          v8 = 0;
          goto LABEL_30;
        }
        goto LABEL_21;
      }
LABEL_17:
      v15 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&p_ChildScbQueue->0 & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_29;
        v15 ^= Root;
      }
      if ( !v15 )
      {
LABEL_29:
        v8 = 1;
        goto LABEL_30;
      }
LABEL_21:
      Root = v15;
    }
    v12 = *(unsigned __int16 *)(Root + 32);
    _BitScanReverse((unsigned int *)&v13, ReadySummary);
    v14 = 0;
    if ( (_WORD)v12 )
      _BitScanReverse((unsigned int *)&v14, v12);
    v10 = v14 - v13;
LABEL_16:
    if ( v10 < 0 )
      goto LABEL_24;
    goto LABEL_17;
  }
LABEL_30:
  RtlRbInsertNodeEx((__int64 *)p_ChildScbQueue, Root, v8, (unsigned __int64)&a2->QueueNode);
  if ( a3 )
    a2->InsertTime = MEMORY[0xFFFFF78000000008];
}
