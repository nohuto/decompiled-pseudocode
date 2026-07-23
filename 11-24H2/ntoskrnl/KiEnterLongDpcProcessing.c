/*
 * XREFs of KiEnterLongDpcProcessing @ 0x1402A7594
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402A6840 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAcquireMultiplePrcbLocks @ 0x1402A7970 (KiAcquireMultiplePrcbLocks.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x14064C1BC (EtwTraceLongDpcMitigationEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall KiEnterLongDpcProcessing(__int64 a1, _KTHREAD *a2, __int64 a3, __int64 a4)
{
  char Priority; // r12
  _KTHREAD *v5; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned int v9; // ecx
  $C82B617CBFAFB7514E50AF91648DC6C0 v10; // di
  __int64 *Prcbs; // r8
  unsigned __int64 v12; // rbx
  __int64 ProcessorCount; // rdx
  _KCORE_CONTROL_BLOCK *v14; // rax
  unsigned __int64 *v15; // r8
  int v16; // r9d
  _KPRCBFLAG v17; // eax
  _KTHREAD *v18; // rax
  bool v19; // al
  _KTHREAD *v20; // rcx
  BOOL v21; // r15d
  _KTHREAD *v22; // rax
  int v23; // r15d
  unsigned int v24; // edi
  _KI_RESCHEDULE_CONTEXT *v25; // r14
  int v26; // eax
  unsigned int v27; // edi
  char v28; // dl
  __int64 v29; // r15
  char v30; // r13
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rcx
  int v34; // edx
  char v35; // si
  unsigned __int64 v36; // rcx
  int v37; // edx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int64 i; // r15
  unsigned __int64 v42; // [rsp+30h] [rbp-28h] BYREF
  __int64 v43; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-18h] BYREF
  _KTHREAD *v45; // [rsp+48h] [rbp-10h]
  unsigned __int64 v46; // [rsp+A8h] [rbp+50h] BYREF
  int v47; // [rsp+B0h] [rbp+58h]
  struct _SINGLE_LIST_ENTRY v48; // [rsp+B8h] [rbp+60h] BYREF

  v46 = (unsigned __int64)a2;
  Priority = 0;
  v5 = a2;
  if ( a2 == *(_KTHREAD **)(a1 + 14392) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v39 = *SchedulerAssist;
    do
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange(SchedulerAssist, v39 & 0xFFDFFFFF, v39);
    }
    while ( v40 != v39 );
    if ( (v39 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  v9 = 0;
  v10 = **($C82B617CBFAFB7514E50AF91648DC6C0 **)(a1 + 56);
  v43 = a1;
  if ( *(unsigned __int8 *)&v10 >> 7 )
    v9 = *(unsigned __int8 *)&v10 >> 7;
  Prcbs = 0LL;
  v12 = v9 | a1 & 0xFFFFFFFFFFFFFFFEuLL;
  ProcessorCount = 0LL;
  v42 = v12;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v14 = *(_KCORE_CONTROL_BLOCK **)(a1 + 36440);
      ProcessorCount = v14->ProcessorCount;
      Prcbs = (__int64 *)v14->Prcbs;
    }
  }
  else
  {
    Prcbs = &v43;
    ProcessorCount = 1LL;
  }
  KiAcquireMultiplePrcbLocks(Prcbs, ProcessorCount, Prcbs, a4);
  if ( ((**(_BYTE **)(a1 + 56) ^ *(_BYTE *)&v10) & 0x80u) != 0 )
  {
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a1, 0, &v42);
    v12 = v42;
  }
  v17.PrcbFlags = *(volatile int *)(a1 + 236);
  if ( (v17.PrcbFlags & 0x800) == 0 )
    *(_DWORD *)(a1 + 236) = v17.PrcbFlags | 0x800;
  v19 = 0;
  if ( v5 != *(_KTHREAD **)(a1 + 24) )
  {
    v18 = *(_KTHREAD **)(a1 + 14392);
    if ( v18 )
    {
      if ( v5 != v18
        && v5->Priority >= 16
        && (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, &v5->Affinity->Count) )
      {
        v19 = 1;
      }
    }
  }
  v20 = *(_KTHREAD **)(a1 + 16);
  v21 = v19;
  v22 = *(_KTHREAD **)(a1 + 14392);
  v23 = 2 * v21;
  v45 = v20;
  LOBYTE(v24) = v23;
  if ( !v22 || v20 == v22 )
    goto LABEL_38;
  if ( v20 )
    Priority = v20->Priority;
  v25 = *(_KI_RESCHEDULE_CONTEXT **)(a1 + 14312);
  v48.Next = 0LL;
  memset_0(v25, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)v25, &v42);
  v26 = KiScheduleThreadToRescheduleContext((_DWORD)v25, *(_QWORD *)(a1 + 14392), a1, 0, (__int64)&v48) & 1;
  v47 = v23 | (4 * v26);
  if ( v26 )
    KiSearchForNewThreadsForRescheduleContext(v25, &v48);
  v27 = 0;
  v28 = 0;
  if ( (WORD2(xmmword_140FC6B50) & 0x400) != 0 )
    v27 = 2;
  v29 = 0LL;
  if ( v25->ProcessorCount )
  {
    v30 = 0;
    do
    {
      v30 |= KiCommitRescheduleContextEntry(
               (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v25->ProcessorEntries + 32 * v29 + 8 * (unsigned int)v29),
               (struct _KPRCB *)a1,
               v27,
               &v48);
      v29 = (unsigned int)(v29 + 1);
    }
    while ( (unsigned int)v29 < v25->ProcessorCount );
    v28 = v30;
    v5 = (_KTHREAD *)v46;
  }
  if ( v25->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = v25->ProcessorEntries[0].Prcb->CoreControlBlock;
    v32 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v32;
    if ( v32 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v33 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v24 = v47 | (8 * (v28 & 1)) | 1;
  v46 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) == 0 )
  {
    v15 = &v46;
    v34 = 1;
    do
LABEL_34:
      _InterlockedAnd64((volatile signed __int64 *)(v15[--v34] + 48), 0LL);
    while ( v34 );
    goto LABEL_35;
  }
  v15 = (unsigned __int64 *)(*(_QWORD *)(v33 + 36440) + 8LL);
  v34 = **(unsigned __int8 **)(v33 + 36440);
  if ( **(_BYTE **)(v33 + 36440) )
    goto LABEL_34;
LABEL_35:
  v12 = 0LL;
  v42 = 0LL;
  if ( v24 >= 8 )
  {
    for ( i = 0LL; (unsigned int)i < v25->ProcessorCount; i = (unsigned int)(i + 1) )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v25->ProcessorEntries + 32 * i + 8 * (unsigned int)i),
        (struct _KPRCB *)a1,
        0LL,
        0LL);
    KiFlushSoftwareInterruptBatch(a1 + 13784);
  }
  if ( !v48.Next )
    goto LABEL_44;
  KiReadyDeferredReadyList(a1, &v48);
LABEL_38:
  v35 = v24;
  if ( !v12 )
  {
LABEL_44:
    v35 = v24;
    goto LABEL_42;
  }
  v36 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v44 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) == 0 )
  {
    v15 = &v44;
    v37 = 1;
    do
LABEL_41:
      _InterlockedAnd64((volatile signed __int64 *)(v15[--v37] + 48), 0LL);
    while ( v37 );
    goto LABEL_42;
  }
  v15 = (unsigned __int64 *)(*(_QWORD *)(v36 + 36440) + 8LL);
  v37 = **(unsigned __int8 **)(v36 + 36440);
  if ( **(_BYTE **)(v36 + 36440) )
    goto LABEL_41;
LABEL_42:
  _disable();
  if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 && (v24 & 3) != 0 )
  {
    LOBYTE(v15) = v5->Priority;
    LOBYTE(v16) = Priority;
    EtwTraceLongDpcMitigationEvent((_DWORD)v5, (_DWORD)v45, (_DWORD)v15, v16, v24 & 1, (v35 & 2) != 0);
  }
  return (v35 & 2) != 0;
}
