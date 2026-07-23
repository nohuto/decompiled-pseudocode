/*
 * XREFs of ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404E02F0 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetProcessorIdle @ 0x1404E10A8 (KiSetProcessorIdle.c)
 */

unsigned __int8 __fastcall KiCommitRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        char a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _KTHREAD *NewThread; // rdi
  char v5; // r10
  _KPRCB *Prcb; // rbx
  struct _KPRCB *v7; // r13
  _KTHREAD *CompareThread; // rbp
  unsigned __int8 result; // al
  unsigned __int8 *PriorityState; // rdi
  char EffectivePriorityThread; // al
  unsigned __int8 v13; // cl
  volatile signed __int32 *SchedulerAssist; // rdx
  int v15; // ecx
  unsigned __int32 v16; // eax
  unsigned int v17; // ecx
  __int64 CurrentRunTime; // rdx
  _KPRIORITY_STATE *v19; // r8
  char v20; // al
  char v21; // al
  unsigned int ExpectedRunTime; // ecx
  char v23; // cl
  _KTHREAD *NextThread; // rcx
  BOOL v25; // r15d
  _KTHREAD *CurrentThread; // rcx
  unsigned __int8 *v27; // r14
  _KTHREAD *v28; // rbp
  char v29; // al
  unsigned __int8 v30; // cl
  volatile signed __int32 *v31; // r8
  int v32; // ecx
  unsigned __int32 v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  _KPRIORITY_STATE *v36; // r8
  char v37; // al
  char v38; // al
  unsigned int v39; // ecx
  char v40; // cl
  _KTHREAD *SmtIsolationThread; // r14
  char v42; // r13
  char Priority; // al
  unsigned __int8 v44; // cl
  volatile signed __int32 *v45; // r8
  int v46; // ecx
  unsigned __int32 v47; // eax
  unsigned int v48; // ecx
  char v49; // al
  char v50; // al
  unsigned int v51; // ecx
  char v52; // cl
  _BYTE *v53; // rcx
  _KTHREAD *IdleThread; // rax
  char v55; // al
  unsigned __int8 v56; // cl
  volatile signed __int32 *v57; // r8
  int v58; // ecx
  unsigned __int32 v59; // eax
  unsigned int v60; // ecx
  char v61; // al
  char v62; // al
  unsigned int v63; // ecx
  char v64; // cl
  _BYTE *v65; // rcx
  _KTHREAD *v66; // rax
  _BOOL8 v67; // r8
  char v68; // al
  char v69; // al
  unsigned __int8 *v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+70h] [rbp+8h]

  NewThread = a1->NewThread;
  v5 = a3;
  Prcb = a1->Prcb;
  v7 = a2;
  CompareThread = a1->CompareThread;
  if ( NewThread == (_KTHREAD *)-1LL )
    return 0;
  if ( NewThread == (_KTHREAD *)-2LL )
  {
    PriorityState = (unsigned __int8 *)Prcb->PriorityState;
    if ( (CompareThread->Header.Size & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(CompareThread, Prcb);
    else
      EffectivePriorityThread = CompareThread->Priority;
    v13 = EffectivePriorityThread & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
    *PriorityState = v13;
    SchedulerAssist = (volatile signed __int32 *)Prcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v15 = v13 & 0x7F;
      if ( CompareThread == Prcb->IdleThread )
        v15 = KiVpThreadSystemWorkPriority;
      v16 = (unsigned __int32)*SchedulerAssist >> 8;
      if ( v15 != (unsigned __int8)v16 )
      {
        if ( v15 <= (unsigned __int8)v16 )
          v17 = (v15 << 8) - ((unsigned __int8)v16 << 8);
        else
          v17 = (v15 - (unsigned __int8)v16) << 8;
        _InterlockedAdd(SchedulerAssist, v17);
      }
    }
    CurrentRunTime = CompareThread->CurrentRunTime;
    v19 = Prcb->PriorityState;
    v20 = (CompareThread->BamQosLevel ^ v19[64].AllFields) & 7 ^ v19[64].AllFields;
    v21 = (v20 ^ (8 * CompareThread->HardwareFeedbackClass)) & 0x38 ^ v20;
    ExpectedRunTime = CompareThread->ExpectedRunTime;
    if ( (unsigned int)CurrentRunTime <= ExpectedRunTime )
      CurrentRunTime = ExpectedRunTime;
    v23 = 64;
    if ( (unsigned int)CurrentRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
      v23 = 0;
    v19[64].AllFields = v23 | v21 & 0xBF;
    KiUpdateThreadQosGroupingSummaries(Prcb, CurrentRunTime, v19, a4);
    KiUpdateStandbyStealSummaryForStandbyChange(Prcb);
    return 0;
  }
  NextThread = Prcb->NextThread;
  v25 = 0;
  v71 = 0;
  if ( NextThread )
  {
    if ( NextThread->Process == (_KPROCESS *)&KiInitialProcess )
    {
      v25 = NextThread == Prcb->IdleThread;
    }
    else
    {
      if ( (a1->___u5[0] & 2) == 0 )
        NextThread->Preempted = 1;
      if ( (a1->___u5[0] & 1) == 0 )
        KiInsertDeferredReadyList(a4, NextThread);
    }
  }
  else
  {
    CurrentThread = Prcb->CurrentThread;
    if ( (!CurrentThread || CurrentThread->Process != (_KPROCESS *)&KiInitialProcess)
      && CurrentThread->WaitBlockFill6[68] == 2
      && (a1->___u5[0] & 2) == 0 )
    {
      CurrentThread->Preempted = 1;
    }
    v71 = 1;
    LOBYTE(v25) = CurrentThread == Prcb->IdleThread;
  }
  if ( v25 != ((Prcb->IdleState & 1) == 0) )
    __fastfail(0x21u);
  if ( NewThread )
  {
    SmtIsolationThread = Prcb->SmtIsolationThread;
    v42 = 2 * *((_BYTE *)&a1->0 + 1);
    v70 = (unsigned __int8 *)Prcb->PriorityState;
    if ( NewThread == SmtIsolationThread )
    {
      if ( (CompareThread->Header.Size & 4) != 0 )
      {
        Priority = KiQueryEffectivePriorityThread(CompareThread, Prcb);
        v5 = a3;
      }
      else
      {
        Priority = CompareThread->Priority;
      }
      v44 = Priority & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
      *v70 = v44;
      v45 = (volatile signed __int32 *)Prcb->SchedulerAssist;
      if ( v45 )
      {
        v46 = v44 & 0x7F;
        if ( CompareThread == Prcb->IdleThread )
          v46 = KiVpThreadSystemWorkPriority;
        v47 = (unsigned __int32)*v45 >> 8;
        if ( v46 != (unsigned __int8)v47 )
        {
          if ( v46 <= (unsigned __int8)v47 )
            v48 = (v46 << 8) - ((unsigned __int8)v47 << 8);
          else
            v48 = (v46 - (unsigned __int8)v47) << 8;
          _InterlockedAdd(v45, v48);
        }
      }
      v35 = CompareThread->CurrentRunTime;
      v36 = Prcb->PriorityState;
      v49 = (CompareThread->BamQosLevel ^ v36[64].AllFields) & 7 ^ v36[64].AllFields;
      v50 = (v49 ^ (8 * CompareThread->HardwareFeedbackClass)) & 0x38 ^ v49;
      v51 = CompareThread->ExpectedRunTime;
      if ( (unsigned int)v35 <= v51 )
        v35 = v51;
      v52 = 64;
      if ( (unsigned int)v35 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v52 = 0;
      v36[64].AllFields = v52 | v50 & 0xBF;
      v53 = Prcb->SchedulerAssist;
      IdleThread = Prcb->IdleThread;
      Prcb->NextThread = SmtIsolationThread;
      if ( v53 )
        v53[16] = SmtIsolationThread == IdleThread;
      if ( SmtIsolationThread->WaitBlockFill6[68] == 1 || (v42 & 2) != 0 )
        SmtIsolationThread->ReadyTime += MEMORY[0xFFFFF78000000320] - SmtIsolationThread->WaitBlock[2].SpareLong;
      SmtIsolationThread->WaitBlockFill6[68] = 3;
    }
    else
    {
      if ( (NewThread->Header.Size & 4) != 0 )
      {
        v55 = KiQueryEffectivePriorityThread(NewThread, Prcb);
        v5 = a3;
      }
      else
      {
        v55 = NewThread->Priority;
      }
      v56 = v55 & 0x7F | ((unsigned __int8)(*((_DWORD *)&NewThread->0 + 1) >> 1) << 7);
      *v70 = v56;
      v57 = (volatile signed __int32 *)Prcb->SchedulerAssist;
      if ( v57 )
      {
        v58 = v56 & 0x7F;
        if ( NewThread == Prcb->IdleThread )
          v58 = KiVpThreadSystemWorkPriority;
        v59 = (unsigned __int32)*v57 >> 8;
        if ( v58 != (unsigned __int8)v59 )
        {
          if ( v58 <= (unsigned __int8)v59 )
            v60 = (v58 << 8) - ((unsigned __int8)v59 << 8);
          else
            v60 = (v58 - (unsigned __int8)v59) << 8;
          _InterlockedAdd(v57, v60);
        }
      }
      v35 = NewThread->CurrentRunTime;
      v36 = Prcb->PriorityState;
      v61 = (NewThread->BamQosLevel ^ v36[64].AllFields) & 7 ^ v36[64].AllFields;
      v62 = (v61 ^ (8 * NewThread->HardwareFeedbackClass)) & 0x38 ^ v61;
      v63 = NewThread->ExpectedRunTime;
      if ( (unsigned int)v35 <= v63 )
        v35 = v63;
      v64 = 64;
      if ( (unsigned int)v35 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v64 = 0;
      v36[64].AllFields = v64 | v62 & 0xBF;
      v65 = Prcb->SchedulerAssist;
      v66 = Prcb->IdleThread;
      Prcb->NextThread = NewThread;
      if ( v65 )
        v65[16] = NewThread == v66;
      if ( NewThread->WaitBlockFill6[68] == 1 || (v42 & 2) != 0 )
        NewThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NewThread->WaitBlock[2].SpareLong;
      NewThread->WaitBlockFill6[68] = 3;
    }
    if ( NewThread != Prcb->IdleThread )
    {
      if ( v25 )
        KiSetProcessorIdle(Prcb, 0LL, 0LL, a4);
      v7 = a2;
      goto LABEL_106;
    }
    v7 = a2;
    goto LABEL_99;
  }
  v27 = (unsigned __int8 *)Prcb->PriorityState;
  Prcb->NextThread = 0LL;
  v28 = a1->CompareThread;
  if ( (v28->Header.Size & 4) != 0 )
  {
    v29 = KiQueryEffectivePriorityThread(a1->CompareThread, Prcb);
    v5 = a3;
  }
  else
  {
    v29 = v28->Priority;
  }
  v30 = v29 & 0x7F | ((unsigned __int8)(*((_DWORD *)&v28->0 + 1) >> 1) << 7);
  *v27 = v30;
  v31 = (volatile signed __int32 *)Prcb->SchedulerAssist;
  if ( v31 )
  {
    v32 = v30 & 0x7F;
    if ( v28 == Prcb->IdleThread )
      v32 = KiVpThreadSystemWorkPriority;
    v33 = (unsigned __int32)*v31 >> 8;
    if ( v32 != (unsigned __int8)v33 )
    {
      if ( v32 <= (unsigned __int8)v33 )
        v34 = (v32 << 8) - ((unsigned __int8)v33 << 8);
      else
        v34 = (v32 - (unsigned __int8)v33) << 8;
      _InterlockedAdd(v31, v34);
    }
  }
  v35 = v28->CurrentRunTime;
  v36 = Prcb->PriorityState;
  v37 = (v28->BamQosLevel ^ v36[64].AllFields) & 7 ^ v36[64].AllFields;
  v38 = (v37 ^ (8 * v28->HardwareFeedbackClass)) & 0x38 ^ v37;
  v39 = v28->ExpectedRunTime;
  if ( (unsigned int)v35 <= v39 )
    v35 = v39;
  v40 = 64;
  if ( (unsigned int)v35 < KiDynamicHeteroCpuPolicyExpectedCycles )
    v40 = 0;
  v36[64].AllFields = v40 | v38 & 0xBF;
  if ( a1->CompareThread == Prcb->IdleThread )
  {
LABEL_99:
    v67 = !v25;
    if ( v7 == Prcb && (v5 & 1) != 0 )
      v67 = 0LL;
    KiSetProcessorIdle(Prcb, 1LL, v67, a4);
    goto LABEL_106;
  }
  if ( v25 )
    KiSetProcessorIdle(Prcb, 0LL, 0LL, a4);
LABEL_106:
  KiUpdateThreadQosGroupingSummaries(Prcb, v35, v36, a4);
  KiUpdateStandbyStealSummaryForStandbyChange(Prcb);
  if ( !v71 || v7 == Prcb )
  {
    result = 0;
  }
  else
  {
    v68 = 8;
    if ( !v25 )
      v68 = 16;
    a1->___u6[0] |= v68;
    result = 1;
  }
  if ( NewThread != Prcb->IdleThread && v7 != Prcb && v7->SchedulerAssist )
  {
    v69 = NewThread->Priority;
    a1->___u6[0] |= 4u;
    a1->KickPriority = v69;
    result = 1;
  }
  if ( (a3 & 2) != 0 && NewThread )
  {
    _InterlockedIncrement16(&NewThread->KeReferenceCount);
    a1->___u6[0] |= 3u;
    return 1;
  }
  return result;
}
