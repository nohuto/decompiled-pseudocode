/*
 * XREFs of ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140313EBC (KiSoftParkElectionUnparkProcessor.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiSetSchedulerAssistPriority @ 0x1402F6DA4 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x1403188E0 (KiQueryEffectivePriorityThread.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     KiSetProcessorIdle @ 0x140447AB0 (KiSetProcessorIdle.c)
 *     KiSetProcessorIdle_LockFree @ 0x1404EFA64 (KiSetProcessorIdle_LockFree.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x1404F06D4 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     KiSetProcessorIdle_WithLock @ 0x1405C3754 (KiSetProcessorIdle_WithLock.c)
 */

unsigned __int8 __fastcall KiCommitRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        char a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _KTHREAD *NewThread; // rsi
  char v5; // r10
  _KPRCB *Prcb; // rdi
  _KTHREAD *CompareThread; // r13
  _KTHREAD *NextThread; // rcx
  BOOL v11; // ebp
  _KTHREAD *CurrentThread; // rcx
  _KTHREAD *SmtIsolationThread; // r11
  char v14; // r8
  unsigned __int8 v15; // bl
  char v16; // al
  unsigned __int8 v17; // cl
  volatile signed __int32 *v18; // rdx
  char v19; // r9
  unsigned int v20; // edx
  _KPRIORITY_STATE *v21; // r11
  char v22; // al
  _BYTE *v23; // rcx
  _KTHREAD *v24; // rax
  unsigned int v25; // ebx
  int IsEnabledNoReportingNoInline; // eax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 GroupSetMember; // r8
  _KTHREAD *v32; // rax
  unsigned __int8 result; // al
  unsigned __int8 *PriorityState; // rsi
  unsigned __int8 v35; // bl
  char v36; // al
  unsigned __int8 v37; // cl
  volatile signed __int32 *SchedulerAssist; // rdx
  int v39; // ecx
  unsigned __int32 v40; // eax
  unsigned int v41; // ecx
  char Priority; // al
  unsigned __int8 *v43; // rax
  _KTHREAD *v44; // r13
  unsigned __int8 v45; // bl
  char v46; // al
  unsigned __int8 v47; // cl
  volatile signed __int32 *v48; // rdx
  int v49; // ecx
  unsigned __int32 v50; // eax
  unsigned int v51; // ecx
  char v52; // al
  char v53; // al
  char v54; // r9
  unsigned int CurrentRunTime; // edx
  _KPRIORITY_STATE *v56; // r8
  char v57; // cl
  __int64 v58; // rcx
  char v59; // r9
  unsigned int ExpectedRunTime; // edx
  _KPRIORITY_STATE *v61; // r8
  char v62; // cl
  _KTHREAD *v63; // rcx
  __int64 v64; // r9
  char v65; // al
  char EffectivePriorityThread; // al
  int v67; // ecx
  unsigned __int32 v68; // eax
  unsigned int v69; // ecx
  char v70; // al
  unsigned __int8 v71; // dl
  volatile signed __int32 *v72; // rcx
  char v73; // r9
  unsigned int v74; // edx
  _KPRIORITY_STATE *v75; // r8
  char v76; // al
  _BYTE *v77; // rcx
  _KTHREAD *IdleThread; // rax
  char v79; // al
  int v80; // edx
  int v81; // [rsp+20h] [rbp-58h]
  unsigned __int8 *v82; // [rsp+28h] [rbp-50h]
  _KTHREAD *v83; // [rsp+30h] [rbp-48h]
  char v84; // [rsp+80h] [rbp+8h]
  unsigned __int8 *v85; // [rsp+80h] [rbp+8h]

  NewThread = a1->NewThread;
  v5 = a3;
  Prcb = a1->Prcb;
  CompareThread = a1->CompareThread;
  if ( NewThread == (_KTHREAD *)-1LL )
    return 0;
  if ( NewThread == (_KTHREAD *)-2LL )
  {
    PriorityState = (unsigned __int8 *)Prcb->PriorityState;
    v35 = *PriorityState;
    if ( (CompareThread->Header.Size & 4) != 0 )
      v36 = v35 ^ KiQueryEffectivePriorityThread(a1->CompareThread, a1->Prcb);
    else
      v36 = CompareThread->Priority ^ v35;
    v37 = (v35 ^ v36 & 0x7F) & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
    *PriorityState = v37;
    SchedulerAssist = (volatile signed __int32 *)Prcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v39 = v37 & 0x7F;
      if ( CompareThread == Prcb->IdleThread )
        v39 = KiVpThreadSystemWorkPriority;
      v40 = (unsigned __int32)*SchedulerAssist >> 8;
      if ( v39 != (unsigned __int8)v40 )
      {
        if ( v39 > (unsigned __int8)v40 )
          v41 = (v39 - (unsigned __int8)v40) << 8;
        else
          v41 = (v39 << 8) - ((unsigned __int8)v40 << 8);
        _InterlockedAdd(SchedulerAssist, v41);
      }
    }
    v54 = 64;
    CurrentRunTime = CompareThread->CurrentRunTime;
    v56 = Prcb->PriorityState;
    if ( CurrentRunTime <= CompareThread->ExpectedRunTime )
      CurrentRunTime = CompareThread->ExpectedRunTime;
    if ( CurrentRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
      v54 = 0;
    v57 = v56[64].AllFields ^ (v56[64].AllFields ^ CompareThread->BamQosLevel) & 7;
    v56[64].AllFields = v54 | (v57 ^ (v57 ^ (8 * CompareThread->HardwareFeedbackClass)) & 0x38) & 0xBF;
    KiUpdateThreadQosGroupingSummaries(Prcb);
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v58) )
      KiUpdateStandbyStealSummaryForStandbyChange(Prcb);
    return 0;
  }
  NextThread = Prcb->NextThread;
  v11 = 0;
  v81 = 0;
  if ( NextThread )
  {
    if ( (unsigned __int8)KiIsPrcbThread(NextThread) )
    {
      v11 = v63 == Prcb->IdleThread;
    }
    else
    {
      if ( (a1->___u5[0] & 2) == 0 )
        v63->Preempted = 1;
      if ( (a1->___u5[0] & 1) == 0 )
        KiInsertDeferredReadyList(v64, v63);
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
    v81 = 1;
    LOBYTE(v11) = CurrentThread == Prcb->IdleThread;
  }
  if ( v11 != ((Prcb->IdleState & 1) == 0) )
    __fastfail(0x21u);
  if ( !NewThread )
  {
    v43 = (unsigned __int8 *)Prcb->PriorityState;
    Prcb->NextThread = 0LL;
    v44 = a1->CompareThread;
    v85 = v43;
    v45 = *v43;
    if ( (v44->Header.Size & 4) != 0 )
    {
      EffectivePriorityThread = KiQueryEffectivePriorityThread(v44, Prcb);
      v5 = a3;
      v46 = EffectivePriorityThread ^ v45;
    }
    else
    {
      v46 = v44->Priority ^ v45;
    }
    v47 = (v45 ^ v46 & 0x7F) & 0x7F | ((unsigned __int8)(*((_DWORD *)&v44->0 + 1) >> 1) << 7);
    *v85 = v47;
    v48 = (volatile signed __int32 *)Prcb->SchedulerAssist;
    if ( v48 )
    {
      v49 = v47 & 0x7F;
      if ( v44 == Prcb->IdleThread )
        v49 = KiVpThreadSystemWorkPriority;
      v50 = (unsigned __int32)*v48 >> 8;
      if ( v49 != (unsigned __int8)v50 )
      {
        if ( v49 > (unsigned __int8)v50 )
          v51 = (v49 - (unsigned __int8)v50) << 8;
        else
          v51 = (v49 << 8) - ((unsigned __int8)v50 << 8);
        _InterlockedAdd(v48, v51);
      }
    }
    v59 = 64;
    ExpectedRunTime = v44->CurrentRunTime;
    v61 = Prcb->PriorityState;
    if ( ExpectedRunTime <= v44->ExpectedRunTime )
      ExpectedRunTime = v44->ExpectedRunTime;
    if ( ExpectedRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
      v59 = 0;
    v62 = v61[64].AllFields ^ (v61[64].AllFields ^ v44->BamQosLevel) & 7;
    v61[64].AllFields = v59 | (v62 ^ (v62 ^ (8 * v44->HardwareFeedbackClass)) & 0x38) & 0xBF;
    if ( a1->CompareThread != Prcb->IdleThread )
    {
      if ( v11 )
        KiSetProcessorIdle(Prcb, 0LL, 0LL);
      goto LABEL_27;
    }
    v25 = !v11;
    if ( a2 != Prcb )
      goto LABEL_24;
    goto LABEL_86;
  }
  SmtIsolationThread = Prcb->SmtIsolationThread;
  v83 = SmtIsolationThread;
  v14 = 2 * (*((_BYTE *)&a1->0 + 1) & 1) + 124;
  v84 = v14;
  v82 = (unsigned __int8 *)Prcb->PriorityState;
  v15 = *v82;
  if ( NewThread == SmtIsolationThread )
  {
    if ( (CompareThread->Header.Size & 4) != 0 )
    {
      v79 = KiQueryEffectivePriorityThread(CompareThread, Prcb);
      v5 = a3;
      SmtIsolationThread = v83;
      v70 = v79 ^ v15;
    }
    else
    {
      v70 = CompareThread->Priority ^ v15;
    }
    v71 = (v15 ^ v70 & 0x7F) & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
    *v82 = v71;
    v72 = (volatile signed __int32 *)Prcb->SchedulerAssist;
    if ( v72 )
    {
      v80 = v71 & 0x7F;
      if ( CompareThread == Prcb->IdleThread )
        v80 = KiVpThreadSystemWorkPriority;
      KiSetSchedulerAssistPriority(v72, v80, 0);
    }
    v73 = 64;
    v74 = CompareThread->CurrentRunTime;
    v75 = Prcb->PriorityState + 64;
    if ( v74 <= CompareThread->ExpectedRunTime )
      v74 = CompareThread->ExpectedRunTime;
    if ( v74 < KiDynamicHeteroCpuPolicyExpectedCycles )
      v73 = 0;
    v76 = v75->AllFields ^ (v75->AllFields ^ CompareThread->BamQosLevel) & 7;
    v75->AllFields = v73 | (v76 ^ (v76 ^ (8 * CompareThread->HardwareFeedbackClass)) & 0x38) & 0xBF;
    v77 = Prcb->SchedulerAssist;
    IdleThread = Prcb->IdleThread;
    Prcb->NextThread = SmtIsolationThread;
    if ( v77 )
      v77[16] = SmtIsolationThread == IdleThread;
    if ( SmtIsolationThread->WaitBlockFill6[68] == 1 || (v84 & 2) != 0 )
      SmtIsolationThread->ReadyTime += MEMORY[0xFFFFF78000000320] - SmtIsolationThread->WaitBlock[2].SpareLong;
    SmtIsolationThread->WaitBlockFill6[68] = 3;
  }
  else
  {
    if ( (NewThread->Header.Size & 4) != 0 )
    {
      v65 = KiQueryEffectivePriorityThread(NewThread, Prcb);
      v5 = a3;
      v14 = v84;
      v16 = v65 ^ v15;
    }
    else
    {
      v16 = NewThread->Priority ^ v15;
    }
    v17 = (v15 ^ v16 & 0x7F) & 0x7F | ((unsigned __int8)(*((_DWORD *)&NewThread->0 + 1) >> 1) << 7);
    *v82 = v17;
    v18 = (volatile signed __int32 *)Prcb->SchedulerAssist;
    if ( v18 )
    {
      v67 = v17 & 0x7F;
      if ( NewThread == Prcb->IdleThread )
        v67 = KiVpThreadSystemWorkPriority;
      v68 = (unsigned __int32)*v18 >> 8;
      if ( v67 != (unsigned __int8)v68 )
      {
        if ( v67 <= (unsigned __int8)v68 )
          v69 = (v67 << 8) - ((unsigned __int8)v68 << 8);
        else
          v69 = (v67 - (unsigned __int8)v68) << 8;
        _InterlockedAdd(v18, v69);
      }
    }
    v19 = 64;
    v20 = NewThread->CurrentRunTime;
    v21 = Prcb->PriorityState + 64;
    if ( v20 <= NewThread->ExpectedRunTime )
      v20 = NewThread->ExpectedRunTime;
    if ( v20 < KiDynamicHeteroCpuPolicyExpectedCycles )
      v19 = 0;
    v22 = v21->AllFields ^ (v21->AllFields ^ NewThread->BamQosLevel) & 7;
    v21->AllFields = v19 | (v22 ^ (v22 ^ (8 * NewThread->HardwareFeedbackClass)) & 0x38) & 0xBF;
    v23 = Prcb->SchedulerAssist;
    v24 = Prcb->IdleThread;
    Prcb->NextThread = NewThread;
    if ( v23 )
      v23[16] = NewThread == v24;
    if ( NewThread->WaitBlockFill6[68] == 1 || (v14 & 2) != 0 )
      NewThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NewThread->WaitBlock[2].SpareLong;
    NewThread->WaitBlockFill6[68] = 3;
  }
  if ( NewThread == Prcb->IdleThread )
  {
    v25 = !v11;
    if ( a2 != Prcb )
    {
LABEL_24:
      IsEnabledNoReportingNoInline = Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline();
      v27 = v25;
      v28 = 1LL;
      goto LABEL_25;
    }
LABEL_86:
    if ( (v5 & 1) != 0 )
      v25 = 0;
    goto LABEL_24;
  }
  if ( v11 )
  {
    IsEnabledNoReportingNoInline = Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline();
    v27 = 0LL;
    v28 = 0LL;
LABEL_25:
    if ( IsEnabledNoReportingNoInline )
      KiSetProcessorIdle_LockFree(Prcb, v28, v27);
    else
      KiSetProcessorIdle_WithLock(Prcb, v28, v27);
  }
LABEL_27:
  KiUpdateThreadQosGroupingSummaries(Prcb);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v29) )
  {
    SchedulerSubNode = Prcb->SchedulerSubNode;
    GroupSetMember = Prcb->GroupSetMember;
    v32 = Prcb->NextThread;
    if ( v32 )
    {
      if ( v32 == Prcb->IdleThread )
        LOBYTE(v32) = 0;
      else
        LOBYTE(v32) = v32 != Prcb->DpcDelegateThread
                   && v32 != Prcb->SmtIsolationThread
                   && (*(_BYTE *)&Prcb->PriorityState->0 & 0x7Fu) >= 0x10;
    }
    if ( ((SchedulerSubNode->StealableStandbyThreads & GroupSetMember) != 0) != (_BYTE)v32 )
    {
      if ( (_BYTE)v32 )
        _InterlockedOr64((volatile signed __int64 *)&SchedulerSubNode->StealableStandbyThreads, GroupSetMember);
      else
        _InterlockedAnd64((volatile signed __int64 *)&SchedulerSubNode->StealableStandbyThreads, ~GroupSetMember);
    }
  }
  if ( a2 != Prcb && v81 )
  {
    v52 = a1->___u6[0];
    if ( v11 )
      v53 = v52 | 8;
    else
      v53 = v52 | 0x10;
    a1->___u6[0] = v53;
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( NewThread != Prcb->IdleThread && a2 != Prcb && a2->SchedulerAssist )
  {
    Priority = NewThread->Priority;
    a1->___u6[0] |= 4u;
    a1->KickPriority = Priority;
    result = 1;
  }
  if ( (a3 & 2) != 0 )
  {
    if ( NewThread )
    {
      _InterlockedIncrement16(&NewThread->KeReferenceCount);
      a1->___u6[0] |= 3u;
      return 1;
    }
  }
  return result;
}
