/*
 * XREFs of KiDirectSwitchThread @ 0x140315A20
 * Callers:
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceReadyThread @ 0x140288F70 (EtwTraceReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140314F38 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiComputeEffectivePriority @ 0x140316760 (KiComputeEffectivePriority.c)
 *     KiCheckThreadAffinity @ 0x140316A80 (KiCheckThreadAffinity.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403184D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCanThreadBeReadiedImmediately @ 0x14041D430 (KiCanThreadBeReadiedImmediately.c)
 *     KiGetComparisonRanks @ 0x14048C888 (KiGetComparisonRanks.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     KiThreadSetUnusualBoost @ 0x1404E9084 (KiThreadSetUnusualBoost.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, char a3)
{
  struct _SINGLE_LIST_ENTRY *v3; // r9
  __int64 v4; // r13
  __int64 v8; // rsi
  _KTHREAD *v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rdi
  _KTHREAD *v13; // rbx
  __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 QuantumTarget; // r15
  unsigned int v18; // ebx
  ULONG_PTR v19; // rsi
  __int64 v20; // rdi
  unsigned __int8 v21; // al
  int v22; // ebx
  __int64 v23; // rcx
  _KCORE_CONTROL_BLOCK *v24; // rax
  __int64 ProcessorCount; // rcx
  _KPRCB **Prcbs; // r14
  __int64 v27; // r15
  _KPRCB *v28; // rdi
  unsigned int v29; // esi
  int v30; // ebx
  __int64 v31; // r11
  unsigned int v32; // ecx
  int v33; // esi
  unsigned __int64 v34; // rdx
  int Priority; // edi
  unsigned int v36; // ebx
  int v37; // r12d
  bool v38; // cc
  unsigned int v39; // r9d
  volatile signed __int32 *v40; // rsi
  __int64 *v41; // rcx
  __int64 **v42; // rax
  unsigned int v43; // edi
  signed int v44; // edx
  unsigned int v45; // r10d
  signed int v46; // eax
  ULONG_PTR v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // r14d
  __int64 v53; // rbx
  struct _KI_RESCHEDULE_CONTEXT *v55; // r15
  __int64 v56; // r8
  __int64 i; // rdx
  char v58; // dl
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 k; // rdx
  unsigned __int8 DoesThreadDominateRescheduleContextEntry; // al
  unsigned int v64; // ecx
  char v65; // al
  int v66; // ebx
  unsigned int v67; // r14d
  unsigned __int8 v68; // si
  __int64 v69; // rdi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v71; // al
  unsigned __int64 v72; // r9
  int v73; // edi
  __int64 v74; // rax
  struct _KPRCB *v75; // rsi
  unsigned int v76; // r8d
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  signed int v79; // ecx
  int v80; // eax
  int QuantumReset; // eax
  __int64 v82; // rcx
  int v83; // edx
  int v84; // r9d
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  _KTHREAD *v88; // rax
  int v89; // edx
  __int64 v90; // r8
  __int64 v91; // r9
  signed __int32 v92; // eax
  signed __int32 v93; // ett
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  int v95; // r9d
  int v96; // r9d
  __int64 v97; // r10
  int v98; // edx
  __int64 v99; // r8
  __int64 v100; // r10
  unsigned int v101; // edi
  unsigned int v102; // ecx
  char v103; // al
  char v104; // cl
  __int64 v105; // r14
  unsigned __int8 v106; // al
  unsigned __int8 *v107; // rbx
  __int64 v108; // rsi
  __int64 v109; // rcx
  __int64 *v110; // r8
  __int64 m; // rdi
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v112; // rcx
  __int64 j; // r10
  unsigned __int8 *v114; // r9
  __int64 v115; // rcx
  __int64 v116; // rax
  char v117; // [rsp+30h] [rbp-69h]
  int v118; // [rsp+34h] [rbp-65h] BYREF
  int v119; // [rsp+38h] [rbp-61h] BYREF
  _WORD v120[2]; // [rsp+3Ch] [rbp-5Dh] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-59h] BYREF
  __int64 v122; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v123; // [rsp+50h] [rbp-49h]
  unsigned int v124; // [rsp+54h] [rbp-45h]
  struct _SINGLE_LIST_ENTRY v125; // [rsp+58h] [rbp-41h] BYREF
  _KTHREAD *v126; // [rsp+60h] [rbp-39h]
  signed int v127; // [rsp+68h] [rbp-31h]
  signed int v128; // [rsp+6Ch] [rbp-2Dh]
  __int64 v129; // [rsp+70h] [rbp-29h]
  __int64 v130; // [rsp+78h] [rbp-21h]
  _QWORD v131[2]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v132[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v133; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v134; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned __int64 v135; // [rsp+B0h] [rbp+17h] BYREF
  unsigned __int64 v138; // [rsp+118h] [rbp+7Fh]

  v3 = *(struct _SINGLE_LIST_ENTRY **)(a1 + 11528);
  v4 = 0LL;
  v125.Next = 0LL;
  v124 = -1;
  v123 = -1;
  if ( v3 )
    *(struct _SINGLE_LIST_ENTRY *)(a1 + 11528) = (struct _SINGLE_LIST_ENTRY)v3->Next;
  v8 = (__int64)&v3[-27];
  BugCheckParameter1 = (ULONG_PTR)&v3[-27];
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v8, 1, a2, 1);
  v9 = *(_KTHREAD **)(a1 + 8);
  v126 = v9;
  KiAbProcessPreContextSwitch(v9, 0LL);
  v10 = *(_QWORD *)(v8 + 104);
  v119 = 0;
  if ( v10 )
  {
    v4 = v10 + *(unsigned int *)(a1 + 216);
    if ( v4 )
    {
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v8, 0LL, v4, 0LL)
        && !(unsigned __int8)KiShouldPreemptionBeDeferred() )
      {
        if ( KiCheckForMaxOverQuotaScb(v4) )
        {
          v119 = -1;
        }
        else
        {
          do
          {
            v89 += *(_DWORD *)(v90 + 124);
            if ( v89 )
              break;
            v90 = *(_QWORD *)(v90 + 416);
          }
          while ( v90 );
          v119 = v89;
          if ( !v89 )
            goto LABEL_7;
        }
        SchedulingGroup = v9->SchedulingGroup;
        if ( SchedulingGroup )
        {
          if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(
                                  v9,
                                  (unsigned int)v91,
                                  (char *)SchedulingGroup + *(unsigned int *)(a1 + 216),
                                  v91) )
          {
            if ( (unsigned __int8)KiShouldPreemptionBeDeferred() )
            {
              v118 = v96;
            }
            else
            {
              if ( KiCheckForMaxOverQuotaScb(v97) )
              {
                v118 = -1;
              }
              else
              {
                do
                {
                  v98 += *(_DWORD *)(v99 + 124);
                  if ( v98 )
                    break;
                  v99 = *(_QWORD *)(v99 + 416);
                }
                while ( v99 );
                v118 = v98;
                if ( !v98 )
                  goto LABEL_7;
              }
              KiGetComparisonRanks(v4, v100, &v119, &v118);
            }
          }
          else
          {
            v118 = v95;
          }
        }
      }
    }
  }
LABEL_7:
  v11 = *(__int64 **)(v8 + 208);
  v12 = &v11[6 * *(unsigned __int8 *)(v8 + 587)];
  do
  {
    if ( *((_BYTE *)v11 + 17) < 5u )
    {
      v40 = (volatile signed __int32 *)v11[4];
      KiAcquireKobjectLockSafe(v40);
      if ( *((_BYTE *)v11 + 17) == 4 )
      {
        v41 = (__int64 *)*v11;
        v42 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v42 != v11 )
          __fastfail(3u);
        *v42 = v41;
        v41[1] = (__int64)v42;
      }
      _InterlockedAnd(v40, 0xFFFFFF7F);
    }
    v11 += 6;
  }
  while ( v11 != v12 );
  _disable();
  v13 = v126;
  updated = KiUpdateTotalCyclesCurrentThread(a1, v126, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v130 = updated;
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v92 = *SchedulerAssist;
    do
    {
      v93 = v92;
      v92 = _InterlockedCompareExchange(SchedulerAssist, v92 & 0xFFDFFFFF, v92);
    }
    while ( v93 != v92 );
    if ( (v92 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  QuantumTarget = v13->QuantumTarget;
  v18 = 0;
  v19 = BugCheckParameter1;
  v138 = QuantumTarget;
  v20 = *(_QWORD *)(BugCheckParameter1 + 72);
  v129 = v20;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
  {
    do
    {
      if ( (++v18 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentPrcb) )
      {
        HvlNotifyLongSpinWait(v18);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v19 + 64) );
  }
  v21 = KiUpdateVPBackingThreadPriority(v19);
  v22 = 32 * (KiComputeEffectivePriority(v19, a2, v20, v21) & 1);
  if ( !(unsigned int)KiCheckThreadAffinity(v19) )
  {
    v101 = *(_DWORD *)(v19 + 588);
    v124 = v101;
    if ( (unsigned int)KiComputeThreadAffinity(v23) )
    {
      v102 = *(_DWORD *)(v19 + 588);
      v123 = v102;
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        v22 |= 0x200u;
      if ( (xmmword_140FC5B10 & 0x8000000) != 0 && v101 != v102 )
        v22 |= 0x400u;
      if ( (v22 & 0x600) != 0 )
        _InterlockedIncrement16((volatile signed __int16 *)(v19 + 868));
    }
  }
  v122 = a1 | 1;
  v24 = *(_KCORE_CONTROL_BLOCK **)(a1 + 36440);
  ProcessorCount = v24->ProcessorCount;
  Prcbs = v24->Prcbs;
  if ( (_BYTE)ProcessorCount )
  {
    v27 = v24->ProcessorCount;
    do
    {
      v28 = *Prcbs;
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v28->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ProcessorCount) )
          {
            HvlNotifyLongSpinWait(v29);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v28->PrcbLock );
      }
      ++Prcbs;
      --v27;
    }
    while ( v27 );
    QuantumTarget = v138;
    v19 = BugCheckParameter1;
  }
  v30 = v22 | 0xF;
  v31 = v130;
  v32 = v30 & 0xFFFFFFFA;
  v33 = *(char *)(v19 + 195);
  v34 = v130 + (unsigned int)KiDirectQuantumTarget;
  Priority = v126->Priority;
  if ( v34 <= QuantumTarget )
    v32 = v30;
  v36 = v32 & 0xFFFFFFF3;
  if ( a3 )
    v36 = v32;
  v37 = 0;
  v117 = 0;
  if ( v33 > Priority )
  {
    v39 = v33;
    v126->Preempted = 1;
    v36 &= ~1u;
    goto LABEL_47;
  }
  if ( (v36 & 4) != 0 )
  {
    v37 = v126->Priority;
    v117 = v126->Priority;
  }
  else
  {
    if ( (v36 & 8) == 0 )
    {
LABEL_156:
      v117 = v37;
      goto LABEL_28;
    }
    v80 = KiComputeNewPriority(v126, v34, 0LL);
    v31 = v130;
    v37 = v80;
    if ( v80 > Priority )
      v37 = Priority;
    v117 = v37;
  }
  if ( v37 < 16 )
  {
LABEL_28:
    v38 = v37 < v33;
    goto LABEL_29;
  }
  if ( v33 < 16 )
  {
    v37 = 15;
    goto LABEL_156;
  }
  v38 = v37 < v33;
  if ( v37 > v33 )
  {
    v37 = v33;
    v117 = v33;
    goto LABEL_132;
  }
LABEL_29:
  if ( !v38 )
  {
LABEL_132:
    v39 = v37;
    goto LABEL_47;
  }
  v39 = v33;
LABEL_47:
  v43 = v36 & 0xFFFFFFFD;
  if ( !*(_QWORD *)(a1 + 16) )
    v43 = v36;
  v44 = v39 + (v43 & 1);
  v45 = *(_DWORD *)(*(_QWORD *)(a1 + 36424) + 8LL) | *(_DWORD *)(a1 + 33752);
  _BitScanReverse((unsigned int *)&v46, v45);
  v127 = v46;
  if ( v44 <= v46 )
    goto LABEL_50;
  if ( !v119 )
    goto LABEL_51;
  if ( v45 > 1 )
    goto LABEL_50;
  v76 = *(_DWORD *)(*(_QWORD *)(v4 + 424) + 124LL);
  v77 = *(_QWORD *)(a1 + 33848);
  if ( (v77 & 1) != 0 )
  {
    if ( v77 == 1 )
      goto LABEL_51;
    v78 = v77 ^ ((a1 + 33840) | 1);
  }
  else
  {
    v78 = *(_QWORD *)(a1 + 33848);
  }
  if ( v78 )
  {
    if ( *(_DWORD *)(v78 + 36) == v76 )
    {
      _BitScanReverse((unsigned int *)&v79, *(unsigned __int16 *)(v78 + 32));
      v128 = v79;
      if ( v44 > v79 )
        goto LABEL_51;
    }
    else if ( *(_DWORD *)(v78 + 36) > v76 )
    {
      goto LABEL_51;
    }
LABEL_50:
    v43 &= ~2u;
  }
LABEL_51:
  v47 = BugCheckParameter1;
  v48 = *(unsigned __int8 *)(a1 + 208);
  v49 = *(_QWORD *)(BugCheckParameter1 + 576);
  if ( (unsigned __int16)v48 >= *(_WORD *)v49
    || (v49 = *(_QWORD *)(v49 + 8 * v48 + 8) >> *(_BYTE *)(a1 + 209), (v49 & 1) == 0) )
  {
    v43 &= ~2u;
  }
  v50 = *(_DWORD *)(BugCheckParameter1 + 120);
  if ( (v50 & 0x20000) == 0 || (v50 & 0x100000) != 0 )
    v43 &= ~2u;
  v51 = v129;
  if ( (v43 & 1) != 0 )
  {
    if ( !_bittest((const int *)&v45, v39) && (v43 & 2) != 0 )
    {
      v87 = QuantumTarget + v129 - v31;
    }
    else
    {
      v31 = QuantumTarget - (unsigned int)KiDirectQuantumTarget;
      v87 = (unsigned int)KiDirectQuantumTarget + v129;
    }
    if ( (v43 & 2) == 0 )
      *(_BYTE *)(BugCheckParameter1 + 565) = 1;
    v88 = v126;
    v43 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)(v47 + 120), 5u);
    *(_QWORD *)(v47 + 32) = v87;
    v88->QuantumTarget = v31;
  }
  v52 = v43;
  if ( (v43 & 0x20) != 0 )
  {
    QuantumReset = KiQueryQuantumReset(v47);
    v82 = v51 + (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
    if ( (*(_DWORD *)(v47 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v47 + 120), 5u);
    *(_QWORD *)(v47 + 32) = v82;
  }
  if ( v39 != v33 )
  {
    KiThreadSetUnusualBoost(v47, v39, v51);
    KiUpdateThreadPriority(0, v83, v47, v84, 0);
  }
  *(_BYTE *)(v47 + 567) = a2;
  *(_BYTE *)(v47 + 566) = 0;
  if ( (v43 & 2) == 0 )
    goto LABEL_60;
  v55 = *(struct _KI_RESCHEDULE_CONTEXT **)(a1 + 14312);
  memset_0(v55, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)v55, &v122);
  v56 = 0LL;
  for ( i = 0LL; (unsigned int)i < v55->ProcessorCount; i = (unsigned int)(i + 1) )
  {
    if ( v55->ProcessorEntries[i].Prcb == (_KPRCB *)a1 )
    {
      v56 = (__int64)&v55->ProcessorEntries[i];
      break;
    }
  }
  *(_BYTE *)(v56 + 34) |= 2u;
  v58 = *(_BYTE *)(v56 + 32);
  v59 = *(_QWORD *)v56;
  *(_QWORD *)(v56 + 16) = *(_QWORD *)(*(_QWORD *)v56 + 24LL);
  *(_BYTE *)(v56 + 32) = v58 & 0xC0 | 5;
  v60 = *(_QWORD *)(v59 + 24);
  *(_BYTE *)(v56 + 33) &= ~1u;
  *(_QWORD *)(v56 + 24) = v60;
  if ( (v58 & 2) != 0 )
  {
    for ( j = 0LL; (unsigned int)j < v55->ProcessorCount; j = (unsigned int)(j + 1) )
    {
      v114 = (unsigned __int8 *)v55->ProcessorEntries + 32 * j + 8 * (unsigned int)j;
      if ( v114 != (unsigned __int8 *)v56 )
      {
        v114[34] |= 2u;
        v115 = *(_QWORD *)v114;
        *((_QWORD *)v114 + 2) = *(_QWORD *)(*(_QWORD *)v114 + 24LL);
        v114[32] = v114[32] & 0xC0 | 5;
        v116 = *(_QWORD *)(v115 + 24);
        v114[33] &= ~1u;
        *((_QWORD *)v114 + 3) = v116;
      }
    }
    if ( (v58 & 2) != 0 )
      v55->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  v51 = v55->ProcessorCount;
  v61 = 0LL;
  for ( k = 0LL; (unsigned int)k < (unsigned int)v51; k = (unsigned int)(k + 1) )
  {
    if ( v55->ProcessorEntries[k].Prcb == (_KPRCB *)a1 )
    {
      v61 = (__int64)&v55->ProcessorEntries[k];
      break;
    }
  }
  v133 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    DoesThreadDominateRescheduleContextEntry = KiEvaluateGroupSchedulingPreemption(v61, v47, 0LL, &v133);
    if ( !DoesThreadDominateRescheduleContextEntry )
      goto LABEL_88;
  }
  else
  {
    v103 = *(_BYTE *)(v61 + 32);
    v49 = *(_QWORD *)(v61 + 16);
    if ( (v103 & 1) == 0 )
    {
      v104 = *(_BYTE *)(v47 + 195);
      if ( v104 <= *(char *)(v49 + 195)
        && (v104 != *(_BYTE *)(v49 + 195) || (v103 & 0x18) == 0)
        && ((v103 & 0x10) == 0 || !v104) )
      {
        DoesThreadDominateRescheduleContextEntry = 0;
        goto LABEL_88;
      }
    }
  }
  v64 = (*(_DWORD *)(v47 + 120) >> 1) & 1;
  if ( v64 < ((*(unsigned __int8 *)(v61 + 32) >> 1) & 1u) )
    v64 = (*(unsigned __int8 *)(v61 + 32) >> 1) & 1;
  if ( v64 == 1 )
  {
    for ( m = 0LL; (unsigned int)m < v55->ProcessorCount; m = (unsigned int)(m + 1) )
    {
      v112 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v55->ProcessorEntries + 32 * m + 8 * (unsigned int)m);
      if ( v112 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v61 )
      {
        DoesThreadDominateRescheduleContextEntry = KiDoesThreadDominateRescheduleContextEntry(
                                                     v112,
                                                     (struct _KTHREAD *)v47,
                                                     0,
                                                     0LL);
        if ( !DoesThreadDominateRescheduleContextEntry )
          goto LABEL_88;
      }
    }
  }
  DoesThreadDominateRescheduleContextEntry = 1;
LABEL_88:
  v43 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(2 * DoesThreadDominateRescheduleContextEntry)) & 2;
  if ( (DoesThreadDominateRescheduleContextEntry & 1) == 0 )
  {
LABEL_60:
    v53 = v122;
    goto LABEL_61;
  }
  *(_BYTE *)(v47 + 565) = 0;
  v65 = KiScheduleThreadToRescheduleContext(&v55->ProcessorCount, v47, a1, 0, (__int64)&v125);
  v66 = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(v65 << 7)) & 0x80;
  if ( (v65 & 1) != 0 )
    KiSearchForNewThreadsForRescheduleContext(v55, &v125);
  v67 = 0;
  v68 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
    v67 = 2;
  v69 = 0LL;
  if ( v55->ProcessorCount )
  {
    do
    {
      v68 |= KiCommitRescheduleContextEntry(
               (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v55->ProcessorEntries + 32 * v69 + 8 * (unsigned int)v69),
               (struct _KPRCB *)a1,
               v67,
               &v125);
      v69 = (unsigned int)(v69 + 1);
    }
    while ( (unsigned int)v69 < v55->ProcessorCount );
    LOBYTE(v37) = v117;
  }
  if ( v55->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = v55->ProcessorEntries[0].Prcb->CoreControlBlock;
    v71 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v71;
    if ( v71 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v51 = 0LL;
  v72 = v122 & 0xFFFFFFFFFFFFFFFEuLL;
  v134 = v122 & 0xFFFFFFFFFFFFFFFEuLL;
  v49 = 0LL;
  v73 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)(v68 << 8)) & 0x100;
  if ( (v122 & 1) != 0 )
  {
    if ( (v122 & 1) == 1 )
    {
      v51 = *(_QWORD *)(v72 + 36440) + 8LL;
      v49 = **(unsigned __int8 **)(v72 + 36440);
    }
    if ( !(_DWORD)v49 )
      goto LABEL_104;
  }
  else
  {
    v51 = (__int64)&v134;
    LODWORD(v49) = 1;
  }
  do
  {
    v74 = (unsigned int)(v49 - 1);
    v49 = v74;
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v51 + 8 * v74) + 48LL), 0LL);
  }
  while ( (_DWORD)v74 );
LABEL_104:
  v53 = 0LL;
  v43 = v73 | 0x50;
  v122 = 0LL;
  *(_QWORD *)(v47 + 64) = 0LL;
  if ( (v43 & 0x100) != 0 )
  {
    v120[1] = (unsigned __int8)v37;
    v105 = 0LL;
    v132[0] = v120;
    v120[0] = (2 * (v43 & 1 | (2 * ((v43 >> 2) & 1 | (2 * ((v43 >> 3) & 1)))))) | 1;
    v132[1] = 0x100000004LL;
    if ( v55->ProcessorCount )
    {
      do
      {
        v106 = v55->ProcessorEntries[v105].___u6[0];
        v107 = &v55->ProcessorCount + 40 * v105;
        v108 = *((_QWORD *)v107 + 2);
        if ( (v106 & 0x10) != 0 || (v106 & 8) != 0 && *(_BYTE *)(v108 + 7) )
          KiAddProcessorToSoftwareInterruptBatch(a1 + 13784, *((_QWORD *)v107 + 2));
        if ( (v107[51] & 2) != 0 )
        {
          v109 = *((_QWORD *)v107 + 5);
          if ( v109 == v47 )
            v110 = v132;
          else
            v110 = 0LL;
          EtwTraceScheduleThread(v109, v108, v110);
        }
        if ( (v107[51] & 4) != 0 )
          KiHvEnlightenedGuestPriorityKick(a1, v108, (char)v107[52]);
        if ( (v107[51] & 1) != 0 )
          _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v107 + 5) + 868LL));
        v105 = (unsigned int)(v105 + 1);
      }
      while ( (unsigned int)v105 < v55->ProcessorCount );
      v53 = v122;
      LOBYTE(v37) = v117;
    }
    v75 = (struct _KPRCB *)a1;
    KiFlushSoftwareInterruptBatch((char *)(a1 + 13784));
  }
  else
  {
    v75 = (struct _KPRCB *)a1;
  }
  if ( v125.Next )
    KiReadyDeferredReadyList(v75, &v125);
LABEL_61:
  if ( (v43 & 0x40) != 0 )
    goto LABEL_62;
  v85 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
  v135 = v53 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v53 & 1) == 0 )
  {
    v51 = (__int64)&v135;
    LODWORD(v49) = 1;
    do
    {
LABEL_125:
      v86 = (unsigned int)(v49 - 1);
      v49 = v86;
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v51 + 8 * v86) + 48LL), 0LL);
    }
    while ( (_DWORD)v86 );
    goto LABEL_126;
  }
  v51 = *(_QWORD *)(v85 + 36440) + 8LL;
  v49 = **(unsigned __int8 **)(v85 + 36440);
  if ( **(_BYTE **)(v85 + 36440) )
    goto LABEL_125;
LABEL_126:
  v122 = 0LL;
  *(_QWORD *)(v47 + 64) = 0LL;
LABEL_62:
  if ( (v43 & 0x600) != 0 )
  {
    if ( (v43 & 0x200) != 0 )
      EtwTraceThreadAffinity(
        v47,
        *(_WORD *)(v47 + 584),
        (*(_DWORD *)(v47 + 116) & 8) != 0,
        0,
        *(unsigned __int16 **)(v47 + 576),
        1334);
    if ( (v43 & 0x400) != 0 && (xmmword_140FC5B10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v47, 1350LL, v124, v123);
    _InterlockedDecrement16((volatile signed __int16 *)(v47 + 868));
  }
  if ( (v43 & 0x10) == 0 )
  {
    WORD1(BugCheckParameter1) = (unsigned __int8)v37;
    v131[0] = &BugCheckParameter1;
    LOWORD(BugCheckParameter1) = 2 * (v43 & 1 | (2 * ((v43 >> 2) & 1 | (2 * ((v43 >> 3) & 1)))));
    v131[1] = 0x100000004LL;
    if ( (unsigned __int8)KiCanThreadBeReadiedImmediately(v47, v49, v51) )
      KiDeferredReadyThread((struct _KPRCB *)a1, v47, (__int64)v131);
    else
      KiInswapAndReadyThread((struct _KPRCB *)a1, v47, (__int64)v131);
  }
  KiAbProcessPostContextSwitch(v126);
  return *(_QWORD *)(a1 + 11528) == 0LL;
}
