/*
 * XREFs of KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404E0CE0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404E0D04 (KiSearchForNewThreadsWithinL1SearchContext.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiGetNextIdleSearchTargetInGeneration @ 0x1403EBAC0 (KiGetNextIdleSearchTargetInGeneration.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E06E0 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E0960 (KiLeaveCooperativeIdleSearch.c)
 *     KiSwapStacksAndRetireDpcList @ 0x1406B39C0 (KiSwapStacksAndRetireDpcList.c)
 */

_KTHREAD *__fastcall KiSearchForNewThreadsWithinSearchContext(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  _KSCHEDULER_SUBNODE *v4; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _KTHREAD *v13; // rax
  unsigned int v14; // ebx
  _KTHREAD *v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 *v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned int v22; // r9d
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rbx
  volatile signed __int64 *v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 v33; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_KSCHEDULER_SUBNODE **)(a1 + 192);
  v33 = 0;
  v30 = 0LL;
  v31 = 0LL;
  if ( !KiJoinCooperativeIdleSearch(a1, a3, (__int64)a4) )
    return 0LL;
LABEL_2:
  while ( 2 )
  {
    if ( (*(_WORD *)(a1 + 14524) & 0xBF) != 0 )
    {
      if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 24) )
      {
        KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, a2);
        v15 = *(_KTHREAD **)(a1 + 16);
        if ( v15 == *(_KTHREAD **)(a1 + 24) )
          *(_BYTE *)(a1 + 14523) = 1;
        goto LABEL_48;
      }
      _disable();
      KiSwapStacksAndRetireDpcList(a1, *(_QWORD *)(a1 + 14496));
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v11 = *SchedulerAssist;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    v13 = *(_KTHREAD **)(a1 + 16);
    if ( v13 && v13 != *(_KTHREAD **)(a1 + 24) )
    {
      v14 = 0;
      *a2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(a1 + 48) );
      }
      v15 = *(_KTHREAD **)(a1 + 16);
      if ( v15 == *(_KTHREAD **)(a1 + 24) )
      {
        v16 = *a2;
        v17 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
        v32 = v17;
        if ( (v16 & 1) != 0 )
        {
          v18 = (unsigned __int64 *)(*(_QWORD *)(v17 + 36440) + 8LL);
          v19 = **(unsigned __int8 **)(v17 + 36440);
          if ( !**(_BYTE **)(v17 + 36440) )
          {
LABEL_27:
            *a2 = 0LL;
            goto LABEL_28;
          }
        }
        else
        {
          v18 = &v32;
          v19 = 1;
        }
        do
          _InterlockedAnd64((volatile signed __int64 *)(v18[--v19] + 48), 0LL);
        while ( v19 );
        goto LABEL_27;
      }
LABEL_48:
      KiLeaveCooperativeIdleSearch(a1, a3, a4, 1);
      return v15;
    }
LABEL_28:
    v30 = 0LL;
    v31 = 0LL;
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)(a3 + 1060);
      v21 = -1LL;
      v22 = -1;
      if ( (unsigned int)v20 > *(unsigned __int8 *)(a3 + 1061) )
        break;
      do
      {
        v23 = *(_QWORD *)(a3 + 8 * v20 + 24);
        if ( v23 && v23 < v21 && (v23 & 0xFFFFFFFFFFFFFF80uLL) <= (*a4 & 0xFFFFFFFFFFFFFF80uLL) && (v23 & 1) == 0 )
        {
          v21 = *(_QWORD *)(a3 + 8 * v20 + 24);
          v22 = v20;
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 <= *(unsigned __int8 *)(a3 + 1061) );
      if ( v22 == -1 )
        break;
      v24 = v22;
      if ( v21 == *(_QWORD *)(a3 + 8LL * v22 + 24) )
      {
        if ( (unsigned __int8)KiGetNextIdleSearchTargetInGeneration(
                                a3,
                                a1,
                                *(_QWORD *)(a3 + 8LL * v22 + 536),
                                &v33,
                                &v30,
                                &v31) )
        {
          v25 = v31;
          v26 = v30;
          KiSearchForNewThreadsOnTarget(
            (struct _KPRCB *)a1,
            (__int64)v4,
            *(_QWORD *)(a3 + 1048),
            *(_QWORD *)(a3 + 8),
            v30,
            v31);
          v27 = (volatile signed __int64 *)(a3 + 1064 + 16LL * v33);
          if ( v26 )
          {
            v28 = ~*(_QWORD *)(v26 + 200);
          }
          else
          {
            ++v27;
            v28 = ~*(_QWORD *)(v25 + 712);
          }
          _InterlockedAnd64(v27, v28);
          goto LABEL_2;
        }
        _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v24 + 24), v21 | 1, v21);
      }
    }
    v30 = 0LL;
    v33 = -1;
    v31 = 0LL;
    if ( !KiLeaveCooperativeIdleSearch(a1, a3, a4, 0) )
      continue;
    return 0LL;
  }
}
