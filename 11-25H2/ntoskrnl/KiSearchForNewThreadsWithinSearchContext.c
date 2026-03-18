/*
 * XREFs of KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10
 * Callers:
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404F2160 (KiSearchForNewThreadsWithinL1SearchContext.c)
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

_KTHREAD *__fastcall KiSearchForNewThreadsWithinSearchContext(
        struct _KPRCB *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  _KTHREAD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  _KTHREAD *NextThread; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rbp
  struct _KPRCB *v20; // rbx
  volatile signed __int64 *v21; // rcx
  unsigned __int64 v22; // rax
  struct _KPRCB *v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v25; // [rsp+70h] [rbp+8h] BYREF

  v25 = 0;
  if ( !(unsigned __int8)KiJoinCooperativeIdleSearch(a1, a3, a4) )
    return 0LL;
LABEL_3:
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
        goto LABEL_26;
      }
      _disable();
      KiSwapStacksAndRetireDpcList(a1, a1->DpcStack);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    v9 = a1->NextThread;
    if ( v9 && v9 != a1->IdleThread )
    {
      KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, a2);
      NextThread = a1->NextThread;
      if ( NextThread == a1->IdleThread )
      {
        KiReleasePrcbLocksForIsolationUnit((__int64 *)a2);
        goto LABEL_5;
      }
LABEL_26:
      KiLeaveCooperativeIdleSearch((unsigned __int64)a1, a3, a4, 1);
      return NextThread;
    }
LABEL_5:
    v23 = 0LL;
    v24[0] = 0LL;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(a3 + 1060);
      v11 = -1LL;
      v12 = 0xFFFFFFFFLL;
      if ( (unsigned int)v10 > *(unsigned __int8 *)(a3 + 1061) )
        break;
      do
      {
        v13 = *(_QWORD *)(a3 + 8 * v10 + 24);
        if ( v13 && v13 < v11 && (v13 & 0xFFFFFFFFFFFFFF80uLL) <= (*a4 & 0xFFFFFFFFFFFFFF80uLL) && (v13 & 1) == 0 )
        {
          v11 = *(_QWORD *)(a3 + 8 * v10 + 24);
          v12 = (unsigned int)v10;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 <= *(unsigned __int8 *)(a3 + 1061) );
      if ( (_DWORD)v12 == -1 )
        break;
      if ( !(unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v10)
        || v11 == *(_QWORD *)(a3 + 8 * v12 + 24) )
      {
        if ( (unsigned __int8)KiGetNextIdleSearchTargetInGeneration(
                                a3,
                                (_DWORD)a1,
                                *(_QWORD *)(a3 + 8 * v12 + 536),
                                (unsigned int)&v25,
                                (__int64)&v23,
                                (__int64)v24) )
        {
          v19 = v24[0];
          v20 = v23;
          KiSearchForNewThreadsOnTarget(a1, v23, v24[0]);
          v21 = (volatile signed __int64 *)(a3 + 1064 + 16LL * v25);
          if ( v20 )
          {
            v22 = ~v20->GroupSetMember;
          }
          else
          {
            ++v21;
            v22 = ~*(_QWORD *)(v19 + 712);
          }
          _InterlockedAnd64(v21, v22);
          goto LABEL_3;
        }
        _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v12 + 24), v11 | 1, v11);
      }
    }
    v23 = 0LL;
    v25 = -1;
    v24[0] = 0LL;
    if ( !KiLeaveCooperativeIdleSearch((unsigned __int64)a1, a3, a4, 0) )
      continue;
    return 0LL;
  }
}
