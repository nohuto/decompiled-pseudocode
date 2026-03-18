/*
 * XREFs of KiScheduleThreadToIdleIsolationUnit @ 0x140256790
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeIsForceParkingEnabled @ 0x140204250 (KeIsForceParkingEnabled.c)
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x1402550F0 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140297C7C (EtwTraceScheduleThread.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140299510 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiIsPrcbThread @ 0x1403CA0D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x1403CBE30 (KiInsertDeferredReadyList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F9C1C (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiScheduleThreadToIdleIsolationUnit(
        struct _KPRCB *a1,
        unsigned __int64 a2,
        char a3,
        _QWORD *a4,
        struct _SINGLE_LIST_ENTRY *a5,
        __int64 a6)
{
  char v6; // si
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KPRCB *v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  _KISOLATION_WIDTH v14; // r15d
  struct _KPRCB **v15; // r8
  unsigned int v16; // r12d
  int v17; // r13d
  __int64 v18; // rbp
  $0F644497CAF62765172DCD1F9D4693F7 *v19; // rbx
  struct _KPRCB *v20; // rsi
  ULONG_PTR NextThread; // rcx
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // al
  __int64 v27; // r9
  unsigned int j; // edx
  unsigned __int64 v29; // r13
  struct _SINGLE_LIST_ENTRY *v30; // r15
  unsigned int v31; // r10d
  unsigned int v32; // r11d
  char v33; // r12
  _KPRCB *v34; // rsi
  char *v35; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  _KTHREAD *IdleThread; // r13
  char v39; // al
  int v40; // r11d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r11
  char v46; // cl
  bool v47; // al
  char v48; // r12
  unsigned int v49; // esi
  unsigned int v50; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v52; // al
  _QWORD *v53; // r10
  __int64 v54; // rcx
  unsigned __int64 v55; // r9
  unsigned __int64 *v56; // r8
  int v57; // edx
  __int64 result; // rax
  char v59; // al
  _KPRCB *v60; // rsi
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  void **p_SchedulerAssist; // rdx
  int v65; // r8d
  void **v66; // r9
  int v67; // eax
  bool v68; // zf
  _DWORD *v69; // rcx
  __int64 Number; // r15
  _KTHREAD *NewThread; // rcx
  __int64 v72; // r8
  char v73; // cl
  bool v74; // al
  unsigned int v75; // r11d
  char v76; // r12
  _KPRCB *Prcb; // rsi
  char *v78; // r9
  __int64 v79; // rcx
  unsigned __int64 v80; // rax
  char v81; // cl
  bool v82; // al
  int v83; // r11d
  _KTHREAD *SmtIsolationThread; // r13
  unsigned __int64 v85; // rdx
  char v86; // al
  char v87; // al
  char v88; // cl
  char v89; // al
  char *v90; // r8
  unsigned int i; // edx
  char *v92; // r9
  unsigned __int8 *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned __int64 *v99; // [rsp+20h] [rbp-68h]
  __int64 v100; // [rsp+28h] [rbp-60h]
  unsigned __int64 v101; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v102; // [rsp+38h] [rbp-50h]
  unsigned __int64 v104; // [rsp+98h] [rbp+10h] BYREF
  char v105; // [rsp+A0h] [rbp+18h]
  _QWORD *v106; // [rsp+A8h] [rbp+20h]

  v106 = a4;
  v105 = a3;
  v104 = a2;
  v6 = a3;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v8 = a1;
  v9 = *a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v102 = v9;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  v11 = *a4;
  v12 = 0;
  v13 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  v101 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  v14 = v11 & 1;
  if ( v14 )
  {
    v15 = (struct _KPRCB **)(*(_QWORD *)(v13 + 36440) + 8LL);
    v99 = (unsigned __int64 *)v15;
    v16 = **(unsigned __int8 **)(v13 + 36440);
    v17 = 0;
    if ( !**(_BYTE **)(v13 + 36440) )
      goto LABEL_15;
  }
  else
  {
    v15 = (struct _KPRCB **)&v101;
    v16 = 1;
    v99 = &v101;
    v17 = 0;
  }
  v18 = v104;
  v19 = &StaticRescheduleContext->ProcessorEntries[0].32;
  v100 = v16;
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
    if ( v20->SharedReadyQueue )
    {
      if ( (v20->IdleState & 0x10) == 0
        || (KeIsForceParkingEnabled() && (v20->IdleState & 0x20) != 0
          ? (v43 = ~*(_QWORD *)(v41 + 104))
          : (v43 = *(_QWORD *)(v41 + 80)),
            (v43 & *(_QWORD *)(v42 + 712)) == 0) )
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
        v23 = AllCompareThreadStateFlags | 4;
      else
        v23 = AllCompareThreadStateFlags & 0xFB;
      v19->AllCompareThreadStateFlags = v23;
    }
    KiTryToUpdateVPBackingThreadPriorityBeforePreemption(NextThread, (__int64)v20, (__int64)v15, v18);
    v24 = ((v20->IdleState & 1) == 0) | v19->AllCompareThreadStateFlags & 0xFE;
    v19->AllCompareThreadStateFlags = v24;
    v25 = v24 ^ (v24 ^ (v20->PriorityState->AllFields >> 6)) & 2;
    v19->AllCompareThreadStateFlags = v25;
    if ( ((v25 >> 1) & 1) > v17 )
      v17 = (v25 >> 1) & 1;
    v15 = (struct _KPRCB **)(v99 + 1);
    v19 += 20;
    ++v99;
    --v100;
  }
  while ( v100 );
  v13 = v101;
  v8 = a1;
  v9 = v102;
  v6 = v105;
LABEL_15:
  StaticRescheduleContext->MaximumThreadIsolationWidth = v17;
  StaticRescheduleContext->IsolationWidth = v14;
  StaticRescheduleContext->ProcessorCount = v16;
  if ( v14 )
    v26 = *(_BYTE *)(*(_QWORD *)(v13 + 36440) + 1LL);
  else
    v26 = 0;
  StaticRescheduleContext->ScanStart = v26;
  if ( v17 )
  {
    v90 = 0LL;
    for ( i = 0; i < v16; ++i )
    {
      v92 = (char *)StaticRescheduleContext + 40 * i;
      if ( *((_QWORD *)v92 + 4) != *(_QWORD *)(*((_QWORD *)v92 + 2) + 36480LL) )
      {
        v90 = v92 + 16;
        break;
      }
    }
    if ( v16 )
    {
      v93 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v94 = v16;
      do
      {
        if ( v93 - 32 != (unsigned __int8 *)v90 )
        {
          *((_QWORD *)v93 - 2) = *((_QWORD *)v90 + 2);
          *v93 = v90[32] | 0x20;
        }
        v93 += 40;
        --v94;
      }
      while ( v94 );
    }
  }
  v27 = 0LL;
  for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
  {
    if ( StaticRescheduleContext->ProcessorEntries[j].Prcb == (_KPRCB *)v9 )
    {
      v27 = (__int64)&StaticRescheduleContext->ProcessorEntries[j];
      break;
    }
  }
  v29 = v104;
  v30 = a5;
  v31 = (*(_DWORD *)(v104 + 120) >> 1) & 1;
  if ( v31 >= ((*(unsigned __int8 *)(v27 + 32) >> 1) & 1u) )
  {
    if ( v31 )
    {
      v75 = 0;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        v76 = v105;
        do
        {
          Prcb = StaticRescheduleContext->ProcessorEntries[v75].Prcb;
          v78 = (char *)StaticRescheduleContext + 40 * v75;
          v79 = *((_QWORD *)v78 + 5);
          v80 = v79 - 1;
          if ( Prcb == (_KPRCB *)v9 )
          {
            if ( v80 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v79) )
            {
              if ( (v78[49] & 1) != 0 )
                *(_DWORD *)(v97 + 116) |= 2u;
              *(_BYTE *)(v97 + 565) = 1;
              KiInsertDeferredReadyList(v30, v97);
            }
            v81 = v78[48] & 0xFE;
            *((_QWORD *)v78 + 4) = v29;
            v78[48] = v81;
            v82 = (*(_DWORD *)(v29 + 120) & 2) != 0;
            *((_QWORD *)v78 + 5) = v29;
            v78[48] = (v81 & 0xFD ^ (2 * v82)) & 0xC3 | 4;
            v78[49] ^= (v76 ^ v78[49]) & 1;
            if ( !(unsigned __int8)KiIsPrcbThread(v29) )
              *(_DWORD *)(v29 + 536) = Prcb->Number;
          }
          else
          {
            SmtIsolationThread = Prcb->SmtIsolationThread;
            if ( v80 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v79) )
            {
              if ( (v78[49] & 1) != 0 )
                *(_DWORD *)(v98 + 116) |= 2u;
              *(_BYTE *)(v98 + 565) = 1;
              KiInsertDeferredReadyList(v30, v98);
            }
            v85 = v104;
            v86 = v78[48] & 0xFE;
            v78[48] = v86;
            *((_QWORD *)v78 + 4) = v85;
            v87 = (v86 & 0xFD ^ (2 * ((*(_DWORD *)(v85 + 120) & 2) != 0))) & 0xE3 | 4;
            v88 = v87 | 0x20;
            v89 = v87 & 0xDF;
            if ( (_KTHREAD *)v85 == SmtIsolationThread )
              v88 = v89;
            v78[48] = v88;
            v78[49] &= ~1u;
            *((_QWORD *)v78 + 5) = SmtIsolationThread;
            if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
              SmtIsolationThread->NextProcessor = Prcb->Number;
            v29 = v104;
          }
          v75 = v83 + 1;
        }
        while ( v75 < StaticRescheduleContext->ProcessorCount );
      }
    }
    else
    {
      v44 = *(_QWORD *)(v27 + 24);
      v45 = *(_QWORD *)v27;
      if ( (unsigned __int64)(v44 - 1) <= 0xFFFFFFFFFFFFFFFCuLL && *(_UNKNOWN **)(v44 + 544) != &KiInitialProcess )
      {
        if ( (*(_BYTE *)(v27 + 33) & 1) != 0 )
          *(_DWORD *)(v44 + 116) |= 2u;
        *(_BYTE *)(v44 + 565) = 1;
        KiInsertDeferredReadyList(v30, v44);
      }
      v46 = *(_BYTE *)(v27 + 32) & 0xFE;
      *(_QWORD *)(v27 + 16) = v29;
      *(_BYTE *)(v27 + 32) = v46;
      v47 = (*(_DWORD *)(v29 + 120) & 2) != 0;
      *(_QWORD *)(v27 + 24) = v29;
      *(_BYTE *)(v27 + 32) = (v46 & 0xFD ^ (2 * v47)) & 0xC3 | 4;
      *(_BYTE *)(v27 + 33) ^= (v6 ^ *(_BYTE *)(v27 + 33)) & 1;
      if ( *(_UNKNOWN **)(v29 + 544) != &KiInitialProcess )
        *(_DWORD *)(v29 + 536) = *(_DWORD *)(v45 + 36);
    }
  }
  else
  {
    v32 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      v33 = v105;
      do
      {
        v34 = StaticRescheduleContext->ProcessorEntries[v32].Prcb;
        v35 = (char *)StaticRescheduleContext + 40 * v32;
        v36 = *((_QWORD *)v35 + 5);
        v37 = v36 - 1;
        if ( v34 == (_KPRCB *)v9 )
        {
          if ( v37 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v36) )
          {
            if ( (v35[49] & 1) != 0 )
              *(_DWORD *)(v96 + 116) |= 2u;
            *(_BYTE *)(v96 + 565) = 1;
            KiInsertDeferredReadyList(v30, v96);
          }
          v73 = v35[48] & 0xFE;
          *((_QWORD *)v35 + 4) = v29;
          v35[48] = v73;
          v74 = (*(_DWORD *)(v29 + 120) & 2) != 0;
          *((_QWORD *)v35 + 5) = v29;
          v35[48] = (v73 & 0xFD ^ (2 * v74)) & 0xC3 | 4;
          v35[49] ^= (v33 ^ v35[49]) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(v29) )
            *(_DWORD *)(v29 + 536) = v34->Number;
        }
        else
        {
          IdleThread = v34->IdleThread;
          if ( v37 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v36) )
          {
            if ( (v35[49] & 1) != 0 )
              *(_DWORD *)(v95 + 116) |= 2u;
            *(_BYTE *)(v95 + 565) = 1;
            KiInsertDeferredReadyList(v30, v95);
          }
          v39 = v35[48] | 1;
          *((_QWORD *)v35 + 4) = IdleThread;
          v35[48] = v39;
          v35[48] = (v39 & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
          v35[49] &= ~1u;
          *((_QWORD *)v35 + 5) = IdleThread;
          if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
            IdleThread->NextProcessor = v34->Number;
          v29 = v104;
        }
        v32 = v40 + 1;
      }
      while ( v32 < StaticRescheduleContext->ProcessorCount );
    }
  }
  v48 = 0;
  StaticRescheduleContext->MaximumThreadIsolationWidth = v31;
  v49 = 0;
  v50 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x400) != 0 )
    v49 = 2;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    do
    {
      v48 |= KiCommitRescheduleContextEntry(
               (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * v50
                                                     + 8 * v50),
               v8,
               v49,
               v30);
      ++v50;
    }
    while ( v50 < StaticRescheduleContext->ProcessorCount );
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v52 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v52;
    if ( v52 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  v53 = v106;
  v54 = *v106;
  v55 = *v106 & 0xFFFFFFFFFFFFFFFEuLL;
  v104 = v55;
  if ( (v54 & 1) != 0 )
  {
    v56 = (unsigned __int64 *)(*(_QWORD *)(v55 + 36440) + 8LL);
    v57 = **(unsigned __int8 **)(v55 + 36440);
    if ( !**(_BYTE **)(v55 + 36440) )
      goto LABEL_58;
  }
  else
  {
    v56 = &v104;
    v57 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v56[--v57] + 48), 0LL);
  while ( v57 );
LABEL_58:
  result = 0LL;
  *v53 = 0LL;
  *(_QWORD *)(v29 + 64) = 0LL;
  if ( v48 && StaticRescheduleContext->ProcessorCount )
  {
    do
    {
      v59 = StaticRescheduleContext->ProcessorEntries[v12].___u6[0];
      v60 = StaticRescheduleContext->ProcessorEntries[v12].Prcb;
      if ( (v59 & 0x10) == 0 && ((v59 & 8) == 0 || !v60->IdleHalt) )
        goto LABEL_65;
      TargetType = v8->DeferredDispatchInterrupts.TargetType;
      if ( TargetType )
      {
        if ( TargetType != 1 )
        {
          p_MultipleTargetAffinity = &v8->DeferredDispatchInterrupts.MultipleTargetAffinity;
          goto LABEL_75;
        }
        if ( v8->DeferredDispatchInterrupts.SingleTargetIndex != v60->Number )
        {
          p_MultipleTargetAffinity = &v8->DeferredDispatchInterrupts.MultipleTargetAffinity;
          v8->DeferredDispatchInterrupts.TargetType = 2;
          KeAddProcessorAffinityEx(&v8->DeferredDispatchInterrupts.MultipleTargetAffinity);
LABEL_75:
          KeAddGroupAffinityEx(p_MultipleTargetAffinity, v60->Group, v60->GroupSetMember);
        }
      }
      else
      {
        v8->DeferredDispatchInterrupts.TargetType = 1;
        v8->DeferredDispatchInterrupts.SingleTargetIndex = v60->Number;
      }
LABEL_65:
      if ( (StaticRescheduleContext->ProcessorEntries[v12].___u6[0] & 2) != 0 )
      {
        NewThread = StaticRescheduleContext->ProcessorEntries[v12].NewThread;
        if ( NewThread == (_KTHREAD *)v29 )
          v72 = a6;
        else
          v72 = 0LL;
        EtwTraceScheduleThread(NewThread, v60, v72);
      }
      if ( (StaticRescheduleContext->ProcessorEntries[v12].___u6[0] & 4) != 0 )
      {
        SchedulerAssist = (int *)v60->SchedulerAssist;
        if ( SchedulerAssist )
        {
          p_SchedulerAssist = &v8->SchedulerAssist;
          if ( v8->SchedulerAssist )
          {
            if ( v8 != v60 )
            {
              v65 = *SchedulerAssist;
              v66 = &v8->SchedulerAssist;
              v67 = *SchedulerAssist & 0x40000;
              if ( v67 )
                v66 = &v8->SchedulerAssist;
              if ( (v65 & 0x100000) != 0
                || v67
                && (p_SchedulerAssist = v66,
                    (unsigned __int8)v65 < StaticRescheduleContext->ProcessorEntries[v12].KickPriority) )
              {
                v68 = HvlpVirtualProcessorsIdentityMapped == 0;
                v69 = *p_SchedulerAssist;
                *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                Number = v60->Number;
                if ( v68 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                v69[2] = Number;
                if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(v60->Number, 2LL);
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
