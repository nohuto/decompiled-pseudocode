/*
 * XREFs of KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140254190 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KeIsForceParkingEnabled @ 0x140313D80 (KeIsForceParkingEnabled.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiScheduleThreadToIdleIsolationUnit(
        struct _KPRCB *a1,
        unsigned __int64 a2,
        char a3,
        _QWORD *a4,
        struct _SINGLE_LIST_ENTRY *a5,
        __int64 a6)
{
  char v6; // bp
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  struct _KPRCB *v8; // r14
  unsigned __int64 v9; // rbx
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  _KISOLATION_WIDTH v14; // r15d
  struct _KPRCB **v15; // r8
  unsigned int v16; // r12d
  int v17; // r13d
  __int64 v18; // r14
  $5B693F68BB5D498102B36F1BF4333747 *v19; // rbx
  struct _KPRCB *v20; // rbp
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  ULONG_PTR NextThread; // rcx
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // al
  __int64 v28; // r9
  unsigned int j; // edx
  unsigned __int64 v30; // r13
  struct _SINGLE_LIST_ENTRY *v31; // r15
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  char v34; // r12
  _KPRCB *v35; // rbp
  char *v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  _KTHREAD *IdleThread; // r13
  char v40; // al
  int v41; // r11d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r11
  char v47; // cl
  bool v48; // al
  char v49; // r12
  unsigned int v50; // ebp
  unsigned int k; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v53; // al
  _QWORD *v54; // r10
  __int64 v55; // rcx
  unsigned __int64 v56; // r9
  unsigned __int64 *v57; // r8
  int v58; // edx
  __int64 result; // rax
  char v60; // al
  _KPRCB *v61; // rbp
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  __int64 SingleTargetIndex; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  void **p_SchedulerAssist; // rdx
  int v67; // r8d
  void **v68; // r9
  int v69; // eax
  bool v70; // zf
  _DWORD *v71; // rcx
  __int64 Number; // r15
  _KTHREAD *NewThread; // rcx
  __int64 v74; // r8
  char v75; // cl
  bool v76; // al
  unsigned int v77; // r11d
  char v78; // r12
  _KPRCB *Prcb; // rbp
  char *v80; // r9
  __int64 v81; // rcx
  unsigned __int64 v82; // rax
  char v83; // cl
  bool v84; // al
  int v85; // r11d
  _KTHREAD *SmtIsolationThread; // r13
  unsigned __int64 v87; // rdx
  char v88; // al
  char v89; // al
  char v90; // cl
  char v91; // al
  char *v92; // r8
  unsigned int i; // edx
  char *v94; // r9
  unsigned __int8 *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int64 *v101; // [rsp+20h] [rbp-68h]
  __int64 v102; // [rsp+28h] [rbp-60h]
  unsigned __int64 v103; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v104; // [rsp+38h] [rbp-50h]
  unsigned __int64 v106; // [rsp+98h] [rbp+10h] BYREF
  char v107; // [rsp+A0h] [rbp+18h]
  _QWORD *v108; // [rsp+A8h] [rbp+20h]

  v108 = a4;
  v107 = a3;
  v106 = a2;
  v6 = a3;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v8 = a1;
  v9 = *a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v104 = v9;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  v11 = *a4;
  v12 = 0;
  v13 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  v103 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  v14 = v11 & 1;
  if ( v14 )
  {
    v15 = (struct _KPRCB **)(*(_QWORD *)(v13 + 36440) + 8LL);
    v101 = (unsigned __int64 *)v15;
    v16 = **(unsigned __int8 **)(v13 + 36440);
    v17 = 0;
    if ( !**(_BYTE **)(v13 + 36440) )
      goto LABEL_15;
  }
  else
  {
    v15 = (struct _KPRCB **)&v103;
    v16 = 1;
    v101 = &v103;
    v17 = 0;
  }
  v18 = v106;
  v19 = &StaticRescheduleContext->ProcessorEntries[0].32;
  v102 = v16;
  do
  {
    *(_OWORD *)&v19[-16].0 = 0LL;
    *(_OWORD *)&v19[-8].0 = 0LL;
    *(_QWORD *)&v19->0 = 0LL;
    *(_QWORD *)&v19[-4].0 = -1LL;
    v19[2].AllCompareThreadStateFlags = 63;
    v20 = *v15;
    *(_QWORD *)&v19[-16].0 = *v15;
    *(_QWORD *)&v19[-12].0 = 0LL;
    SharedReadyQueue = v20->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      if ( (v20->IdleState & 0x10) == 0
        || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue, v20->SchedulerSubNode)
         && (v20->IdleState & 0x20) != 0
          ? (v44 = ~*(_QWORD *)(v42 + 104))
          : (v44 = *(_QWORD *)(v42 + 80)),
            (v44 & *(_QWORD *)(v43 + 712)) == 0) )
      {
        *(_QWORD *)&v19[-12].0 = v20->SharedReadyQueue;
      }
    }
    NextThread = (ULONG_PTR)v20->NextThread;
    *(_QWORD *)&v19[-8].0 = NextThread;
    if ( !NextThread )
    {
      NextThread = (ULONG_PTR)v20->CurrentThread;
      *(_QWORD *)&v19[-8].0 = NextThread;
    }
    if ( v20->NextThread == (_KTHREAD *)NextThread )
    {
      v19->AllCompareThreadStateFlags |= 4u;
    }
    else
    {
      AllCompareThreadStateFlags = v19->AllCompareThreadStateFlags;
      if ( v20 == KeGetCurrentPrcb() )
        v24 = AllCompareThreadStateFlags | 4;
      else
        v24 = AllCompareThreadStateFlags & 0xFB;
      v19->AllCompareThreadStateFlags = v24;
    }
    KiTryToUpdateVPBackingThreadPriorityBeforePreemption(NextThread, (__int64)v20, (__int64)v15, v18);
    v25 = ((v20->IdleState & 1) == 0) | v19->AllCompareThreadStateFlags & 0xFE;
    v19->AllCompareThreadStateFlags = v25;
    v26 = v25 ^ (v25 ^ (v20->PriorityState->AllFields >> 6)) & 2;
    v19->AllCompareThreadStateFlags = v26;
    if ( ((v26 >> 1) & 1) > v17 )
      v17 = (v26 >> 1) & 1;
    v15 = (struct _KPRCB **)(v101 + 1);
    v19 += 20;
    ++v101;
    --v102;
  }
  while ( v102 );
  v13 = v103;
  v8 = a1;
  v9 = v104;
  v6 = v107;
LABEL_15:
  StaticRescheduleContext->MaximumThreadIsolationWidth = v17;
  StaticRescheduleContext->IsolationWidth = v14;
  StaticRescheduleContext->ProcessorCount = v16;
  if ( v14 )
    v27 = *(_BYTE *)(*(_QWORD *)(v13 + 36440) + 1LL);
  else
    v27 = 0;
  StaticRescheduleContext->ScanStart = v27;
  if ( v17 )
  {
    v92 = 0LL;
    for ( i = 0; i < v16; ++i )
    {
      v94 = (char *)StaticRescheduleContext + 40 * i;
      if ( *((_QWORD *)v94 + 4) != *(_QWORD *)(*((_QWORD *)v94 + 2) + 36480LL) )
      {
        v92 = v94 + 16;
        break;
      }
    }
    if ( v16 )
    {
      v95 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v96 = v16;
      do
      {
        if ( v95 - 32 != (unsigned __int8 *)v92 )
        {
          *((_QWORD *)v95 - 2) = *((_QWORD *)v92 + 2);
          *v95 = v92[32] | 0x20;
        }
        v95 += 40;
        --v96;
      }
      while ( v96 );
    }
  }
  v28 = 0LL;
  for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
  {
    if ( StaticRescheduleContext->ProcessorEntries[j].Prcb == (_KPRCB *)v9 )
    {
      v28 = (__int64)&StaticRescheduleContext->ProcessorEntries[j];
      break;
    }
  }
  v30 = v106;
  v31 = a5;
  v32 = (*(_DWORD *)(v106 + 120) >> 1) & 1;
  if ( v32 >= ((*(unsigned __int8 *)(v28 + 32) >> 1) & 1u) )
  {
    if ( v32 )
    {
      v77 = 0;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        v78 = v107;
        do
        {
          Prcb = StaticRescheduleContext->ProcessorEntries[v77].Prcb;
          v80 = (char *)StaticRescheduleContext + 40 * v77;
          v81 = *((_QWORD *)v80 + 5);
          v82 = v81 - 1;
          if ( Prcb == (_KPRCB *)v9 )
          {
            if ( v82 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v81) )
            {
              if ( (v80[49] & 1) != 0 )
                *(_DWORD *)(v99 + 116) |= 2u;
              *(_BYTE *)(v99 + 565) = 1;
              KiInsertDeferredReadyList(v31, v99);
            }
            v83 = v80[48] & 0xFE;
            *((_QWORD *)v80 + 4) = v30;
            v80[48] = v83;
            v84 = (*(_DWORD *)(v30 + 120) & 2) != 0;
            *((_QWORD *)v80 + 5) = v30;
            v80[48] = (v83 & 0xFD ^ (2 * v84)) & 0xC3 | 4;
            v80[49] ^= (v78 ^ v80[49]) & 1;
            if ( !(unsigned __int8)KiIsPrcbThread(v30) )
              *(_DWORD *)(v30 + 536) = Prcb->Number;
          }
          else
          {
            SmtIsolationThread = Prcb->SmtIsolationThread;
            if ( v82 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v81) )
            {
              if ( (v80[49] & 1) != 0 )
                *(_DWORD *)(v100 + 116) |= 2u;
              *(_BYTE *)(v100 + 565) = 1;
              KiInsertDeferredReadyList(v31, v100);
            }
            v87 = v106;
            v88 = v80[48] & 0xFE;
            v80[48] = v88;
            *((_QWORD *)v80 + 4) = v87;
            v89 = (v88 & 0xFD ^ (2 * ((*(_DWORD *)(v87 + 120) & 2) != 0))) & 0xE3 | 4;
            v90 = v89 | 0x20;
            v91 = v89 & 0xDF;
            if ( (_KTHREAD *)v87 == SmtIsolationThread )
              v90 = v91;
            v80[48] = v90;
            v80[49] &= ~1u;
            *((_QWORD *)v80 + 5) = SmtIsolationThread;
            if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
              SmtIsolationThread->NextProcessor = Prcb->Number;
            v30 = v106;
          }
          v77 = v85 + 1;
        }
        while ( v77 < StaticRescheduleContext->ProcessorCount );
      }
    }
    else
    {
      v45 = *(_QWORD *)(v28 + 24);
      v46 = *(_QWORD *)v28;
      if ( (unsigned __int64)(v45 - 1) <= 0xFFFFFFFFFFFFFFFCuLL && *(_UNKNOWN **)(v45 + 544) != &KiInitialProcess )
      {
        if ( (*(_BYTE *)(v28 + 33) & 1) != 0 )
          *(_DWORD *)(v45 + 116) |= 2u;
        *(_BYTE *)(v45 + 565) = 1;
        KiInsertDeferredReadyList(v31, v45);
      }
      v47 = *(_BYTE *)(v28 + 32) & 0xFE;
      *(_QWORD *)(v28 + 16) = v30;
      *(_BYTE *)(v28 + 32) = v47;
      v48 = (*(_DWORD *)(v30 + 120) & 2) != 0;
      *(_QWORD *)(v28 + 24) = v30;
      *(_BYTE *)(v28 + 32) = (v47 & 0xFD ^ (2 * v48)) & 0xC3 | 4;
      *(_BYTE *)(v28 + 33) ^= (v6 ^ *(_BYTE *)(v28 + 33)) & 1;
      if ( *(_UNKNOWN **)(v30 + 544) != &KiInitialProcess )
        *(_DWORD *)(v30 + 536) = *(_DWORD *)(v46 + 36);
    }
  }
  else
  {
    v33 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      v34 = v107;
      do
      {
        v35 = StaticRescheduleContext->ProcessorEntries[v33].Prcb;
        v36 = (char *)StaticRescheduleContext + 40 * v33;
        v37 = *((_QWORD *)v36 + 5);
        v38 = v37 - 1;
        if ( v35 == (_KPRCB *)v9 )
        {
          if ( v38 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v37) )
          {
            if ( (v36[49] & 1) != 0 )
              *(_DWORD *)(v98 + 116) |= 2u;
            *(_BYTE *)(v98 + 565) = 1;
            KiInsertDeferredReadyList(v31, v98);
          }
          v75 = v36[48] & 0xFE;
          *((_QWORD *)v36 + 4) = v30;
          v36[48] = v75;
          v76 = (*(_DWORD *)(v30 + 120) & 2) != 0;
          *((_QWORD *)v36 + 5) = v30;
          v36[48] = (v75 & 0xFD ^ (2 * v76)) & 0xC3 | 4;
          v36[49] ^= (v34 ^ v36[49]) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(v30) )
            *(_DWORD *)(v30 + 536) = v35->Number;
        }
        else
        {
          IdleThread = v35->IdleThread;
          if ( v38 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v37) )
          {
            if ( (v36[49] & 1) != 0 )
              *(_DWORD *)(v97 + 116) |= 2u;
            *(_BYTE *)(v97 + 565) = 1;
            KiInsertDeferredReadyList(v31, v97);
          }
          v40 = v36[48] | 1;
          *((_QWORD *)v36 + 4) = IdleThread;
          v36[48] = v40;
          v36[48] = (v40 & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
          v36[49] &= ~1u;
          *((_QWORD *)v36 + 5) = IdleThread;
          if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
            IdleThread->NextProcessor = v35->Number;
          v30 = v106;
        }
        v33 = v41 + 1;
      }
      while ( v33 < StaticRescheduleContext->ProcessorCount );
    }
  }
  v49 = 0;
  StaticRescheduleContext->MaximumThreadIsolationWidth = v32;
  v50 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
    v50 = 2;
  for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
    v49 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k),
             v8,
             v50,
             v31);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v53 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v53;
    if ( v53 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v54 = v108;
  v55 = *v108;
  v56 = *v108 & 0xFFFFFFFFFFFFFFFEuLL;
  v106 = v56;
  if ( (v55 & 1) != 0 )
  {
    v57 = (unsigned __int64 *)(*(_QWORD *)(v56 + 36440) + 8LL);
    v58 = **(unsigned __int8 **)(v56 + 36440);
    if ( !**(_BYTE **)(v56 + 36440) )
      goto LABEL_58;
  }
  else
  {
    v57 = &v106;
    v58 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v57[--v58] + 48), 0LL);
  while ( v58 );
LABEL_58:
  result = 0LL;
  *v54 = 0LL;
  *(_QWORD *)(v30 + 64) = 0LL;
  if ( v49 && StaticRescheduleContext->ProcessorCount )
  {
    do
    {
      v60 = StaticRescheduleContext->ProcessorEntries[v12].___u6[0];
      v61 = StaticRescheduleContext->ProcessorEntries[v12].Prcb;
      if ( (v60 & 0x10) == 0 && ((v60 & 8) == 0 || !v61->IdleHalt) )
        goto LABEL_65;
      TargetType = v8->DeferredDispatchInterrupts.TargetType;
      if ( TargetType )
      {
        if ( TargetType != 1 )
        {
          p_MultipleTargetAffinity = &v8->DeferredDispatchInterrupts.MultipleTargetAffinity;
          goto LABEL_75;
        }
        SingleTargetIndex = v8->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( (_DWORD)SingleTargetIndex != v61->Number )
        {
          p_MultipleTargetAffinity = &v8->DeferredDispatchInterrupts.MultipleTargetAffinity;
          v8->DeferredDispatchInterrupts.TargetType = 2;
          KeAddProcessorAffinityEx(&v8->DeferredDispatchInterrupts.MultipleTargetAffinity, SingleTargetIndex);
LABEL_75:
          KeAddGroupAffinityEx(p_MultipleTargetAffinity);
        }
      }
      else
      {
        v8->DeferredDispatchInterrupts.TargetType = 1;
        v8->DeferredDispatchInterrupts.SingleTargetIndex = v61->Number;
      }
LABEL_65:
      if ( (StaticRescheduleContext->ProcessorEntries[v12].___u6[0] & 2) != 0 )
      {
        NewThread = StaticRescheduleContext->ProcessorEntries[v12].NewThread;
        if ( NewThread == (_KTHREAD *)v30 )
          v74 = a6;
        else
          v74 = 0LL;
        EtwTraceScheduleThread(NewThread, v61, v74);
      }
      if ( (StaticRescheduleContext->ProcessorEntries[v12].___u6[0] & 4) != 0 )
      {
        SchedulerAssist = (int *)v61->SchedulerAssist;
        if ( SchedulerAssist )
        {
          p_SchedulerAssist = &v8->SchedulerAssist;
          if ( v8->SchedulerAssist )
          {
            if ( v8 != v61 )
            {
              v67 = *SchedulerAssist;
              v68 = &v8->SchedulerAssist;
              v69 = *SchedulerAssist & 0x40000;
              if ( v69 )
                v68 = &v8->SchedulerAssist;
              if ( (v67 & 0x100000) != 0
                || v69
                && (p_SchedulerAssist = v68,
                    (unsigned __int8)v67 < StaticRescheduleContext->ProcessorEntries[v12].KickPriority) )
              {
                v70 = HvlpVirtualProcessorsIdentityMapped == 0;
                v71 = *p_SchedulerAssist;
                *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                Number = v61->Number;
                if ( v70 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                v71[2] = Number;
                if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(v61->Number, 2LL);
                __writemsr(0x400000C2u, (unsigned int)Number);
              }
            }
          }
        }
      }
      if ( (StaticRescheduleContext->ProcessorEntries[v12].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v12].NewThread->KeReferenceCount);
      result = StaticRescheduleContext->ProcessorCount;
      ++v12;
    }
    while ( v12 < (unsigned int)result );
  }
  return result;
}
