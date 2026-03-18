/*
 * XREFs of KiSearchForNewThread @ 0x14031E240
 * Callers:
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140254190 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KeIsForceParkingEnabled @ 0x140313D80 (KeIsForceParkingEnabled.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140352350 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAdvanceReadyQueueEnumerator @ 0x140352A60 (KiAdvanceReadyQueueEnumerator.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1403D3C70 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403E05A0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404EFD38 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404F2160 (KiSearchForNewThreadsWithinL1SearchContext.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E00 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_KTHREAD *__fastcall KiSearchForNewThread(struct _KPRCB *a1, char a2, __int64 *a3)
{
  __int64 NextThread; // r14
  __int64 v4; // rsi
  struct _KPRCB *v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rbx
  struct _KPRCB **v12; // r12
  unsigned int v13; // r15d
  unsigned __int64 v14; // rcx
  bool v15; // zf
  struct _KPRCB *v16; // r8
  _KISOLATION_WIDTH v17; // r13d
  $5B693F68BB5D498102B36F1BF4333747 *v18; // rbx
  struct _KPRCB *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG_PTR CurrentThread; // r8
  unsigned __int8 AllCompareThreadStateFlags; // cl
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // cl
  struct _KI_RESCHEDULE_CONTEXT *v28; // r12
  unsigned __int8 v29; // al
  _KI_RESCHEDULE_CONTEXT_ENTRY *v30; // r8
  unsigned int v31; // r9d
  _KI_RESCHEDULE_CONTEXT_ENTRY *ProcessorEntries; // rdx
  unsigned __int8 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  int v36; // edx
  char v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int i; // r8d
  char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  volatile __int64 *v44; // r8
  int v45; // r14d
  volatile __int64 *v46; // rdi
  volatile __int64 **p_SharedReadyQueue; // rcx
  __int64 ProcessorCount; // rdx
  struct _KPRCB *v49; // rcx
  struct _KPRCB **v50; // rdx
  unsigned int v51; // ebx
  struct _KTHREAD *v52; // rbx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _KPRCB *v54; // rdi
  __int64 ScbOffset; // rax
  struct _KI_RESCHEDULE_CONTEXT *v56; // rax
  struct _KI_RESCHEDULE_CONTEXT *Next; // rdx
  struct _KSCB *v58; // r14
  int NewThread_high; // r8d
  struct _KPRCB *v60; // rdi
  volatile signed __int64 *v61; // r8
  int v62; // r14d
  volatile signed __int64 *v63; // rbx
  volatile signed __int64 **v64; // rcx
  __int64 v65; // rdx
  volatile signed __int64 **v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  struct _KPRCB *v69; // r15
  char v70; // al
  struct _SINGLE_LIST_ENTRY *v71; // rbx
  char v72; // di
  __int64 *v73; // r13
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned int j; // edi
  unsigned __int8 IdleState; // al
  __int64 v81; // rcx
  unsigned int v82; // edi
  _KI_COOPERATIVE_IDLE_SEARCH_GENERATION **SearchGenerations; // rbx
  __int64 v84; // r8
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbx
  unsigned __int64 GroupSetMember; // rcx
  struct _KI_RESCHEDULE_CONTEXT *v89; // [rsp+38h] [rbp-C8h] BYREF
  struct _KPRCB *v90; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v91; // [rsp+48h] [rbp-B8h]
  struct _SINGLE_LIST_ENTRY v92; // [rsp+50h] [rbp-B0h] BYREF
  struct _KSHARED_READY_QUEUE *v93; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v94; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  struct _KPRCB *v96; // [rsp+70h] [rbp-90h]
  unsigned __int64 v97; // [rsp+78h] [rbp-88h]
  __int64 *v98; // [rsp+80h] [rbp-80h]
  _BYTE v99[240]; // [rsp+90h] [rbp-70h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  NextThread = (__int64)a1->NextThread;
  LODWORD(v4) = 0;
  v98 = a3;
  v6 = a1;
  v96 = a1;
  v92.Next = 0LL;
  if ( NextThread && (_KTHREAD *)NextThread != a1->IdleThread )
  {
    v7 = *a3;
    v8 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    v94 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v7 & 1) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 36440) + 8LL;
      if ( **(_BYTE **)(v8 + 36440) )
      {
        v10 = **(unsigned __int8 **)(v8 + 36440);
        do
        {
          if ( v8 == *(_QWORD *)v9 )
          {
            v4 = (unsigned int)(v4 + 1);
            if ( (_DWORD)v4 == 1 )
              v8 = -1LL;
            else
              v8 = *(&v94 + v4);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v9 + 48LL), 0LL);
          }
          v9 += 8LL;
          --v10;
        }
        while ( v10 );
      }
      *a3 &= ~1uLL;
    }
    return (_KTHREAD *)NextThread;
  }
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v89 = StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  v12 = 0LL;
  v13 = 0;
  v14 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = (*a3 & 1) == 0;
  v16 = (struct _KPRCB *)(*a3 & 1);
  v95 = v14;
  v90 = v16;
  if ( v15 )
  {
    v12 = (struct _KPRCB **)&v95;
    v13 = 1;
    v17 = KiIsolationWidthLogicalProcessor;
  }
  else
  {
    if ( (_DWORD)v16 == 1 )
    {
      v12 = (struct _KPRCB **)(*(_QWORD *)(v14 + 36440) + 8LL);
      v13 = **(unsigned __int8 **)(v14 + 36440);
    }
    v17 = KiIsolationWidthLogicalProcessor;
    if ( !v13 )
      goto LABEL_40;
  }
  v18 = &StaticRescheduleContext->ProcessorEntries[0].32;
  v93 = (struct _KSHARED_READY_QUEUE *)v13;
  do
  {
    *(_OWORD *)&v18[-16].0 = 0LL;
    *(_OWORD *)&v18[-8].0 = 0LL;
    *(_QWORD *)&v18->0 = 0LL;
    *(_QWORD *)&v18[-4].0 = -1LL;
    v18[2].AllCompareThreadStateFlags = 63;
    v19 = *v12;
    *(_QWORD *)&v18[-16].0 = *v12;
    *(_QWORD *)&v18[-12].0 = 0LL;
    if ( v19->SharedReadyQueue )
    {
      if ( (v19->IdleState & 0x10) == 0
        || (!KeIsForceParkingEnabled() || (v19->IdleState & 0x20) == 0
          ? (v22 = *(_QWORD *)(v20 + 80))
          : (v22 = ~*(_QWORD *)(v20 + 104)),
            (v22 & *(_QWORD *)(v21 + 712)) == 0) )
      {
        *(_QWORD *)&v18[-12].0 = v19->SharedReadyQueue;
      }
    }
    CurrentThread = (ULONG_PTR)v19->NextThread;
    *(_QWORD *)&v18[-8].0 = CurrentThread;
    if ( !CurrentThread )
    {
      CurrentThread = (ULONG_PTR)v19->CurrentThread;
      *(_QWORD *)&v18[-8].0 = CurrentThread;
    }
    if ( v19->NextThread == (_KTHREAD *)CurrentThread )
    {
      v18->AllCompareThreadStateFlags |= 4u;
    }
    else
    {
      AllCompareThreadStateFlags = v18->AllCompareThreadStateFlags;
      if ( v19 == KeGetCurrentPrcb() )
        v25 = AllCompareThreadStateFlags | 4;
      else
        v25 = AllCompareThreadStateFlags & 0xFB;
      v18->AllCompareThreadStateFlags = v25;
    }
    KiTryToUpdateVPBackingThreadPriorityBeforePreemption(CurrentThread, (__int64)v19, CurrentThread, 0LL);
    v26 = ((v19->IdleState & 1) == 0) | v18->AllCompareThreadStateFlags & 0xFE;
    v18->AllCompareThreadStateFlags = v26;
    v27 = v26 ^ (v26 ^ (v19->PriorityState->AllFields >> 6)) & 2;
    v18->AllCompareThreadStateFlags = v27;
    if ( ((v27 >> 1) & 1) > v17 )
      v17 = (v27 >> 1) & 1;
    v18 += 20;
    ++v12;
    v93 = (struct _KSHARED_READY_QUEUE *)((char *)v93 - 1);
  }
  while ( v93 );
  v14 = v95;
  LODWORD(v16) = (_DWORD)v90;
  v6 = v96;
LABEL_40:
  v28 = v89;
  v89->MaximumThreadIsolationWidth = v17;
  v28->IsolationWidth = (int)v16;
  v28->ProcessorCount = v13;
  if ( (_DWORD)v16 )
    v29 = *(_BYTE *)(*(_QWORD *)(v14 + 36440) + 1LL);
  else
    v29 = 0;
  v28->ScanStart = v29;
  if ( v17 )
  {
    v30 = 0LL;
    v31 = 0;
    if ( v13 )
    {
      ProcessorEntries = v28->ProcessorEntries;
      while ( ProcessorEntries->CompareThread == ProcessorEntries->Prcb->SmtIsolationThread )
      {
        ++v31;
        ++ProcessorEntries;
        if ( v31 >= v13 )
          goto LABEL_50;
      }
      v30 = ProcessorEntries;
LABEL_50:
      v33 = (unsigned __int8 *)&v28->ProcessorEntries[0].32;
      v34 = v13;
      do
      {
        if ( v33 - 32 != (unsigned __int8 *)v30 )
        {
          *((_QWORD *)v33 - 2) = v30->CompareThread;
          *v33 = v30->AllCompareThreadStateFlags | 0x20;
        }
        v33 += 40;
        --v34;
      }
      while ( v34 );
    }
  }
  if ( !a2 && !NextThread )
  {
    v35 = 0LL;
    v36 = 0;
    if ( v28->ProcessorCount )
    {
      while ( v28->ProcessorEntries[v36].Prcb != v6 )
      {
        if ( ++v36 >= (unsigned int)v28->ProcessorCount )
          goto LABEL_61;
      }
      v35 = (__int64)&v28->ProcessorEntries[v36];
    }
LABEL_61:
    *(_BYTE *)(v35 + 34) |= 2u;
    v37 = *(_BYTE *)(v35 + 32);
    v38 = *(_QWORD *)v35;
    *(_QWORD *)(v35 + 16) = *(_QWORD *)(*(_QWORD *)v35 + 24LL);
    *(_BYTE *)(v35 + 32) = v37 & 0xC0 | 5;
    v39 = *(_QWORD *)(v38 + 24);
    *(_BYTE *)(v35 + 33) &= ~1u;
    *(_QWORD *)(v35 + 24) = v39;
    if ( (v37 & 2) != 0 )
    {
      for ( i = 0; i < v28->ProcessorCount; ++i )
      {
        v41 = (char *)v28->ProcessorEntries + 32 * i + 8 * i;
        if ( v41 != (char *)v35 )
        {
          v41[34] |= 2u;
          v42 = *(_QWORD *)v41;
          *((_QWORD *)v41 + 2) = *(_QWORD *)(*(_QWORD *)v41 + 24LL);
          v41[32] = v41[32] & 0xC0 | 5;
          v43 = *(_QWORD *)(v42 + 24);
          v41[33] &= ~1u;
          *((_QWORD *)v41 + 3) = v43;
        }
      }
      if ( (v37 & 2) != 0 )
        v28->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
  }
  v90 = 0LL;
  v44 = 0LL;
  v91 = 0LL;
  v45 = 0;
  v93 = 0LL;
  v89 = 0LL;
  while ( 1 )
  {
    v46 = 0LL;
    if ( !v28->ProcessorCount )
      break;
    p_SharedReadyQueue = (volatile __int64 **)&v28->ProcessorEntries[0].SharedReadyQueue;
    ProcessorCount = v28->ProcessorCount;
    do
    {
      if ( *p_SharedReadyQueue > v44 && (!v46 || *p_SharedReadyQueue < v46) )
        v46 = *p_SharedReadyQueue;
      p_SharedReadyQueue += 5;
      --ProcessorCount;
    }
    while ( ProcessorCount );
    if ( !v46 )
      break;
    v49 = (struct _KPRCB *)&v28->SharedReadyLockQueues[v45];
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v49->CurrentThread = (_KTHREAD *)v46;
      *(_QWORD *)&v49->MxCsr = 0LL;
      v50 = (struct _KPRCB **)_InterlockedExchange64(v46, (__int64)v49);
      if ( v50 )
        KxWaitForLockOwnerShip(v49, v50);
    }
    else
    {
      v51 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v46, 0LL) )
      {
        do
        {
          if ( (++v51 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v49) )
          {
            HvlNotifyLongSpinWait(v51);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v46 );
      }
    }
    ++v45;
    v44 = v46;
  }
LABEL_90:
  memset_0(v99, 0, sizeof(v99));
  KiStartReadyQueueEnumeratorForRescheduleContext(v99, v28);
  while ( (int)KiAdvanceReadyQueueEnumerator((struct _KI_READY_QUEUE_ENUMERATOR *)v99, (__int64)&v89) >= 0 )
  {
    v52 = v91;
    if ( v91->AffinityVersion == KiCpuSetSequence || (v91->MiscFlags & 8) != 0 )
    {
      if ( v89 )
      {
        v54 = v90;
      }
      else
      {
        SchedulingGroup = v91->SchedulingGroup;
        v54 = v90;
        v52 = v91;
        if ( SchedulingGroup )
        {
          ScbOffset = v90->ScbOffset;
          v15 = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + ScbOffset) == 0LL;
          v56 = (struct _KI_RESCHEDULE_CONTEXT *)((char *)SchedulingGroup + ScbOffset);
          v89 = v56;
          if ( !v15
            && v91->Priority < 16
            && (*((_DWORD *)&v91->0 + 1) & 0x200) == 0
            && !v91->WaitBlock[3].SpareLong
            && v91->WaitIrql != 1 )
          {
            Next = v56;
            v58 = (struct _KSCB *)v56;
            while ( ((__int64)Next->ProcessorEntries[2].CompareThread & 2) == 0 )
            {
              Next = (struct _KI_RESCHEDULE_CONTEXT *)Next[1].SharedReadyLockQueues[0].Queue.Next;
              if ( !Next )
              {
                do
                {
                  NewThread_high = HIDWORD(v56->ProcessorEntries[2].NewThread);
                  if ( NewThread_high )
                    break;
                  v56 = (struct _KI_RESCHEDULE_CONTEXT *)v56[1].SharedReadyLockQueues[0].Queue.Next;
                }
                while ( v56 );
                if ( !NewThread_high )
                  goto LABEL_111;
                break;
              }
            }
            KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v99, v91);
            v52->NextProcessor = v54->Number;
            KiAddThreadToScbQueue(v54, v58);
            if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
              EtwTraceReadyQueueInsertion((__int64)v52, v54->Number, 2, 0LL);
            continue;
          }
        }
        else
        {
          v89 = 0LL;
        }
      }
LABEL_111:
      v60 = KiCanLocalReadyThreadBeScheduledToRescheduleContext(v28, (unsigned __int64)v52, (unsigned __int64)v54, v93);
      if ( v60 )
      {
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v99, v52);
        KiScheduleThreadToRescheduleContext(&v28->ProcessorCount, (__int64)v52, (__int64)v60, 0, (__int64)&v92);
        goto LABEL_90;
      }
    }
    else
    {
      KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v99, v91);
      KiEnterDeferredReadyState((__int64)v52);
      v52->SwapListEntry = v92;
      v92.Next = (struct _SINGLE_LIST_ENTRY *)&v52->216;
    }
  }
  v61 = 0LL;
  v62 = 0;
  while ( 1 )
  {
    v63 = 0LL;
    if ( !v28->ProcessorCount )
      break;
    v64 = (volatile signed __int64 **)&v28->ProcessorEntries[0].SharedReadyQueue;
    v65 = v28->ProcessorCount;
    do
    {
      if ( *v64 > v61 && (!v63 || *v64 < v63) )
        v63 = *v64;
      v64 += 5;
      --v65;
    }
    while ( v65 );
    if ( !v63 )
      break;
    v66 = (volatile signed __int64 **)&v28->SharedReadyLockQueues[v62];
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64(v63, 0LL);
      goto LABEL_130;
    }
    _m_prefetchw(v66);
    v67 = (__int64)*v66;
    if ( !*v66 )
    {
      if ( v66 == (volatile signed __int64 **)_InterlockedCompareExchange64(v66[1], 0LL, (signed __int64)v66) )
        goto LABEL_130;
      v67 = KxWaitForLockChainValid((__int64 *)&v28->SharedReadyLockQueues[v62]);
    }
    *v66 = 0LL;
    v68 = (__int64)v66[1];
    if ( (((unsigned __int8)v68 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v67 + 8), v68)) & 4) != 0 )
    {
      KeWakeAddressAll(v67 + 8, v68);
      ++v62;
      v61 = v63;
    }
    else
    {
LABEL_130:
      ++v62;
      v61 = v63;
    }
  }
  v69 = v96;
  v70 = KiCommitRescheduleContext(&v28->ProcessorCount, v96, 1u, &v92);
  v71 = v92.Next;
  v72 = v70;
  if ( v92.Next || v70 )
  {
    v73 = v98;
    KiReleasePrcbLocksForIsolationUnit(v98);
    if ( v72 )
    {
      for ( j = 0; j < v28->ProcessorCount; ++j )
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v28->ProcessorEntries + 32 * j + 8 * j),
          v69,
          0LL,
          0LL);
      KiFlushSoftwareInterruptBatch((char *)&v69->DeferredDispatchInterrupts);
    }
    if ( v71 )
      KiReadyDeferredReadyList(v69, &v92);
    KiAcquirePrcbLocksForIsolationUnit(v69, 0LL, v73);
  }
  else
  {
    v73 = v98;
    v74 = 0LL;
    v75 = 0LL;
    v76 = *v98;
    v77 = *v98 & 0xFFFFFFFFFFFFFFFEuLL;
    v97 = v77;
    if ( (v76 & 1) != 0 )
    {
      v74 = *(_QWORD *)(v77 + 36440) + 8LL;
      v75 = **(unsigned __int8 **)(v77 + 36440);
      LODWORD(v78) = 0;
      if ( **(_BYTE **)(v77 + 36440) )
      {
        do
        {
          if ( v77 == *(_QWORD *)v74 )
          {
            v78 = (unsigned int)(v78 + 1);
            if ( (_DWORD)v78 == 1 )
              v77 = -1LL;
            else
              v77 = *(&v97 + v78);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v74 + 48LL), 0LL);
          }
          v74 += 8LL;
          --v75;
        }
        while ( v75 );
      }
      *v73 &= ~1uLL;
    }
  }
  NextThread = (__int64)v69->NextThread;
  if ( !NextThread || (_KTHREAD *)NextThread == v69->IdleThread )
  {
    IdleState = v69->IdleState;
    if ( (IdleState & 1) != 0 )
      __fastfail(0x21u);
    if ( KiForceParkingConfiguration && (IdleState & 8) != 0 )
      KiDisarmForceParkDutyCyclingIfNecessary(v69, 0LL, v74, v75);
    if ( (v69->IdleState & 0x10) != 0 )
    {
      if ( !NextThread )
        KiReleasePrcbLocksForIsolationUnit(v73);
      return (_KTHREAD *)NextThread;
    }
    KiReleasePrcbLocksForIsolationUnit(v73);
    NextThread = 0LL;
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v81) )
    {
      if ( v69->SearchContexts[0] )
      {
        NextThread = KiSearchForNewThreadsWithinL0SearchContext(v69);
        if ( NextThread )
          goto LABEL_168;
      }
      if ( v69->SearchContexts[1] )
      {
        NextThread = KiSearchForNewThreadsWithinL1SearchContext(v69, v73);
        if ( NextThread )
          goto LABEL_168;
      }
    }
    else
    {
      v82 = 0;
      SearchGenerations = v69->SearchGenerations;
      do
      {
        v84 = (__int64)*(SearchGenerations - 2);
        if ( !v84 )
          break;
        NextThread = KiSearchForNewThreadsWithinSearchContext(v69, v73, v84, *SearchGenerations);
        if ( NextThread )
          break;
        ++v82;
        ++SearchGenerations;
      }
      while ( v82 < 2 );
LABEL_168:
      if ( NextThread )
        return (_KTHREAD *)NextThread;
    }
    SchedulerSubNode = v69->SchedulerSubNode;
    GroupSetMember = v69->GroupSetMember;
    if ( (GroupSetMember & SchedulerSubNode->NonParkedSet) != 0
      && (GroupSetMember & SchedulerSubNode->SoftParkRequestSet) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(&SchedulerSubNode->ParkLock);
      KiAcquirePrcbLocksForIsolationUnit(v69, 1LL, v73);
      NextThread = (__int64)v69->NextThread;
      if ( NextThread && (_KTHREAD *)NextThread != v69->IdleThread )
      {
        KiDowngradeIsolationUnitLockHandle(v73, 0LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          SchedulerSubNode->ParkLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SchedulerSubNode->ParkLock, retaddr);
        return (_KTHREAD *)NextThread;
      }
      KiParkCurrentProcessor(v69, 2, 1);
    }
    NextThread = 0LL;
    if ( !a2 )
    {
      KiAcquirePrcbLocksForIsolationUnit(v69, 0LL, v73);
      return v69->NextThread;
    }
  }
  return (_KTHREAD *)NextThread;
}
