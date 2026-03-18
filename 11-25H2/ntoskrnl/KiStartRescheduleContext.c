/*
 * XREFs of KiStartRescheduleContext @ 0x140253DF0
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
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140254190 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
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
