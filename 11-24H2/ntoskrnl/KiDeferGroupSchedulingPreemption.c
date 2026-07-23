/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1402D7384
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  bool v4; // r14
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  int v8; // r14d
  _BYTE *v9; // rax
  __int64 *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r13
  _WORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KSCB *v19; // rbx
  unsigned __int64 *v20; // r8
  unsigned __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r9
  struct _KI_RESCHEDULE_CONTEXT *v27; // rsi
  struct _KTHREAD *v28; // r15
  char v29; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v30; // r12
  _KPRCB *v31; // rax
  _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v33; // dl
  __int64 j; // rdx
  unsigned __int8 *v35; // r9
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r10
  bool v39; // zf
  unsigned __int64 v40; // rax
  __int64 v41; // r11
  unsigned __int8 v42; // al
  char v43; // al
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // al
  __int64 v46; // r10
  __int64 v47; // r11
  __int64 v48; // r8
  char v49; // al
  struct _KTHREAD *v50; // r15
  char v51; // bl
  unsigned int v52; // r13d
  unsigned __int8 v53; // al
  __int64 v54; // rbx
  char v55; // al
  int *v56; // rax
  unsigned int v57; // edx
  unsigned __int16 *v58; // r15
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r15
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // r8d
  __int64 v67; // r9
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v69; // r10
  struct _KTHREAD *AllCompareThreadStateFlags; // rdx
  _KPRCB *Prcb; // r9
  int v72; // r8d
  _KTHREAD *IdleThread; // rax
  _KTHREAD *v74; // rax
  unsigned int i; // r11d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v76; // rcx
  unsigned __int8 v77; // al
  __int64 v78; // rcx
  __int64 v79; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v80; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v81; // r10
  struct _KTHREAD *v82; // rdx
  _KPRCB *v83; // r9
  int v84; // r8d
  _KTHREAD *v85; // rax
  _KTHREAD *v86; // rax
  unsigned int m; // r11d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v88; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v89; // rcx
  __int64 k; // r15
  unsigned int v91; // [rsp+30h] [rbp-30h] BYREF
  struct _SINGLE_LIST_ENTRY v92; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v93; // [rsp+40h] [rbp-20h] BYREF
  __int64 v94; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v95; // [rsp+50h] [rbp-10h]
  unsigned __int64 v96; // [rsp+58h] [rbp-8h] BYREF
  char v98; // [rsp+B0h] [rbp+50h]
  bool v99; // [rsp+B0h] [rbp+50h]
  struct _KTHREAD *v100; // [rsp+B8h] [rbp+58h]
  struct _KTHREAD *v101; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 104);
  v91 = 0;
  v93 = 0LL;
  if ( !v3 || !(v3 + *(unsigned int *)(a2 + 216)) || !KiShouldPreemptionBeDeferred(a1) )
    return 0;
  v7 = a2 & 0xFFFFFFFFFFFFFFFEuLL | 1;
  v95 = v7;
  while ( 2 )
  {
    v8 = 0;
    v98 = 0;
    v93 = v7;
    v9 = *(_BYTE **)(a2 + 36440);
    v10 = (__int64 *)(v9 + 8);
    if ( *v9 )
    {
      v11 = (unsigned __int8)*v9;
      do
      {
        v12 = *v10;
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v12 + 48) );
        }
        ++v10;
        --v11;
      }
      while ( v11 );
      v6 = a1;
    }
    v14 = *(_QWORD *)(v6 + 104);
    v15 = *(_QWORD *)(a2 + 16);
    if ( !v14
      || !(v14 + *(unsigned int *)(a2 + 216))
      || v15 == *(_QWORD *)(a2 + 24)
      || (v16 = *(_WORD **)(v6 + 576), v17 = *(unsigned __int8 *)(a2 + 208), (unsigned __int16)v17 >= *v16)
      || ((*(_QWORD *)&v16[4 * v17 + 4] >> *(_BYTE *)(a2 + 209)) & 1) == 0 )
    {
LABEL_25:
      v4 = 0;
      goto LABEL_26;
    }
    v18 = *(_QWORD *)(v15 + 104);
    if ( v18 )
    {
      v19 = (struct _KSCB *)(v18 + *(unsigned int *)(a2 + 216));
      if ( !v19 )
        goto LABEL_24;
      v8 = 0;
      if ( KiIsThreadConstrainedBySchedulingGroup(*(_QWORD *)(a2 + 16)) && !KiShouldPreemptionBeDeferred(v23) )
      {
        if ( KiCheckForMaxOverQuotaScb((__int64)v19) )
        {
          v8 = -1;
        }
        else
        {
          do
          {
            v8 += *(_DWORD *)(v24 + 124);
            if ( v26 )
            {
              v25 += **(_DWORD **)(v24 + 128);
            }
            else if ( v8 )
            {
              break;
            }
            v24 = *(_QWORD *)(v24 + 416);
          }
          while ( v24 );
          v98 = 1;
          if ( v25 )
          {
LABEL_45:
            if ( v8 )
              goto LABEL_46;
            goto LABEL_24;
          }
        }
      }
      v98 = 0;
      goto LABEL_45;
    }
    v19 = 0LL;
LABEL_24:
    if ( *(_BYTE *)(v15 + 195) > *(_BYTE *)(v6 + 195) )
      goto LABEL_25;
LABEL_46:
    v27 = *(struct _KI_RESCHEDULE_CONTEXT **)(a2 + 14312);
    v92.Next = 0LL;
    memset_0(v27, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)v27, &v93);
    v28 = *(struct _KTHREAD **)(a2 + 8);
    v94 = 0LL;
    v100 = v28;
    if ( (*((_DWORD *)&v28->0 + 1) & 0x1000) != 0 || v28 == *(struct _KTHREAD **)(a2 + 36480) )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v27, (struct _KPRCB *)a2);
      v69 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = (struct _KTHREAD *)RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      v72 = (RescheduleContextEntryForPrcb->AllCompareThreadStateFlags >> 1) & 1;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      IdleThread = Prcb->IdleThread;
      LOBYTE(AllCompareThreadStateFlags) = (unsigned __int8)AllCompareThreadStateFlags & 0xC0 | 5;
      v69->AllCompareThreadStateFlags = (unsigned __int8)AllCompareThreadStateFlags;
      v69->CompareThread = IdleThread;
      v74 = Prcb->IdleThread;
      *((_BYTE *)&v69->0 + 1) &= ~1u;
      v69->NewThread = v74;
      if ( v72 )
      {
        for ( i = 0; i < v27->ProcessorCount; ++i )
        {
          v76 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v27->ProcessorEntries + 32 * i + 8 * i);
          if ( v76 != v69 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v76, AllCompareThreadStateFlags, 1u, 0);
        }
        goto LABEL_62;
      }
    }
    else
    {
      v30 = KiFindRescheduleContextEntryForPrcb(v27, (struct _KPRCB *)a2);
      if ( (unsigned __int8)(v29 & 2) <= (unsigned __int8)(*(_BYTE *)(v15 + 120) & 2) )
      {
LABEL_49:
        v31 = v30->Prcb;
        CurrentThread = v30->Prcb->CurrentThread;
        v30->CompareThread = CurrentThread;
        v33 = v30->AllCompareThreadStateFlags & 0xFE | (CurrentThread == v31->IdleThread);
        v30->AllCompareThreadStateFlags = v33;
        LODWORD(v31) = *((_DWORD *)&CurrentThread->0 + 1);
        v30->NewThread = 0LL;
        *((_BYTE *)&v30->0 + 1) &= ~1u;
        v30->___u5[0] |= 1u;
        v30->AllCompareThreadStateFlags = (v33 & 0xFD ^ (2 * (((unsigned __int8)v31 & 2) != 0))) & 0xC3 | 4;
        if ( ((*(_BYTE *)(v15 + 120) | *((_BYTE *)&v28->MiscFlags + 4)) & 2) != 0 )
        {
          for ( j = 0LL; (unsigned int)j < v27->ProcessorCount; j = (unsigned int)(j + 1) )
          {
            v35 = (unsigned __int8 *)v27->ProcessorEntries + 32 * j + 8 * (unsigned int)j;
            if ( v30 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v35 )
            {
              v36 = *(&v28->MiscFlags + 1);
              v37 = *((_QWORD *)v35 + 3);
              v94 = 0LL;
              v38 = *(_QWORD *)v35;
              v39 = (v36 & 2) == 0;
              v40 = v37 - 1;
              if ( v39 )
              {
                v41 = *(_QWORD *)(v38 + 24);
                if ( v40 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v37) )
                {
                  if ( (v35[33] & 1) != 0 )
                    *(_DWORD *)(v79 + 116) |= 2u;
                  *(_BYTE *)(v79 + 565) = 1;
                  KiInsertDeferredReadyList(&v94, v79);
                }
                v77 = v35[32] | 1;
                *((_QWORD *)v35 + 2) = v41;
                v35[32] = v77;
                v44 = (v77 & 0xFD ^ (2 * ((*(_DWORD *)(v41 + 120) & 2) != 0))) & 0xC3 | 4;
              }
              else
              {
                v41 = *(_QWORD *)(v38 + 36480);
                if ( v40 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v37) )
                {
                  if ( (v35[33] & 1) != 0 )
                    *(_DWORD *)(v78 + 116) |= 2u;
                  *(_BYTE *)(v78 + 565) = 1;
                  KiInsertDeferredReadyList(&v94, v78);
                }
                v42 = v35[32] & 0xFE;
                *((_QWORD *)v35 + 2) = v28;
                v35[32] = v42;
                v43 = (v42 & 0xFD ^ (2 * ((*((_DWORD *)&v28->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v44 = v43 | 0x20;
                v45 = v43 & 0xDF;
                if ( v28 == (struct _KTHREAD *)v41 )
                  v44 = v45;
              }
              v35[32] = v44;
              v35[33] &= ~1u;
              *((_QWORD *)v35 + 3) = v41;
              if ( !KiIsPrcbThread(v41) )
                *(_DWORD *)(v47 + 536) = *(_DWORD *)(v46 + 36);
            }
          }
        }
        v27->MaximumThreadIsolationWidth = (*((_DWORD *)&v28->0 + 1) >> 1) & 1;
        goto LABEL_63;
      }
      for ( k = 0LL; ; k = (unsigned int)(k + 1) )
      {
        if ( (unsigned int)k >= v27->ProcessorCount )
        {
          v28 = v100;
          goto LABEL_49;
        }
        v89 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v27->ProcessorEntries + 32 * k + 8 * (unsigned int)k);
        if ( v30 != v89 && !KiDoesThreadDominateRescheduleContextEntry(v89, v100, 2LL, 0LL) )
          break;
      }
      v80 = KiFindRescheduleContextEntryForPrcb(v27, (struct _KPRCB *)a2);
      v81 = v80;
      v82 = (struct _KTHREAD *)v80->AllCompareThreadStateFlags;
      v83 = v80->Prcb;
      v84 = (v80->AllCompareThreadStateFlags >> 1) & 1;
      if ( ((unsigned __int8)v82 & 0x20) == 0 )
        v80->___u5[0] |= 1u;
      v80->___u5[0] &= ~2u;
      v85 = v83->IdleThread;
      LOBYTE(v82) = (unsigned __int8)v82 & 0xC0 | 5;
      v81->AllCompareThreadStateFlags = (unsigned __int8)v82;
      v81->CompareThread = v85;
      v86 = v83->IdleThread;
      *((_BYTE *)&v81->0 + 1) &= ~1u;
      v81->NewThread = v86;
      if ( v84 )
      {
        for ( m = 0; m < v27->ProcessorCount; ++m )
        {
          v88 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v27->ProcessorEntries + 32 * m + 8 * m);
          if ( v88 != v81 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v88, v82, 1u, 0);
        }
LABEL_62:
        v27->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
LABEL_63:
    *(_BYTE *)(v15 + 388) = 1;
    if ( v19 )
    {
      v8 = 0;
      if ( KiIsThreadConstrainedBySchedulingGroup(v15) && !KiShouldPreemptionBeDeferred(v64) )
      {
        if ( KiCheckForMaxOverQuotaScb((__int64)v19) )
        {
          v8 = -1;
        }
        else
        {
          do
          {
            v8 += *(_DWORD *)(v65 + 124);
            if ( v67 )
            {
              v66 += **(_DWORD **)(v65 + 128);
            }
            else if ( v8 )
            {
              break;
            }
            v65 = *(_QWORD *)(v65 + 416);
          }
          while ( v65 );
          v98 = 1;
          if ( v66 )
            goto LABEL_64;
        }
      }
      v98 = 0;
    }
LABEL_64:
    if ( v8 )
    {
      KiAddThreadToScbQueue((struct _KPRCB *)a2, v19);
      v48 = 2LL;
      v91 = 2;
    }
    else
    {
      KiAddThreadToPrcbQueue(a2, v15, *(char *)(v15 + 195), 1, v98, (__int64)&v91);
      v48 = v91;
    }
    if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion(v15, *(unsigned int *)(a2 + 36), v48, 0LL);
    KiSearchForNewThreadsForRescheduleContext(v27, &v92);
    v49 = KiCommitRescheduleContext(&v27->ProcessorCount, (struct _KPRCB *)a2, 0, &v92);
    v50 = *(struct _KTHREAD **)(a2 + 16);
    v101 = v50;
    v51 = v49;
    v4 = v50 == 0LL;
    v99 = v50 == 0LL;
    KiReleasePrcbLocksForIsolationUnit(&v93);
    if ( !v51 )
      goto LABEL_84;
    v52 = 0;
    if ( !v27->ProcessorCount )
      goto LABEL_83;
    do
    {
      v53 = v27->ProcessorEntries[v52].___u6[0];
      v54 = (__int64)v27->ProcessorEntries[v52].Prcb;
      if ( (v53 & 0x10) != 0 || (v53 & 8) != 0 && *(_BYTE *)(v54 + 7) )
      {
        v55 = *(_BYTE *)(a2 + 13785);
        if ( !v55 )
        {
          *(_BYTE *)(a2 + 13785) = 1;
          *(_DWORD *)(a2 + 13788) = *(_DWORD *)(v54 + 36);
          goto LABEL_75;
        }
        if ( v55 == 1 )
        {
          v57 = *(_DWORD *)(a2 + 13788);
          if ( v57 == *(_DWORD *)(v54 + 36) )
            goto LABEL_75;
          v58 = (unsigned __int16 *)(a2 + 13792);
          *(_BYTE *)(a2 + 13785) = 2;
          KeAddProcessorAffinityEx((unsigned __int16 *)(a2 + 13792), v57);
        }
        else
        {
          v58 = (unsigned __int16 *)(a2 + 13792);
        }
        KeAddGroupAffinityEx(v58, *(unsigned __int8 *)(v54 + 208), *(_QWORD *)(v54 + 200));
      }
LABEL_75:
      if ( (v27->ProcessorEntries[v52].___u6[0] & 2) != 0 )
        EtwTraceScheduleThread((__int64)v27->ProcessorEntries[v52].NewThread, v54, 0LL);
      if ( (v27->ProcessorEntries[v52].___u6[0] & 4) != 0 )
      {
        v56 = *(int **)(v54 + 36536);
        if ( v56 )
        {
          v59 = a2 + 36536;
          if ( *(_QWORD *)(a2 + 36536) )
          {
            if ( a2 != v54 )
            {
              v60 = *v56;
              v61 = a2 + 36536;
              if ( (v60 & 0x40000) != 0 )
                v61 = a2 + 36536;
              if ( (v60 & 0x100000) != 0
                || (v60 & 0x40000) != 0 && (v59 = v61, (unsigned __int8)v60 < v27->ProcessorEntries[v52].KickPriority) )
              {
                v39 = HvlpVirtualProcessorsIdentityMapped == 0;
                v62 = *(_QWORD *)v59;
                *(_DWORD *)(*(_QWORD *)v59 + 12LL) = 2;
                v63 = *(unsigned int *)(v54 + 36);
                if ( v39 )
                  LODWORD(v63) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v63 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v63] << 6);
                *(_DWORD *)(v62 + 8) = v63;
                if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v54 + 36), 2LL);
                __writemsr(0x400000C2u, (unsigned int)v63);
              }
            }
          }
        }
      }
      if ( (v27->ProcessorEntries[v52].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&v27->ProcessorEntries[v52].NewThread->KeReferenceCount);
      ++v52;
    }
    while ( v52 < v27->ProcessorCount );
    v4 = v99;
    v50 = v101;
LABEL_83:
    KiFlushSoftwareInterruptBatch((char *)(a2 + 13784));
LABEL_84:
    if ( v92.Next )
    {
      KiReadyDeferredReadyList(a2, &v92);
      if ( v50 )
        goto LABEL_26;
      if ( !*(_QWORD *)(a2 + 16) )
      {
LABEL_86:
        KiInsertDeferredPreemptionApc(a2, a1, 0LL);
        goto LABEL_26;
      }
      v6 = a1;
      v7 = v95;
      continue;
    }
    break;
  }
  if ( !v50 )
    goto LABEL_86;
LABEL_26:
  if ( v93 )
  {
    v20 = 0LL;
    v21 = v93 & 0xFFFFFFFFFFFFFFFEuLL;
    v22 = 0;
    v96 = v93 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v93 & 1) == 0 )
    {
      v20 = &v96;
      v22 = 1;
      goto LABEL_31;
    }
    if ( (v93 & 1) == 1 )
    {
      v20 = (unsigned __int64 *)(*(_QWORD *)(v21 + 36440) + 8LL);
      v22 = **(unsigned __int8 **)(v21 + 36440);
    }
    while ( v22 )
LABEL_31:
      _InterlockedAnd64((volatile signed __int64 *)(v20[--v22] + 48), 0LL);
  }
  return v4;
}
