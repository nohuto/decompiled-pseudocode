/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402D716C (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D8870 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_LIST_ENTRY *__fastcall KiTransitionSchedulingGroupGeneration(
        struct _KPRCB *a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        struct _LIST_ENTRY **a5)
{
  unsigned __int64 GenerationTarget; // rdx
  unsigned int v6; // r12d
  int v8; // edi
  bool v9; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG LowPart; // eax
  _KTHREAD *NextThread; // r13
  char v13; // r14
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v15; // rsi
  _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Flink; // r15
  char v18; // cl
  struct _LIST_ENTRY **p_Blink; // rdi
  __int16 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _LIST_ENTRY *v23; // rcx
  char *v24; // rbx
  struct _LIST_ENTRY *v25; // rax
  unsigned __int64 v26; // rcx
  ULONG_PTR v27; // rcx
  char v28; // r8
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  volatile signed __int32 *v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  struct _KSCB *v35; // rbx
  unsigned __int16 PrcbLockFlags; // ax
  unsigned __int64 j; // rax
  unsigned __int64 p_QueueNode; // rcx
  unsigned __int64 i; // rcx
  int v40; // ecx
  unsigned int ReadySummary; // ecx
  unsigned int v42; // edx
  int v43; // r8d
  int v44; // ecx
  _KPRIORITY_STATE *PriorityState; // rsi
  unsigned __int8 AllFields; // bl
  char v47; // cl
  unsigned __int8 v48; // cl
  volatile signed __int32 *SchedulerAssist; // rdx
  int v50; // ecx
  unsigned __int32 v51; // eax
  unsigned int v52; // ecx
  __int64 Number; // rcx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int v56; // [rsp+40h] [rbp-68h]
  char *v57; // [rsp+48h] [rbp-60h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-58h] BYREF
  __int64 v59; // [rsp+58h] [rbp-50h]
  int Flink_high; // [rsp+C0h] [rbp+18h]

  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  PerformanceCounter.QuadPart = 0LL;
  v56 = 1;
  if ( a3 > GenerationTarget )
  {
    v6 = (a3 + (unsigned int)KiGenerationTicks - GenerationTarget - 1) / (unsigned int)KiGenerationTicks + 1;
    v56 = v6;
  }
  v8 = KiGenerationEndTick * KeMaximumIncrement;
  v9 = KiClockTimerPerCpuTickScheduling == 0;
  a1->GenerationTarget = KiGenerationEndTick;
  if ( !v9 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    if ( KiClockTimerReducePreciseTimeQueries )
      LowPart = RtlGetInterruptTimePrecise(&PerformanceCounter).LowPart;
    else
      LowPart = 0;
    KiSetClockTimer((_DWORD)a1, LowPart, v8, KeMaximumIncrement, 4, 1, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( a1->ScbQueue.Root )
  {
    a1->ScbQueue.Root = 0LL;
    a1->ScbQueue.Min = 0LL;
    if ( !a1->ReadyThreadCount )
      _InterlockedAnd64(
        (volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues,
        ~a1->GroupSetMember);
  }
  NextThread = a1->NextThread;
  v13 = 0;
  if ( !NextThread )
    NextThread = a1->CurrentThread;
  SchedulingGroup = NextThread->SchedulingGroup;
  if ( SchedulingGroup )
    v15 = (char *)SchedulingGroup + a1->ScbOffset;
  else
    v15 = 0LL;
  result = &a1->ScbList;
  v57 = v15;
  Flink = a1->ScbList.Flink;
  if ( Flink == &a1->ScbList )
  {
LABEL_87:
    if ( a1->GroupSchedulingOverQuota )
    {
      Number = a1->Number;
      a1->GroupSchedulingOverQuota = 0;
      v54 = *((_DWORD *)KiGlobalState + Number);
      result = (_LIST_ENTRY *)KiGroupSchedulingOverQuotaMask[1];
      v55 = v54 >> 6;
      if ( KiGroupSchedulingOverQuotaMask[1] > (unsigned int)v55 )
        _InterlockedAnd64(&qword_140E0ADA8[v55], ~(1LL << (v54 & 0x3F)));
    }
    return result;
  }
  v18 = v6;
  v59 = v6;
  do
  {
    p_Blink = &Flink[-5].Blink;
    v20 = (__int64)Flink[2].Blink & 2;
    Flink_high = HIDWORD(Flink[3].Flink);
    if ( v56 >= 0x40 )
      v21 = 0LL;
    else
      v21 = (_QWORD)p_Blink[6] << v18;
    v22 = v21 | 1;
    if ( ((_BYTE)p_Blink[14] & 4) == 0 )
      v22 = v21;
    p_Blink[6] = (struct _LIST_ENTRY *)v22;
    v23 = p_Blink[5];
    v24 = (char *)p_Blink - a1->ScbOffset;
    v25 = *p_Blink;
    p_Blink[5] = *p_Blink;
    v26 = (char *)v23 - (char *)v25;
    _InterlockedAdd64((volatile signed __int64 *)v24 + 6, v26);
    if ( *((__int64 *)v24 + 4) > 0
      && (__int64)(v26 + _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 4, v26)) <= 0 )
    {
      v27 = _InterlockedExchange64((volatile __int64 *)v24 + 9, 0LL);
      if ( v27 )
        KiInsertQueueDpc(v27, 0LL, 0LL, 0LL, 0);
    }
    v28 = a4;
    if ( !a4 )
    {
      if ( a1->ClockOwner )
      {
        if ( ((_BYTE)p_Blink[14] & 0x10) == 0 )
        {
          v29 = *((_QWORD *)v24 + 5);
          v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 6, v29) + v29;
          v31 = *((_QWORD *)v24 + 5);
          if ( v30 > v31 )
            _InterlockedExchange64((volatile __int64 *)v24 + 6, v31);
        }
      }
    }
    if ( p_Blink[1] != p_Blink[2] )
    {
      p_Blink[4] = (struct _LIST_ENTRY *)((unsigned int)KiGroupSchedulingNumerator * ((unsigned __int64)*p_Blink >> 10)
                                        + (((unsigned __int64)p_Blink[4]
                                          * (unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10));
      v28 = a4;
    }
    v32 = (volatile signed __int32 *)p_Blink[16];
    *p_Blink = 0LL;
    p_Blink[5] = 0LL;
    if ( v32 )
    {
      v33 = ((*((unsigned __int16 *)p_Blink + 56) >> 3) & 1) - *((_DWORD *)p_Blink + 31);
      if ( (int)(v33 + _InterlockedExchangeAdd(v32, v33)) < 0 )
        LODWORD(p_Blink[16]->Flink) = 0;
    }
    v34 = *((unsigned __int16 *)p_Blink + 56);
    p_Blink[3] = 0LL;
    *((_WORD *)p_Blink + 56) = v34 & 0xFFFC;
    *((_DWORD *)p_Blink + 31) = (v34 >> 3) & 1;
    *(_OWORD *)(p_Blink + 11) = 0LL;
    p_Blink[13] = 0LL;
    p_Blink[50] = 0LL;
    p_Blink[51] = 0LL;
    if ( !*((_DWORD *)p_Blink + 31) )
    {
      *((_WORD *)p_Blink + 56) &= ~4u;
      if ( p_Blink == (struct _LIST_ENTRY **)v15 )
      {
        PriorityState = a1->PriorityState;
        AllFields = PriorityState->AllFields;
        v47 = (NextThread->Header.Size & 4) != 0
            ? AllFields ^ KiQueryEffectivePriorityThread(NextThread, a1)
            : NextThread->Priority ^ AllFields;
        v48 = AllFields ^ v47 & 0x7F;
        PriorityState->AllFields = v48;
        SchedulerAssist = (volatile signed __int32 *)a1->SchedulerAssist;
        if ( SchedulerAssist )
        {
          v50 = v48 & 0x7F;
          if ( NextThread == a1->IdleThread )
            v50 = KiVpThreadSystemWorkPriority;
          v51 = (unsigned __int32)*SchedulerAssist >> 8;
          if ( v50 != (unsigned __int8)v51 )
          {
            if ( v50 <= (unsigned __int8)v51 )
              v52 = (v50 << 8) - ((unsigned __int8)v51 << 8);
            else
              v52 = (v50 - (unsigned __int8)v51) << 8;
            _InterlockedAdd(SchedulerAssist, v52);
          }
        }
      }
LABEL_80:
      KiMoveScbThreadsToNewReadylist((struct _KSCB *)&Flink[-5].Blink, 0LL, a1, 0LL);
      goto LABEL_81;
    }
    if ( v28 )
      goto LABEL_80;
    if ( *((_WORD *)p_Blink + 60) )
    {
      v35 = (struct _KSCB *)&Flink[-5].Blink;
      while ( 1 )
      {
        PrcbLockFlags = v35->PrcbLockFlags;
        if ( (PrcbLockFlags & 2) != 0 )
        {
LABEL_67:
          v13 = 1;
          break;
        }
        if ( (PrcbLockFlags & 1) == 0 )
          goto LABEL_65;
        j = (unsigned __int64)v35->QueueNode.Children[0];
        p_QueueNode = (unsigned __int64)&v35->QueueNode;
        if ( j )
        {
          for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
            j = i;
        }
        else
        {
          for ( j = v35->QueueNode.ParentValue & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(j + 8) == p_QueueNode )
              break;
            p_QueueNode = j;
          }
        }
        if ( !j )
          goto LABEL_66;
        v40 = v35->Rank - *(_DWORD *)(j + 36);
        if ( !v40 )
        {
          ReadySummary = v35->ReadySummary;
          if ( !(_WORD)ReadySummary )
          {
            if ( v35->Rank || v35->GenerationCycles > *(_QWORD *)(j - 88) )
              goto LABEL_66;
LABEL_64:
            KiRemoveSchedulingGroupQueue(a1, v35, 0);
LABEL_65:
            KiInsertSchedulingGroupQueue(a1, v35, 0);
            goto LABEL_66;
          }
          v42 = *(unsigned __int16 *)(j + 32);
          _BitScanReverse((unsigned int *)&v43, ReadySummary);
          v44 = 0;
          if ( (_WORD)v42 )
            _BitScanReverse((unsigned int *)&v44, v42);
          v40 = v44 - v43;
        }
        if ( v40 < 0 )
          goto LABEL_64;
LABEL_66:
        v35 = v35->Parent;
        if ( !v35 )
          goto LABEL_67;
      }
    }
LABEL_81:
    if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0
      && (Flink_high != *((_DWORD *)p_Blink + 31) || (v20 != 0) != ((*((_WORD *)p_Blink + 56) >> 1) & 1)) )
    {
      *((_WORD *)p_Blink + 56) |= 0x100u;
      p_Blink[54] = *a5;
      *a5 = (struct _LIST_ENTRY *)(p_Blink + 54);
    }
    Flink = Flink->Flink;
    result = &a1->ScbList;
    v15 = v57;
    v18 = v59;
  }
  while ( Flink != &a1->ScbList );
  if ( !v13 )
    goto LABEL_87;
  return result;
}
