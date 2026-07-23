/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140275710
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x1402F6DA4 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403E0820 (KeInterlockedClearProcessorAffinityEx.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140430508 (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiTransitionSchedulingGroupGeneration(
        struct _KPRCB *a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        struct _LIST_ENTRY **a5)
{
  unsigned __int64 GenerationTarget; // rdx
  unsigned int v6; // r14d
  char v7; // r15
  struct _KPRCB *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // di
  LARGE_INTEGER InterruptTimePrecise; // rax
  _KTHREAD *NextThread; // r11
  __int64 result; // rax
  __int64 v16; // r10
  _LIST_ENTRY *p_ScbList; // r13
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rsi
  int Flink_high; // r9d
  __int16 v21; // bp
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _LIST_ENTRY *v24; // rcx
  char *v25; // rbx
  struct _LIST_ENTRY *v26; // rax
  unsigned __int64 v27; // rcx
  volatile signed __int32 *Blink; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int Flink_low; // ebx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 Number; // rdx
  unsigned __int8 *PriorityState; // r14
  unsigned __int8 v37; // bl
  unsigned __int8 v38; // dl
  void *SchedulerAssist; // rcx
  __int64 v40; // rdx
  unsigned int v41; // eax
  char *v42; // r12
  char *v43; // r15
  char *v44; // r14
  __int64 v45; // rdx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // r10
  char v49; // al
  char EffectivePriorityThread; // al
  struct _KDPC *v51; // rcx
  int v52; // [rsp+40h] [rbp-88h]
  unsigned int v53; // [rsp+44h] [rbp-84h] BYREF
  _KTHREAD *v54; // [rsp+48h] [rbp-80h]
  unsigned int v55; // [rsp+50h] [rbp-78h]
  __int64 v56; // [rsp+58h] [rbp-70h]
  __int64 v57; // [rsp+60h] [rbp-68h]
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-60h] BYREF
  _LIST_ENTRY *v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  char v62; // [rsp+D8h] [rbp+10h]

  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  PerformanceCounter.QuadPart = 0LL;
  v7 = a4;
  v57 = 1LL;
  v8 = a1;
  if ( a3 > GenerationTarget )
  {
    v6 = (a3 + (unsigned int)KiGenerationTicks - GenerationTarget - 1) / (unsigned int)KiGenerationTicks + 1;
    v57 = v6;
  }
  v9 = KiGenerationEndTick;
  v10 = KiGenerationEndTick * KeMaximumIncrement;
  v11 = KiClockTimerPerCpuTickScheduling == 0;
  v8->GenerationTarget = KiGenerationEndTick;
  if ( !v11 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
    KiSetClockTimer((__int64)v8, InterruptTimePrecise, v10, KeMaximumIncrement, 4, 1, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v9) )
  {
    if ( v8->ScbQueue.Root )
    {
      v8->ScbQueue.Root = 0LL;
      v8->ScbQueue.Min = 0LL;
      if ( !v8->ReadyThreadCount )
        _InterlockedAnd64(
          (volatile signed __int64 *)&v8->SchedulerSubNode->StealableLocalReadyQueues,
          ~v8->GroupSetMember);
    }
  }
  else
  {
    v8->ScbQueue.Root = 0LL;
    v8->ScbQueue.Min = 0LL;
  }
  NextThread = v8->NextThread;
  v62 = 0;
  v54 = NextThread;
  if ( !NextThread )
  {
    NextThread = v8->CurrentThread;
    v54 = NextThread;
  }
  result = (__int64)NextThread->SchedulingGroup;
  if ( result )
    v16 = result + v8->ScbOffset;
  else
    v16 = 0LL;
  p_ScbList = &v8->ScbList;
  v56 = v16;
  Flink = v8->ScbList.Flink;
  v59 = &v8->ScbList;
  if ( Flink != &v8->ScbList )
  {
    LOBYTE(result) = v6;
    v60 = v6;
    while ( 1 )
    {
      p_Blink = &Flink[-5].Blink;
      Flink_high = HIDWORD(Flink[3].Flink);
      v21 = (__int64)Flink[2].Blink & 2;
      v52 = Flink_high;
      if ( v6 >= 0x40 )
        v22 = 0LL;
      else
        v22 = (_QWORD)p_Blink[6] << result;
      v23 = v22 | 1;
      if ( ((_BYTE)p_Blink[14] & 4) == 0 )
        v23 = v22;
      Flink[-2].Blink = (struct _LIST_ENTRY *)v23;
      v24 = Flink[-2].Flink;
      v25 = (char *)p_Blink - v8->ScbOffset;
      v26 = *p_Blink;
      Flink[-2].Flink = *p_Blink;
      v27 = (char *)v24 - (char *)v26;
      _InterlockedAdd64((volatile signed __int64 *)v25 + 6, v27);
      if ( *((__int64 *)v25 + 4) > 0
        && (__int64)(v27 + _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 4, v27)) <= 0 )
      {
        v51 = (struct _KDPC *)_InterlockedExchange64((volatile __int64 *)v25 + 9, 0LL);
        if ( v51 )
        {
          KeInsertQueueDpc(v51, 0LL, 0LL);
          Flink_high = v52;
          v16 = v56;
          NextThread = v54;
        }
      }
      if ( !v7 )
      {
        if ( v8->ClockOwner )
        {
          if ( ((_BYTE)p_Blink[14] & 0x10) == 0 )
          {
            v32 = *((_QWORD *)v25 + 5);
            v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 6, v32) + v32;
            v34 = *((_QWORD *)v25 + 5);
            if ( v33 > v34 )
              _InterlockedExchange64((volatile __int64 *)v25 + 6, v34);
          }
        }
      }
      if ( Flink[-4].Flink != Flink[-4].Blink )
        Flink[-3].Blink = (struct _LIST_ENTRY *)((unsigned int)KiGroupSchedulingNumerator
                                               * ((unsigned __int64)*p_Blink >> 10)
                                               + (((unsigned __int64)Flink[-3].Blink
                                                 * (unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10));
      Blink = (volatile signed __int32 *)Flink[3].Blink;
      *p_Blink = 0LL;
      Flink[-2].Flink = 0LL;
      if ( Blink )
      {
        v29 = ((*((unsigned __int16 *)p_Blink + 56) >> 3) & 1) - *((_DWORD *)p_Blink + 31);
        if ( (int)(v29 + _InterlockedExchangeAdd(Blink, v29)) < 0 )
          LODWORD(Flink[3].Blink->Flink) = 0;
      }
      v30 = *((unsigned __int16 *)p_Blink + 56);
      Flink[-3].Flink = 0LL;
      *((_DWORD *)p_Blink + 31) = (v30 >> 3) & 1;
      *((_WORD *)p_Blink + 56) = v30 & 0xFFFC;
      Flink[1] = 0LL;
      Flink[2].Flink = 0LL;
      Flink[20].Blink = 0LL;
      Flink[21].Flink = 0LL;
      if ( !*((_DWORD *)p_Blink + 31) )
        break;
      if ( v7 )
        goto LABEL_32;
      if ( LOWORD(Flink[3].Flink) )
      {
        KiInsertNonMaxOverQuotaScb((struct _KSCB *)&Flink[-5].Blink, v8, 0);
        v62 = 1;
        goto LABEL_34;
      }
LABEL_35:
      if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0
        && (Flink_high != HIDWORD(Flink[3].Flink) || (v21 != 0) != ((LOWORD(Flink[2].Blink) >> 1) & 1)) )
      {
        LOWORD(Flink[2].Blink) |= 0x100u;
        Flink[22].Blink = *a5;
        *a5 = (struct _LIST_ENTRY *)((char *)Flink + 360);
      }
      Flink = Flink->Flink;
      result = v60;
      v16 = v56;
      if ( Flink == p_ScbList )
      {
        if ( v62 )
          return result;
        goto LABEL_45;
      }
    }
    *((_WORD *)p_Blink + 56) &= ~4u;
    if ( p_Blink == (struct _LIST_ENTRY **)v16 )
    {
      PriorityState = (unsigned __int8 *)v8->PriorityState;
      v37 = *PriorityState;
      if ( (NextThread->Header.Size & 4) != 0 )
      {
        EffectivePriorityThread = KiQueryEffectivePriorityThread(NextThread, v8);
        NextThread = v54;
        v38 = v37 ^ (v37 ^ EffectivePriorityThread) & 0x7F;
      }
      else
      {
        v38 = v37 ^ (NextThread->Priority ^ v37) & 0x7F;
      }
      *PriorityState = v38;
      SchedulerAssist = v8->SchedulerAssist;
      if ( SchedulerAssist )
      {
        v40 = v38 & 0x7F;
        if ( NextThread == v8->IdleThread )
          v40 = (unsigned int)KiVpThreadSystemWorkPriority;
        KiSetSchedulerAssistPriority(SchedulerAssist, v40, 0LL);
      }
    }
LABEL_32:
    Flink_low = LOWORD(Flink[3].Flink);
    v53 = 0;
    if ( Flink_low )
    {
      do
      {
        _BitScanReverse(&v41, Flink_low);
        Flink_low ^= 1 << v41;
        v55 = v41;
        v42 = (char *)&p_Blink[2 * v41 + 18];
        v43 = *(char **)v42;
        do
        {
          *((_DWORD *)v43 - 25) &= ~0x2000u;
          v44 = v43 - 216;
          v11 = (*((_DWORD *)v43 - 24) & 0x400000) == 0;
          *((_QWORD *)v43 + 91) = 0LL;
          if ( !v11 )
            _InterlockedAnd(*((volatile signed __int32 **)v44 + 121), 0xFFFBFFFF);
          v43 = *(char **)v43;
          if ( !(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v44, &Flink[-5].Blink, 0LL, 0LL)
            || (unsigned __int8)KiCheckForMaxOverQuotaScb(&Flink[-5].Blink) )
          {
            goto LABEL_80;
          }
          do
          {
            v46 += *(_DWORD *)(v45 + 124);
            if ( v48 )
            {
              v47 += **(_DWORD **)(v45 + 128);
            }
            else if ( v46 )
            {
              break;
            }
            v45 = *(_QWORD *)(v45 + 416);
          }
          while ( v45 );
          if ( v47 )
            v49 = 1;
          else
LABEL_80:
            v49 = 0;
          KiAddThreadToPrcbQueue((_DWORD)a1, (_DWORD)v44, v44[195], 0, v49, (__int64)&v53);
          if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
            EtwTraceReadyQueueInsertion(v44, a1->Number, v53, 0LL);
        }
        while ( v43 != v42 );
        *((_QWORD *)v42 + 1) = v42;
        *(_QWORD *)v42 = v42;
      }
      while ( Flink_low );
      p_ScbList = v59;
      v7 = a4;
      v8 = a1;
    }
    v6 = v57;
    LOWORD(Flink[3].Flink) = 0;
LABEL_34:
    NextThread = v54;
    Flink_high = v52;
    goto LABEL_35;
  }
LABEL_45:
  if ( v8->GroupSchedulingOverQuota )
  {
    Number = v8->Number;
    v8->GroupSchedulingOverQuota = 0;
    return KeInterlockedClearProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, Number);
  }
  return result;
}
