/*
 * XREFs of KiStartRescheduleContext @ 0x140285360
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
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140285700 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 */

char __fastcall KiStartRescheduleContext(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  unsigned __int64 v4; // rcx
  int v5; // ebx
  struct _KPRCB **v6; // r13
  unsigned int v7; // esi
  int v8; // ebp
  unsigned __int8 *v9; // r14
  struct _KPRCB *v10; // rdx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  ULONG_PTR NextThread; // r8
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  unsigned __int8 IdleState; // al
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r8
  unsigned __int64 NonParkedSet; // rax
  unsigned int i; // edx
  __int64 v22; // r8
  _BYTE *v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h]
  struct _KPRCB *v28; // [rsp+88h] [rbp+10h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  v4 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v5 = *a2 & 1;
  v29 = *a2 & 1LL;
  v26 = v4;
  if ( v5 )
  {
    v6 = (struct _KPRCB **)(*(_QWORD *)(v4 + 36440) + 8LL);
    v7 = **(unsigned __int8 **)(v4 + 36440);
    v8 = 0;
    if ( !**(_BYTE **)(v4 + 36440) )
      goto LABEL_15;
  }
  else
  {
    v6 = (struct _KPRCB **)&v26;
    v7 = 1;
    v8 = 0;
  }
  v9 = (unsigned __int8 *)(a1 + 48);
  v27 = v7;
  do
  {
    *((_OWORD *)v9 - 2) = 0LL;
    *((_OWORD *)v9 - 1) = 0LL;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 - 1) = -1LL;
    v9[4] = 63;
    v10 = *v6;
    *((_QWORD *)v9 - 4) = *v6;
    *((_QWORD *)v9 - 3) = 0LL;
    v28 = v10;
    SharedReadyQueue = v10->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      IdleState = v10->IdleState;
      if ( (IdleState & 0x10) == 0
        || ((SchedulerSubNode = v10->SchedulerSubNode, KiForceParkingConfiguration) && (IdleState & 0x20) != 0
          ? (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet)
          : (NonParkedSet = SchedulerSubNode->NonParkedSet),
            (NonParkedSet & SharedReadyQueue->Affinity) == 0) )
      {
        *((_QWORD *)v9 - 3) = v10->SharedReadyQueue;
      }
    }
    NextThread = (ULONG_PTR)v10->NextThread;
    *((_QWORD *)v9 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v10->CurrentThread;
      *((_QWORD *)v9 - 2) = NextThread;
    }
    if ( v10->NextThread == (_KTHREAD *)NextThread )
    {
      *v9 |= 4u;
    }
    else
    {
      v13 = *v9;
      if ( v10 == KeGetCurrentPrcb() )
        v14 = v13 | 4;
      else
        v14 = v13 & 0xFB;
      *v9 = v14;
    }
    KiTryToUpdateVPBackingThreadPriorityBeforePreemption(NextThread);
    v15 = ((v28->IdleState & 1) == 0) | *v9 & 0xFE;
    *v9 = v15;
    v16 = v15 ^ (v15 ^ (v28->PriorityState->AllFields >> 6)) & 2;
    *v9 = v16;
    if ( ((v16 >> 1) & 1) > v8 )
      v8 = (v16 >> 1) & 1;
    v9 += 40;
    ++v6;
    --v27;
  }
  while ( v27 );
  v4 = v26;
  v5 = v29;
LABEL_15:
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 4) = v8;
  *(_BYTE *)a1 = v7;
  if ( v5 )
    LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)(v4 + 36440) + 1LL);
  else
    LOBYTE(v17) = 0;
  *(_BYTE *)(a1 + 1) = v17;
  if ( v8 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v17 = *(_QWORD *)(a1 + 40LL * i + 16);
      v22 = a1 + 40LL * i;
      if ( *(_QWORD *)(v22 + 32) != *(_QWORD *)(v17 + 36480) )
      {
        v2 = v22 + 16;
        break;
      }
    }
    if ( v7 )
    {
      v23 = (_BYTE *)(a1 + 48);
      v24 = v7;
      do
      {
        LOBYTE(v17) = (_BYTE)v23 - 32;
        if ( v23 - 32 != (_BYTE *)v2 )
        {
          *((_QWORD *)v23 - 2) = *(_QWORD *)(v2 + 16);
          LOBYTE(v17) = *(_BYTE *)(v2 + 32) | 0x20;
          *v23 = v17;
        }
        v23 += 40;
        --v24;
      }
      while ( v24 );
    }
  }
  return v17;
}
