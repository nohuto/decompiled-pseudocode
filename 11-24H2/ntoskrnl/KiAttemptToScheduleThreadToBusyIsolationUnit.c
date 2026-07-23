/*
 * XREFs of KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140285700 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402A9340 (KiEvaluateGroupSchedulingPreemption.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAddThreadToScbQueue @ 0x1402D847C (KiAddThreadToScbQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402D8CB0 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAdvanceReadyQueueEnumerator @ 0x1402D9050 (KiAdvanceReadyQueueEnumerator.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeIsForceParkingEnabled @ 0x14032B830 (KeIsForceParkingEnabled.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1403C0D20 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiAttemptToScheduleThreadToBusyIsolationUnit(
        struct _KPRCB *a1,
        __int64 a2,
        char a3,
        __int64 *a4,
        struct _SINGLE_LIST_ENTRY *a5,
        struct _KTHREAD_SCHEDULE_REASON_DATA *a6,
        struct _KTHREAD *a7)
{
  struct _KPRCB *StaticRescheduleContext; // rsi
  __int64 *v8; // rdi
  struct _KTHREAD *v9; // rbx
  struct _KSHARED_READY_QUEUE *v10; // rax
  unsigned int v11; // r14d
  struct _KPRCB **v12; // r12
  unsigned __int64 v13; // rcx
  unsigned int v14; // r15d
  bool v15; // zf
  __int64 v16; // r9
  int v17; // r13d
  unsigned __int64 *p_PrcbLock; // rbx
  struct _KPRCB *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG_PTR NextThread; // r8
  char v24; // cl
  char v25; // cl
  char v26; // dl
  unsigned __int8 v27; // cl
  char v28; // al
  _KTHREAD **v29; // r8
  unsigned int v30; // r9d
  _KTHREAD **p_NextThread; // rdx
  unsigned __int64 *v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edx
  int v35; // r9d
  __int64 v36; // rdi
  struct _KSHARED_READY_QUEUE *v37; // r12
  __int64 v38; // rdx
  BOOL v39; // r15d
  char result; // al
  __int64 v41; // r10
  char v42; // al
  __int64 v43; // r8
  char v44; // cl
  unsigned int v45; // ecx
  unsigned int i; // ebx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v47; // rcx
  char v48; // di
  __int64 v49; // r9
  unsigned int v50; // edx
  __int64 v51; // rdx
  unsigned int v52; // r15d
  unsigned int v53; // ebx
  __int64 *v54; // rdi
  struct _KSHARED_READY_QUEUE *v55; // r10
  char *v56; // r9
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // cl
  bool v61; // al
  __int64 v62; // r10
  __int64 v63; // r11
  __int64 v64; // rcx
  char v65; // al
  __int64 v66; // r10
  __int64 v67; // r11
  __int64 v68; // rdx
  void *v69; // r11
  __int64 v70; // r10
  __int64 *v71; // rcx
  char v72; // cl
  bool v73; // al
  unsigned int v74; // r11d
  __int64 *v75; // rdi
  __int64 v76; // r10
  char *v77; // r9
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  char v81; // cl
  bool v82; // al
  __int64 v83; // r10
  int v84; // r11d
  __int64 v85; // rbx
  __int64 v86; // rcx
  char v87; // al
  char v88; // al
  char v89; // cl
  char v90; // al
  __int64 v91; // r10
  volatile __int64 *v92; // r8
  int v93; // r15d
  volatile __int64 *v94; // rdi
  volatile __int64 **p_IdleThread; // rcx
  __int64 MxCsr_low; // rdx
  unsigned __int8 *v97; // rcx
  _QWORD *v98; // rdx
  unsigned int v99; // ebx
  struct _KTHREAD *v100; // rbx
  struct _SINGLE_LIST_ENTRY *v101; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _KPRCB *v103; // rdi
  __int64 ScbOffset; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  struct _KSCB *v107; // r15
  int v108; // r8d
  struct _KPRCB *v109; // rdi
  volatile signed __int64 *v110; // r8
  int v111; // r15d
  volatile signed __int64 *v112; // rbx
  volatile signed __int64 **v113; // rcx
  __int64 v114; // rdx
  volatile signed __int64 **v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rdx
  struct _KPRCB *v118; // rdi
  char v119; // bl
  struct _KTHREAD *v120; // rdx
  struct _KTHREAD_SCHEDULE_REASON_DATA *v121; // rbx
  struct _KTHREAD *v124; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v125; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v126; // [rsp+50h] [rbp-B0h] BYREF
  struct _SINGLE_LIST_ENTRY *v127; // [rsp+58h] [rbp-A8h]
  struct _KSHARED_READY_QUEUE *v128; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v129; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v130; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v131; // [rsp+78h] [rbp-88h]
  struct _KPRCB *v132; // [rsp+80h] [rbp-80h]
  struct _KTHREAD_SCHEDULE_REASON_DATA *v133; // [rsp+88h] [rbp-78h]
  _BYTE v134[240]; // [rsp+90h] [rbp-70h] BYREF

  StaticRescheduleContext = (struct _KPRCB *)a1->StaticRescheduleContext;
  v8 = a4;
  v9 = a7;
  v127 = a5;
  v133 = a6;
  v10 = (struct _KSHARED_READY_QUEUE *)(*a4 & 0xFFFFFFFFFFFFFFFEuLL);
  v132 = a1;
  v128 = v10;
  v131 = a4;
  v124 = a7;
  v126 = StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, 0xF0uLL);
  v11 = 0;
  v12 = 0LL;
  v13 = *v8 & 0xFFFFFFFFFFFFFFFEuLL;
  v14 = 0;
  v15 = (*v8 & 1) == 0;
  v16 = *v8 & 1;
  v130 = v13;
  v125 = v16;
  if ( v15 )
  {
    v12 = (struct _KPRCB **)&v130;
    v14 = 1;
    v17 = 0;
LABEL_7:
    p_PrcbLock = &StaticRescheduleContext->PrcbLock;
    v129 = v14;
    do
    {
      *((_OWORD *)p_PrcbLock - 2) = 0LL;
      *((_OWORD *)p_PrcbLock - 1) = 0LL;
      *p_PrcbLock = 0LL;
      *(p_PrcbLock - 1) = -1LL;
      *((_BYTE *)p_PrcbLock + 4) = 63;
      v19 = *v12;
      *(p_PrcbLock - 4) = (unsigned __int64)*v12;
      *(p_PrcbLock - 3) = 0LL;
      if ( v19->SharedReadyQueue )
      {
        if ( (v19->IdleState & 0x10) == 0
          || (!KeIsForceParkingEnabled() || (v19->IdleState & 0x20) == 0
            ? (v22 = *(_QWORD *)(v20 + 80))
            : (v22 = ~*(_QWORD *)(v20 + 104)),
              (v22 & *(_QWORD *)(v21 + 712)) == 0) )
        {
          *(p_PrcbLock - 3) = (unsigned __int64)v19->SharedReadyQueue;
        }
      }
      NextThread = (ULONG_PTR)v19->NextThread;
      *(p_PrcbLock - 2) = NextThread;
      if ( !NextThread )
      {
        NextThread = (ULONG_PTR)v19->CurrentThread;
        *(p_PrcbLock - 2) = NextThread;
      }
      if ( v19->NextThread == (_KTHREAD *)NextThread )
      {
        *(_BYTE *)p_PrcbLock |= 4u;
      }
      else
      {
        v24 = *(_BYTE *)p_PrcbLock;
        if ( v19 == KeGetCurrentPrcb() )
          v25 = v24 | 4;
        else
          v25 = v24 & 0xFB;
        *(_BYTE *)p_PrcbLock = v25;
      }
      KiTryToUpdateVPBackingThreadPriorityBeforePreemption(NextThread, (__int64)v19, NextThread, a2);
      v26 = ((v19->IdleState & 1) == 0) | *(_BYTE *)p_PrcbLock & 0xFE;
      *(_BYTE *)p_PrcbLock = v26;
      v27 = v26 ^ (v26 ^ (v19->PriorityState->AllFields >> 6)) & 2;
      *(_BYTE *)p_PrcbLock = v27;
      if ( ((v27 >> 1) & 1) > v17 )
        v17 = (v27 >> 1) & 1;
      p_PrcbLock += 5;
      ++v12;
      --v129;
    }
    while ( v129 );
    v13 = v130;
    StaticRescheduleContext = v126;
    LODWORD(v16) = v125;
    v9 = v124;
    v8 = v131;
    goto LABEL_28;
  }
  if ( (_DWORD)v16 == 1 )
  {
    v12 = (struct _KPRCB **)(*(_QWORD *)(v13 + 36440) + 8LL);
    v14 = **(unsigned __int8 **)(v13 + 36440);
  }
  v17 = 0;
  if ( v14 )
    goto LABEL_7;
LABEL_28:
  *(_DWORD *)&StaticRescheduleContext->LegacyNumber = v17;
  LODWORD(StaticRescheduleContext->CurrentThread) = v16;
  LOBYTE(StaticRescheduleContext->MxCsr) = v14;
  if ( (_DWORD)v16 )
    v28 = *(_BYTE *)(*(_QWORD *)(v13 + 36440) + 1LL);
  else
    v28 = 0;
  BYTE1(StaticRescheduleContext->MxCsr) = v28;
  if ( v17 )
  {
    v29 = 0LL;
    v30 = 0;
    if ( v14 )
    {
      p_NextThread = &StaticRescheduleContext->NextThread;
      while ( p_NextThread[2] == *(_KTHREAD **)&(*p_NextThread)[30].Header.Lock )
      {
        ++v30;
        p_NextThread += 5;
        if ( v30 >= v14 )
          goto LABEL_38;
      }
      v29 = p_NextThread;
LABEL_38:
      v32 = &StaticRescheduleContext->PrcbLock;
      v33 = v14;
      do
      {
        if ( v32 - 4 != (unsigned __int64 *)v29 )
        {
          *(v32 - 2) = (unsigned __int64)v29[2];
          *(_BYTE *)v32 = *((_BYTE *)v29 + 32) | 0x20;
        }
        v32 += 5;
        --v33;
      }
      while ( v33 );
    }
  }
  v34 = 0;
  v35 = *((_DWORD *)v8 + 3);
  v36 = 0LL;
  v37 = v128;
  if ( LOBYTE(StaticRescheduleContext->MxCsr) )
  {
    while ( *((struct _KSHARED_READY_QUEUE **)&StaticRescheduleContext->NextThread + 5 * v34) != v128 )
    {
      if ( ++v34 >= LOBYTE(StaticRescheduleContext->MxCsr) )
        goto LABEL_47;
    }
    v36 = (__int64)(&StaticRescheduleContext->NextThread + 5 * v34);
  }
LABEL_47:
  v38 = 0LL;
  v39 = v35 != 0;
  v129 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    result = KiEvaluateGroupSchedulingPreemption((__int64 *)v36, a2, v39, &v129);
    v38 = v129;
    v41 = a2;
  }
  else
  {
    v42 = *(_BYTE *)(v36 + 32);
    v43 = *(_QWORD *)(v36 + 16);
    v41 = a2;
    if ( (v42 & 1) != 0 )
    {
      result = 1;
    }
    else
    {
      v44 = *(_BYTE *)(a2 + 195);
      result = v44 > *(char *)(v43 + 195)
            || v44 == *(_BYTE *)(v43 + 195) && (v35 || (v42 & 0x18) != 0)
            || (v42 & 0x10) != 0 && v44;
    }
  }
  if ( v9 )
    *(_QWORD *)&v9->Header.Lock = v38;
  if ( result )
  {
    v45 = (*(_DWORD *)(v41 + 120) >> 1) & 1;
    if ( v45 < ((*(unsigned __int8 *)(v36 + 32) >> 1) & 1u) )
      v45 = (*(unsigned __int8 *)(v36 + 32) >> 1) & 1;
    if ( v45 == 1 )
    {
      for ( i = 0; i < LOBYTE(StaticRescheduleContext->MxCsr); ++i )
      {
        v47 = (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(&StaticRescheduleContext->NextThread + 4 * i + i);
        if ( v47 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v36 )
        {
          result = KiDoesThreadDominateRescheduleContextEntry(v47, (struct _KTHREAD *)v41, v39, 0LL);
          if ( !result )
            return result;
          v41 = a2;
        }
      }
    }
    v48 = 0;
    v49 = 0LL;
    v50 = 0;
    if ( LOBYTE(StaticRescheduleContext->MxCsr) )
    {
      while ( *((struct _KSHARED_READY_QUEUE **)&StaticRescheduleContext->NextThread + 5 * v50) != v37 )
      {
        if ( ++v50 >= LOBYTE(StaticRescheduleContext->MxCsr) )
          goto LABEL_77;
      }
      v49 = (__int64)(&StaticRescheduleContext->NextThread + 5 * v50);
    }
LABEL_77:
    v51 = a2;
    v52 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
    if ( v52 >= ((*(unsigned __int8 *)(v49 + 32) >> 1) & 1u) )
    {
      if ( v52 )
      {
        v74 = 0;
        if ( LOBYTE(StaticRescheduleContext->MxCsr) )
        {
          v75 = (__int64 *)v127;
          do
          {
            v76 = *((_QWORD *)&StaticRescheduleContext->NextThread + 5 * v74);
            v77 = (char *)StaticRescheduleContext + 40 * v74;
            v78 = *((_QWORD *)v77 + 5);
            v79 = v78 - 1;
            if ( (struct _KSHARED_READY_QUEUE *)v76 == v37 )
            {
              if ( v79 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v78) )
              {
                if ( (v77[49] & 1) != 0 )
                  *(_DWORD *)(v80 + 116) |= 2u;
                *(_BYTE *)(v80 + 565) = 1;
                KiInsertDeferredReadyList(v75, v80);
                v51 = a2;
              }
              v81 = v77[48] & 0xFE;
              *((_QWORD *)v77 + 4) = v51;
              v77[48] = v81;
              v82 = (*(_DWORD *)(v51 + 120) & 2) != 0;
              *((_QWORD *)v77 + 5) = v51;
              v77[48] = (v81 & 0xFD ^ (2 * v82)) & 0xC3 | 4;
              v77[49] ^= (a3 ^ v77[49]) & 1;
              if ( !KiIsPrcbThread(v51) )
                *(_DWORD *)(v51 + 536) = *(_DWORD *)(v83 + 36);
            }
            else
            {
              v85 = *(_QWORD *)(v76 + 36480);
              if ( v79 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v78) )
              {
                if ( (v77[49] & 1) != 0 )
                  *(_DWORD *)(v86 + 116) |= 2u;
                *(_BYTE *)(v86 + 565) = 1;
                KiInsertDeferredReadyList(v75, v86);
                v51 = a2;
              }
              v87 = v77[48] & 0xFE;
              *((_QWORD *)v77 + 4) = v51;
              v77[48] = v87;
              v88 = (v87 & 0xFD ^ (2 * ((*(_DWORD *)(v51 + 120) & 2) != 0))) & 0xE3 | 4;
              v89 = v88 | 0x20;
              v90 = v88 & 0xDF;
              if ( v51 == v85 )
                v89 = v90;
              v77[48] = v89;
              v77[49] &= ~1u;
              *((_QWORD *)v77 + 5) = v85;
              if ( !KiIsPrcbThread(v85) )
                *(_DWORD *)(v85 + 536) = *(_DWORD *)(v91 + 36);
            }
            v74 = v84 + 1;
          }
          while ( v74 < LOBYTE(StaticRescheduleContext->MxCsr) );
          v48 = 0;
        }
      }
      else
      {
        v68 = *(_QWORD *)(v49 + 24);
        v69 = &KiInitialProcess;
        v70 = *(_QWORD *)v49;
        if ( (unsigned __int64)(v68 - 1) <= 0xFFFFFFFFFFFFFFFCuLL && *(_UNKNOWN **)(v68 + 544) != &KiInitialProcess )
        {
          if ( (*(_BYTE *)(v49 + 33) & 1) != 0 )
            *(_DWORD *)(v68 + 116) |= 2u;
          v71 = (__int64 *)v127;
          *(_BYTE *)(v68 + 565) = 1;
          KiInsertDeferredReadyList(v71, v68);
        }
        v72 = *(_BYTE *)(v49 + 32) & 0xFE;
        *(_QWORD *)(v49 + 16) = a2;
        *(_BYTE *)(v49 + 32) = v72;
        v73 = (*(_DWORD *)(a2 + 120) & 2) != 0;
        *(_QWORD *)(v49 + 24) = a2;
        *(_BYTE *)(v49 + 32) = (v72 & 0xFD ^ (2 * v73)) & 0xC3 | 4;
        *(_BYTE *)(v49 + 33) ^= (*(_BYTE *)(v49 + 33) ^ a3) & 1;
        if ( *(void **)(a2 + 544) != v69 )
          *(_DWORD *)(a2 + 536) = *(_DWORD *)(v70 + 36);
      }
    }
    else
    {
      v53 = 0;
      if ( LOBYTE(StaticRescheduleContext->MxCsr) )
      {
        v54 = (__int64 *)v127;
        do
        {
          v55 = (struct _KSHARED_READY_QUEUE *)*((_QWORD *)&StaticRescheduleContext->NextThread + 5 * v53);
          v56 = (char *)StaticRescheduleContext + 40 * v53;
          v57 = *((_QWORD *)v56 + 5);
          v58 = v57 - 1;
          if ( v55 == v37 )
          {
            if ( v58 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v57) )
            {
              if ( (v56[49] & 1) != 0 )
                *(_DWORD *)(v59 + 116) |= 2u;
              *(_BYTE *)(v59 + 565) = 1;
              KiInsertDeferredReadyList(v54, v59);
              v51 = a2;
            }
            v60 = v56[48] & 0xFE;
            *((_QWORD *)v56 + 4) = v51;
            v56[48] = v60;
            v61 = (*(_DWORD *)(v51 + 120) & 2) != 0;
            *((_QWORD *)v56 + 5) = v51;
            v56[48] = (v60 & 0xFD ^ (2 * v61)) & 0xC3 | 4;
            v56[49] ^= (v56[49] ^ a3) & 1;
            if ( !KiIsPrcbThread(v51) )
              *(_DWORD *)(v51 + 536) = *(_DWORD *)(v62 + 36);
          }
          else
          {
            v63 = v55->Spare1[0];
            if ( v58 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v57) )
            {
              if ( (v56[49] & 1) != 0 )
                *(_DWORD *)(v64 + 116) |= 2u;
              *(_BYTE *)(v64 + 565) = 1;
              KiInsertDeferredReadyList(v54, v64);
            }
            v65 = v56[48] | 1;
            *((_QWORD *)v56 + 4) = v63;
            v56[48] = v65;
            v56[48] = (v65 & 0xFD ^ (2 * ((*(_DWORD *)(v63 + 120) & 2) != 0))) & 0xC3 | 4;
            v56[49] &= ~1u;
            *((_QWORD *)v56 + 5) = v63;
            if ( !KiIsPrcbThread(v63) )
              *(_DWORD *)(v67 + 536) = *(_DWORD *)(v66 + 36);
          }
          ++v53;
        }
        while ( v53 < LOBYTE(StaticRescheduleContext->MxCsr) );
      }
      v48 = 1;
    }
    *(_DWORD *)&StaticRescheduleContext->LegacyNumber = v52;
    if ( v48 )
    {
      v126 = 0LL;
      v92 = 0LL;
      v124 = 0LL;
      v93 = 0;
      v128 = 0LL;
      v125 = 0LL;
      while ( 1 )
      {
        v94 = 0LL;
        if ( !LOBYTE(StaticRescheduleContext->MxCsr) )
          break;
        p_IdleThread = (volatile __int64 **)&StaticRescheduleContext->IdleThread;
        MxCsr_low = LOBYTE(StaticRescheduleContext->MxCsr);
        do
        {
          if ( *p_IdleThread > v92 && (!v94 || *p_IdleThread < v94) )
            v94 = *p_IdleThread;
          p_IdleThread += 5;
          --MxCsr_low;
        }
        while ( MxCsr_low );
        if ( !v94 )
          break;
        v97 = &StaticRescheduleContext->PrcbPad03[16 * v93 + 3];
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          *((_QWORD *)v97 + 1) = v94;
          *(_QWORD *)v97 = 0LL;
          v98 = (_QWORD *)_InterlockedExchange64(v94, (__int64)v97);
          if ( v98 )
            KxWaitForLockOwnerShip((__int64)v97, v98);
        }
        else
        {
          v99 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v94, 0LL) )
          {
            do
            {
              if ( (++v99 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v99);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *v94 );
          }
        }
        ++v93;
        v92 = v94;
      }
LABEL_149:
      memset_0(v134, 0, sizeof(v134));
      KiStartReadyQueueEnumeratorForRescheduleContext((__int64)v134, (unsigned __int8 *)StaticRescheduleContext);
      while ( (int)KiAdvanceReadyQueueEnumerator((struct _KI_READY_QUEUE_ENUMERATOR *)v134, &v124, &v126, &v128, &v125) >= 0 )
      {
        v100 = v124;
        if ( v124->AffinityVersion == KiCpuSetSequence || (v124->MiscFlags & 8) != 0 )
        {
          if ( v125 )
          {
            v103 = v126;
          }
          else
          {
            SchedulingGroup = v124->SchedulingGroup;
            v103 = v126;
            v100 = v124;
            if ( SchedulingGroup )
            {
              ScbOffset = v126->ScbOffset;
              v15 = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + ScbOffset) == 0LL;
              v105 = (__int64)SchedulingGroup + ScbOffset;
              v125 = v105;
              if ( !v15
                && v124->Priority < 16
                && (*((_DWORD *)&v124->0 + 1) & 0x200) == 0
                && !v124->WaitBlock[3].SpareLong
                && v124->WaitIrql != 1 )
              {
                v106 = v105;
                v107 = (struct _KSCB *)v105;
                do
                {
                  if ( (*(_BYTE *)(v106 + 112) & 2) != 0 )
                    goto LABEL_166;
                  v106 = *(_QWORD *)(v106 + 416);
                }
                while ( v106 );
                do
                {
                  v108 = *(_DWORD *)(v105 + 124);
                  if ( v108 )
                    break;
                  v105 = *(_QWORD *)(v105 + 416);
                }
                while ( v105 );
                if ( v108 )
                {
LABEL_166:
                  KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v134, (__int64)v124);
                  v100->NextProcessor = v103->Number;
                  KiAddThreadToScbQueue(v103, v107, (__int64)v100, 0);
                  if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
                    EtwTraceReadyQueueInsertion((__int64)v100, v103->Number, 2, 0LL);
                  continue;
                }
              }
            }
            else
            {
              v125 = 0LL;
            }
          }
          v109 = KiCanLocalReadyThreadBeScheduledToRescheduleContext(
                   (struct _KI_RESCHEDULE_CONTEXT *)StaticRescheduleContext,
                   v100,
                   v103,
                   v128);
          if ( v109 )
          {
            KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v134, (__int64)v100);
            KiScheduleThreadToRescheduleContext(
              (unsigned __int8 *)StaticRescheduleContext,
              (__int64)v100,
              (__int64)v109,
              0,
              (__int64)v127);
            goto LABEL_149;
          }
        }
        else
        {
          KiRemoveCurrentlyEnumeratedThreadFromReadyQueue((__int64)v134, (__int64)v124);
          KiEnterDeferredReadyState((__int64)v100);
          v101 = v127;
          v100->SwapListEntry = (_SINGLE_LIST_ENTRY)v127->Next;
          v101->Next = (struct _SINGLE_LIST_ENTRY *)&v100->216;
        }
      }
      v110 = 0LL;
      v111 = 0;
      while ( 1 )
      {
        v112 = 0LL;
        if ( !LOBYTE(StaticRescheduleContext->MxCsr) )
          goto LABEL_190;
        v113 = (volatile signed __int64 **)&StaticRescheduleContext->IdleThread;
        v114 = LOBYTE(StaticRescheduleContext->MxCsr);
        do
        {
          if ( *v113 > v110 && (!v112 || *v113 < v112) )
            v112 = *v113;
          v113 += 5;
          --v114;
        }
        while ( v114 );
        if ( !v112 )
          goto LABEL_190;
        v115 = (volatile signed __int64 **)&StaticRescheduleContext->PrcbPad03[16 * v111 + 3];
        if ( (KiVelocityFlags & 0x200000) == 0 )
          break;
        _m_prefetchw(v115);
        v116 = (__int64)*v115;
        if ( !*v115 )
        {
          if ( v115 == (volatile signed __int64 **)_InterlockedCompareExchange64(v115[1], 0LL, (signed __int64)v115) )
            goto LABEL_189;
          v116 = KxWaitForLockChainValid((__int64 *)&StaticRescheduleContext->PrcbPad03[16 * v111 + 3]);
        }
        *v115 = 0LL;
        v117 = (__int64)v115[1];
        if ( (((unsigned __int8)v117 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v116 + 8), v117)) & 4) != 0 )
        {
          KeWakeAddressAll(v116 + 8, v117);
          ++v111;
          v110 = v112;
        }
        else
        {
LABEL_189:
          ++v111;
          v110 = v112;
        }
      }
      _InterlockedAnd64(v112, 0LL);
      goto LABEL_189;
    }
LABEL_190:
    v118 = v132;
    v119 = KiCommitRescheduleContext((unsigned __int8 *)StaticRescheduleContext, v132, 0, v127);
    KiReleasePrcbLocksForIsolationUnit(v131);
    v120 = (struct _KTHREAD *)a2;
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v119 && LOBYTE(StaticRescheduleContext->MxCsr) )
    {
      v121 = v133;
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(&StaticRescheduleContext->NextThread + 4 * v11 + v11),
          v118,
          v120,
          v121);
        ++v11;
        v120 = (struct _KTHREAD *)a2;
      }
      while ( v11 < LOBYTE(StaticRescheduleContext->MxCsr) );
    }
    return 1;
  }
  return result;
}
