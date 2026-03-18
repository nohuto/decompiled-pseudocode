/*
 * XREFs of KiSearchForNewThreadsForRescheduleContext @ 0x140314410
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140352350 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAdvanceReadyQueueEnumerator @ 0x140352A60 (KiAdvanceReadyQueueEnumerator.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1403D3C70 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  struct _KPRCB *v9; // rcx
  struct _KPRCB **v10; // rdx
  unsigned int v11; // ebx
  struct _KPRCB *v12; // rdi
  __int64 ScbOffset; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  struct _KSCB *v18; // rsi
  struct _KPRCB *v19; // rdi
  volatile signed __int64 *v20; // r8
  int v21; // esi
  _KSHARED_READY_QUEUE *result; // rax
  volatile signed __int64 *v23; // rbx
  _KSHARED_READY_QUEUE **v24; // rcx
  __int64 v25; // rdx
  _KI_SHARED_READY_QUEUE_LOCK_HANDLE *v26; // rdi
  __int64 Next; // rax
  __int64 Lock; // rdx
  struct _KSCB *v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _KPRCB *v31; // [rsp+40h] [rbp-C0h]
  struct _KSHARED_READY_QUEUE *v32; // [rsp+48h] [rbp-B8h]
  _BYTE v33[240]; // [rsp+50h] [rbp-B0h] BYREF

  v31 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v32 = 0LL;
  v30 = 0LL;
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
    v9 = (struct _KPRCB *)&a1->SharedReadyLockQueues[v4];
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v9->CurrentThread = (_KTHREAD *)v6;
      *(_QWORD *)&v9->MxCsr = 0LL;
      v10 = (struct _KPRCB **)_InterlockedExchange64(v6, (__int64)v9);
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
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
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
  memset_0(v33, 0, sizeof(v33));
  KiStartReadyQueueEnumeratorForRescheduleContext(v33, a1);
  while ( (int)KiAdvanceReadyQueueEnumerator((struct _KI_READY_QUEUE_ENUMERATOR *)v33, (__int64)&v30) >= 0 )
  {
    if ( MEMORY[0x238] == KiCpuSetSequence || (MEMORY[0x74] & 8) != 0 )
    {
      if ( v30 )
      {
        v12 = v31;
      }
      else
      {
        v12 = v31;
        if ( MEMORY[0x68] )
        {
          ScbOffset = v31->ScbOffset;
          v14 = MEMORY[0x68] + ScbOffset == 0;
          v15 = MEMORY[0x68] + ScbOffset;
          v30 = v15;
          if ( !v14 )
          {
            v16 = 0;
            if ( MEMORY[0xC3] < 16 && (MEMORY[0x78] & 0x200) == 0 && !MEMORY[0x1E4] && MEMORY[0x186] != 1 )
            {
              v17 = v15;
              v18 = (struct _KSCB *)v15;
              while ( (*(_BYTE *)(v17 + 112) & 2) == 0 )
              {
                v17 = *(_QWORD *)(v17 + 416);
                if ( !v17 )
                {
                  do
                  {
                    v16 += *(_DWORD *)(v15 + 124);
                    if ( v16 )
                      break;
                    v15 = *(_QWORD *)(v15 + 416);
                  }
                  while ( v15 );
                  if ( !v16 )
                    goto LABEL_44;
                  break;
                }
              }
              KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v33, 0LL);
              MEMORY[0x218] = v12->Number;
              KiAddThreadToScbQueue(v12, v18);
              if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
                EtwTraceReadyQueueInsertion(0LL, v12->Number, 2, 0LL);
              continue;
            }
          }
        }
        else
        {
          v30 = 0LL;
        }
      }
LABEL_44:
      v19 = KiCanLocalReadyThreadBeScheduledToRescheduleContext(a1, 0LL, v12, v32, v29);
      if ( v19 )
      {
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v33, 0LL);
        KiScheduleThreadToRescheduleContext((_DWORD)a1, 0, (_DWORD)v19, 0, (__int64)a2);
        goto LABEL_23;
      }
    }
    else
    {
      KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(v33, 0LL);
      KiEnterDeferredReadyState(0LL);
      MEMORY[0xD8] = *a2;
      *a2 = 216LL;
    }
  }
  v20 = 0LL;
  v21 = 0;
  while ( 1 )
  {
    result = (_KSHARED_READY_QUEUE *)a1->ProcessorCount;
    v23 = 0LL;
    if ( !(_BYTE)result )
      return result;
    v24 = &a1->ProcessorEntries[0].SharedReadyQueue;
    v25 = a1->ProcessorCount;
    do
    {
      result = *v24;
      if ( *v24 > (_KSHARED_READY_QUEUE *)v20 && (!v23 || result < (_KSHARED_READY_QUEUE *)v23) )
        v23 = (volatile signed __int64 *)*v24;
      v24 += 5;
      --v25;
    }
    while ( v25 );
    if ( !v23 )
      return result;
    v26 = &a1->SharedReadyLockQueues[v21];
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64(v23, 0LL);
      goto LABEL_63;
    }
    _m_prefetchw(v26);
    Next = (__int64)v26->Queue.Next;
    if ( !v26->Queue.Next )
    {
      if ( v26 == (_KI_SHARED_READY_QUEUE_LOCK_HANDLE *)_InterlockedCompareExchange64(
                                                          (volatile signed __int64 *)v26->Queue.Lock,
                                                          0LL,
                                                          (signed __int64)v26) )
        goto LABEL_63;
      Next = KxWaitForLockChainValid((__int64 *)&a1->SharedReadyLockQueues[v21]);
    }
    v26->Queue.Next = 0LL;
    Lock = (__int64)v26->Queue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
    {
      KeWakeAddressAll(Next + 8, Lock);
      ++v21;
      v20 = v23;
    }
    else
    {
LABEL_63:
      ++v21;
      v20 = v23;
    }
  }
}
