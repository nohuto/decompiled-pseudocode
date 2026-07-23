/*
 * XREFs of KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402D8CB0 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAdvanceReadyQueueEnumerator @ 0x1402D9050 (KiAdvanceReadyQueueEnumerator.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1403C0D20 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_KSHARED_READY_QUEUE *__fastcall KiSearchForNewThreadsForRescheduleContext(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        _QWORD *a2)
{
  volatile __int64 *v3; // r8
  int v4; // esi
  volatile __int64 *v6; // rdi
  _KSHARED_READY_QUEUE **p_SharedReadyQueue; // rcx
  __int64 ProcessorCount; // rdx
  _KI_SHARED_READY_QUEUE_LOCK_HANDLE *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r9
  struct _KPRCB *v13; // rdi
  __int64 ScbOffset; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  struct _KSCB *v19; // rsi
  struct _KPRCB *v20; // rdi
  volatile signed __int64 *v21; // r8
  int v22; // esi
  _KSHARED_READY_QUEUE *result; // rax
  volatile signed __int64 *v24; // rbx
  _KSHARED_READY_QUEUE **v25; // rcx
  __int64 v26; // rdx
  _KI_SHARED_READY_QUEUE_LOCK_HANDLE *v27; // rdi
  __int64 Next; // rax
  __int64 Lock; // rdx
  struct _KSCB *v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  struct _KPRCB *v32; // [rsp+40h] [rbp-C0h]
  struct _KSHARED_READY_QUEUE *v33; // [rsp+48h] [rbp-B8h]
  _BYTE v34[240]; // [rsp+50h] [rbp-B0h] BYREF

  v32 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v33 = 0LL;
  v31 = 0LL;
  while ( 1 )
  {
    v6 = 0LL;
    if ( !a1->ProcessorCount )
      break;
    p_SharedReadyQueue = &a1->ProcessorEntries[0].SharedReadyQueue;
    ProcessorCount = a1->ProcessorCount;
    do
    {
      if ( *p_SharedReadyQueue > (_KSHARED_READY_QUEUE *)v3 && (!v6 || *p_SharedReadyQueue < (_KSHARED_READY_QUEUE *)v6) )
        v6 = (volatile __int64 *)*p_SharedReadyQueue;
      p_SharedReadyQueue += 5;
      --ProcessorCount;
    }
    while ( ProcessorCount );
    if ( !v6 )
      break;
    v9 = &a1->SharedReadyLockQueues[v4];
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v9->Queue.Lock = (unsigned __int64 *volatile)v6;
      v9->Queue.Next = 0LL;
      v10 = _InterlockedExchange64(v6, (__int64)v9);
      if ( v10 )
        KxWaitForLockOwnerShip(v9, v10);
    }
    else
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v6 );
      }
    }
    ++v4;
    v3 = v6;
  }
LABEL_23:
  memset_0(v34, 0, sizeof(v34));
  KiStartReadyQueueEnumeratorForRescheduleContext(v34, a1);
  while ( (int)KiAdvanceReadyQueueEnumerator((struct _KI_READY_QUEUE_ENUMERATOR *)v34, (__int64)&v31) >= 0 )
  {
    if ( MEMORY[0x238] == KiCpuSetSequence || (MEMORY[0x74] & 8) != 0 )
    {
      if ( v31 )
      {
        v13 = v32;
      }
      else
      {
        v13 = v32;
        if ( MEMORY[0x68] )
        {
          ScbOffset = v32->ScbOffset;
          v15 = MEMORY[0x68] + ScbOffset == 0;
          v16 = MEMORY[0x68] + ScbOffset;
          v31 = v16;
          if ( !v15 )
          {
            v17 = 0;
            if ( MEMORY[0xC3] < 16 && (MEMORY[0x78] & 0x200) == 0 && !MEMORY[0x1E4] && MEMORY[0x186] != 1 )
            {
              v18 = v16;
              v19 = (struct _KSCB *)v16;
              while ( (*(_BYTE *)(v18 + 112) & 2) == 0 )
              {
                v18 = *(_QWORD *)(v18 + 416);
                if ( !v18 )
                {
                  do
                  {
                    v17 += *(_DWORD *)(v16 + 124);
                    if ( v17 )
                      break;
                    v16 = *(_QWORD *)(v16 + 416);
                  }
                  while ( v16 );
                  if ( !v17 )
                    goto LABEL_44;
                  break;
                }
              }
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v34, 0LL);
              MEMORY[0x218] = v13->Number;
              KiAddThreadToScbQueue(v13, v19);
              if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
                EtwTraceReadyQueueInsertion(0LL, v13->Number, 2LL, 0LL);
              continue;
            }
          }
        }
        else
        {
          v31 = 0LL;
        }
      }
LABEL_44:
      v20 = KiCanLocalReadyThreadBeScheduledToRescheduleContext(a1, 0LL, v13, v33, v30);
      if ( v20 )
      {
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v34, 0LL);
        KiScheduleThreadToRescheduleContext((_DWORD)a1, 0, (_DWORD)v20, 0, (__int64)a2);
        goto LABEL_23;
      }
    }
    else
    {
      KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v34, 0LL);
      KiEnterDeferredReadyState(0LL);
      MEMORY[0xD8] = *a2;
      *a2 = 216LL;
    }
  }
  v21 = 0LL;
  v22 = 0;
  while ( 1 )
  {
    result = (_KSHARED_READY_QUEUE *)a1->ProcessorCount;
    v24 = 0LL;
    if ( !(_BYTE)result )
      return result;
    v25 = &a1->ProcessorEntries[0].SharedReadyQueue;
    v26 = a1->ProcessorCount;
    do
    {
      result = *v25;
      if ( *v25 > (_KSHARED_READY_QUEUE *)v21 && (!v24 || result < (_KSHARED_READY_QUEUE *)v24) )
        v24 = (volatile signed __int64 *)*v25;
      v25 += 5;
      --v26;
    }
    while ( v26 );
    if ( !v24 )
      return result;
    v27 = &a1->SharedReadyLockQueues[v22];
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64(v24, 0LL);
      goto LABEL_63;
    }
    _m_prefetchw(v27);
    Next = (__int64)v27->Queue.Next;
    if ( !v27->Queue.Next )
    {
      if ( v27 == (_KI_SHARED_READY_QUEUE_LOCK_HANDLE *)_InterlockedCompareExchange64(
                                                          (volatile signed __int64 *)v27->Queue.Lock,
                                                          0LL,
                                                          (signed __int64)v27) )
        goto LABEL_63;
      Next = KxWaitForLockChainValid(&a1->SharedReadyLockQueues[v22]);
    }
    v27->Queue.Next = 0LL;
    Lock = (__int64)v27->Queue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
    {
      KeWakeAddressAll(Next + 8, Lock, v21, v12);
      ++v22;
      v21 = v24;
    }
    else
    {
LABEL_63:
      ++v22;
      v21 = v24;
    }
  }
}
