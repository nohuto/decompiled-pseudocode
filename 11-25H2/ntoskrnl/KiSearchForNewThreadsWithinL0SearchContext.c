/*
 * XREFs of KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38
 * Callers:
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1403CF880 (KiLeaveCooperativeIdleSearch.c)
 *     KiJoinCooperativeIdleSearch @ 0x1403CFEF0 (KiJoinCooperativeIdleSearch.c)
 *     KiGetNextIdleSearchTargetInGeneration @ 0x1403D01D0 (KiGetNextIdleSearchTargetInGeneration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiSwapStacksAndRetireDpcList @ 0x1406A7750 (KiSwapStacksAndRetireDpcList.c)
 */

_KTHREAD *__fastcall KiSearchForNewThreadsWithinL0SearchContext(struct _KPRCB *a1, unsigned __int64 *a2)
{
  _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT *v2; // rsi
  _KI_COOPERATIVE_IDLE_SEARCH_GENERATION *v4; // r12
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  _KTHREAD *NextThread; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  _KTHREAD *v12; // rax
  __int64 LowProcIndex; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 FullId; // rax
  __int64 v17; // r14
  struct _KPRCB *v18; // rbx
  unsigned __int64 GroupSetMember; // rax
  __int64 v21; // [rsp+30h] [rbp-10h]
  unsigned __int16 v22; // [rsp+80h] [rbp+40h] BYREF
  struct _KPRCB *v23; // [rsp+90h] [rbp+50h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  v2 = a1->SearchContexts[0];
  v4 = a1->SearchGenerations[0];
  SchedulerSubNode = a1->SchedulerSubNode;
  v22 = 0;
  v21 = (__int64)SchedulerSubNode;
  NextThread = 0LL;
  if ( !KiJoinCooperativeIdleSearch((__int64)a1, (__int64)v2, (__int64)v4) )
    return NextThread;
LABEL_2:
  while ( 2 )
  {
    if ( (a1->DpcRequestSlot[0] & 0xBF) != 0 )
    {
      if ( a1->CurrentThread != a1->IdleThread )
      {
        KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, a2);
        NextThread = a1->NextThread;
        if ( NextThread == a1->IdleThread )
          a1->IdleSchedule = 1;
        goto LABEL_35;
      }
      _disable();
      KiSwapStacksAndRetireDpcList(a1, a1->DpcStack);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v10 = *SchedulerAssist;
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    v12 = a1->NextThread;
    if ( v12 && v12 != a1->IdleThread )
    {
      KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, a2);
      NextThread = a1->NextThread;
      if ( NextThread == a1->IdleThread )
      {
        KiReleasePrcbLocksForIsolationUnit((__int64 *)a2);
        goto LABEL_14;
      }
LABEL_35:
      KiLeaveCooperativeIdleSearch((unsigned __int64)a1, (__int64)v2, (__int64 *)v4, 1);
      return NextThread;
    }
LABEL_14:
    NextThread = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    while ( 1 )
    {
      LowProcIndex = v2->LowProcIndex;
      v14 = -1LL;
      v15 = 0xFFFFFFFFLL;
      if ( (unsigned int)LowProcIndex > v2->HighProcIndex )
        break;
      do
      {
        FullId = v2->GenerationIds[LowProcIndex].FullId;
        if ( FullId )
        {
          if ( FullId < v14 )
          {
            CurrentPrcb = (struct _KPRCB *)(FullId & 0xFFFFFFFFFFFFFF80uLL);
            if ( (FullId & 0xFFFFFFFFFFFFFF80uLL) <= (v4->GenerationId.FullId & 0xFFFFFFFFFFFFFF80uLL)
              && (FullId & 1) == 0 )
            {
              v14 = v2->GenerationIds[LowProcIndex].FullId;
              v15 = (unsigned int)LowProcIndex;
            }
          }
        }
        LowProcIndex = (unsigned int)(LowProcIndex + 1);
      }
      while ( (unsigned int)LowProcIndex <= v2->HighProcIndex );
      if ( (_DWORD)v15 == -1 )
        break;
      if ( !(unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(CurrentPrcb)
        || v14 == v2->GenerationIds[v15].FullId )
      {
        if ( (unsigned __int8)KiGetNextIdleSearchTargetInGeneration(
                                (__int64)v2,
                                (__int64)a1,
                                (__int64)v2->Generations[v15],
                                &v22,
                                (__int64 *)&v23,
                                &v24) )
        {
          v17 = v24;
          v18 = v23;
          KiSearchForNewThreadsOnTarget(a1, v21, v2->Affinity, v2->SearchingProcessors, v23, v24);
          CurrentPrcb = (struct _KPRCB *)&v2->ExtensionStart[16 * v22];
          if ( v18 )
          {
            GroupSetMember = v18->GroupSetMember;
          }
          else
          {
            GroupSetMember = *(_QWORD *)(v17 + 712);
            CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 8);
          }
          _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb, ~GroupSetMember);
          goto LABEL_2;
        }
        CurrentPrcb = (struct _KPRCB *)(v14 | 1);
        _InterlockedCompareExchange64((volatile signed __int64 *)&v2->GenerationIds[v15], v14 | 1, v14);
      }
    }
    v22 = -1;
    v23 = 0LL;
    v24 = 0LL;
    if ( !KiLeaveCooperativeIdleSearch((unsigned __int64)a1, (__int64)v2, (__int64 *)v4, 0) )
      continue;
    return NextThread;
  }
}
