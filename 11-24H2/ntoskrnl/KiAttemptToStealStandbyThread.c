/*
 * XREFs of KiAttemptToStealStandbyThread @ 0x1402A6884
 * Callers:
 *     KiSearchForNewThreadsInStandby @ 0x1402A3718 (KiSearchForNewThreadsInStandby.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402A37F0 (KiIsIsolationUnitIdleByHandle.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiFindStandbyThreadForSteal @ 0x1402A6E80 (KiFindStandbyThreadForSteal.c)
 *     KiAcquireMultiplePrcbLockArrays @ 0x1402A70E0 (KiAcquireMultiplePrcbLockArrays.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiAttemptToStealStandbyThread(struct _KPRCB *a1, struct _KPRCB *a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  _KCORE_CONTROL_BLOCK *v8; // r8
  __int64 ProcessorCount; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  char v12; // r10
  _BYTE *v13; // rax
  int v14; // edx
  unsigned __int64 *v15; // r8
  _BYTE *v16; // rax
  int v17; // r8d
  unsigned __int64 *v18; // r9
  int IsIsolationUnitIdleByHandle; // eax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KI_RESCHEDULE_CONTEXT *v22; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v24; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v25; // r9
  unsigned __int8 AllCompareThreadStateFlags; // r8
  _KPRCB *Prcb; // r10
  _KTHREAD *IdleThread; // rax
  __int64 v29; // r13
  unsigned int v30; // r12d
  struct _KPRCB *v31; // rbx
  char v32; // r14
  _KCORE_CONTROL_BLOCK *v33; // rcx
  unsigned __int8 v34; // al
  char v35; // r13
  _BYTE *v36; // rax
  int v37; // edx
  unsigned __int64 *v38; // r8
  char v39; // r9
  __int64 v40; // r13
  unsigned int v41; // r12d
  struct _KPRCB *v42; // rbx
  char v43; // r15
  _KCORE_CONTROL_BLOCK *v44; // rcx
  unsigned __int8 v45; // al
  _BYTE *v46; // rax
  int v47; // edx
  unsigned __int64 *p_StandbyThreadForSteal; // r8
  struct _KPRCB *v49; // r14
  __int64 v50; // r15
  struct _KPRCB *v51; // rbx
  __int64 i; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v53; // rdx
  char v54; // r10
  _KPRCB *v55; // r11
  _KTHREAD *v56; // rax
  _KTHREAD *v57; // rax
  __int64 v58; // r12
  struct _KPRCB *v59; // rbx
  char v60; // [rsp+30h] [rbp-D0h]
  char v61; // [rsp+31h] [rbp-CFh]
  __int64 v62; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C0h]
  struct _SINGLE_LIST_ENTRY v64; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  struct _KI_RESCHEDULE_CONTEXT *v67; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v69; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 StandbyThreadForSteal; // [rsp+78h] [rbp-88h] BYREF
  struct _KI_RESCHEDULE_CONTEXT v71; // [rsp+80h] [rbp-80h] BYREF

  v3 = a3;
  v69 = a3;
  v65 = a1;
  memset_0(&v71, 0, sizeof(v71));
  v64.Next = 0LL;
  v6 = 0LL;
  v62 = 0LL;
  v66 = 0LL;
  CoreControlBlock = a2->CoreControlBlock;
  v8 = *(_KCORE_CONTROL_BLOCK **)(v3 + 36440);
  if ( CoreControlBlock == v8 )
  {
    KiAcquirePrcbLocksForIsolationUnit(v3, 1LL, (unsigned __int64 *)&v62);
    v11 = v62;
    v63 = v62;
  }
  else
  {
    ProcessorCount = v8->ProcessorCount;
    v10 = CoreControlBlock->ProcessorCount;
    v6 = (unsigned __int64)a2 | 1;
    v66 = (unsigned __int64)a2 | 1;
    v11 = v3 | 1;
    v63 = v3 | 1;
    v62 = v3 | 1;
    KiAcquireMultiplePrcbLockArrays(CoreControlBlock->Prcbs, v10, v8->Prcbs, ProcessorCount);
  }
  if ( (*(_BYTE *)(v3 + 35) & 1) != 0
    || (IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v62),
        (StandbyThreadForSteal = KiFindStandbyThreadForSteal(v3, a2, IsIsolationUnitIdleByHandle != 0)) == 0) )
  {
    v12 = 0;
    goto LABEL_5;
  }
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v68 = (unsigned __int64)StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v62);
  if ( v6 )
  {
    v22 = &v71;
    v67 = &v71;
    memset_0(&v71, 0, sizeof(v71));
    KiStartRescheduleContext((__int64)&v71, &v66);
  }
  else
  {
    v22 = StaticRescheduleContext;
    v67 = StaticRescheduleContext;
  }
  v61 = 0;
  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v22, a2);
  v25 = RescheduleContextEntryForPrcb;
  AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
  Prcb = RescheduleContextEntryForPrcb->Prcb;
  if ( (AllCompareThreadStateFlags & 0x20) == 0 )
    RescheduleContextEntryForPrcb->___u5[0] |= 1u;
  RescheduleContextEntryForPrcb->___u5[0] |= 2u;
  RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
  RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
  IdleThread = Prcb->IdleThread;
  *((_BYTE *)&v25->0 + 1) &= ~1u;
  v25->NewThread = IdleThread;
  if ( (AllCompareThreadStateFlags & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < v22->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v53 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v22->ProcessorEntries + 32 * i + 8 * (unsigned int)i);
      if ( v53 != v25 )
      {
        v54 = v53->AllCompareThreadStateFlags;
        v55 = v53->Prcb;
        if ( (v54 & 0x20) == 0 )
          v53->___u5[0] |= 1u;
        v53->___u5[0] |= 2u;
        v56 = v55->IdleThread;
        v53->AllCompareThreadStateFlags = v54 & 0xC0 | 5;
        v53->CompareThread = v56;
        v57 = v55->IdleThread;
        *((_BYTE *)&v53->0 + 1) &= ~1u;
        v53->NewThread = v57;
      }
    }
    v22->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  if ( v22 == StaticRescheduleContext )
  {
    v35 = 1;
  }
  else
  {
    KiSearchForNewThreadsForRescheduleContext(v24);
    v29 = 0LL;
    v30 = (DWORD1(xmmword_140FC6B50) >> 9) & 2;
    v61 = 0;
    if ( v22->ProcessorCount )
    {
      v31 = v65;
      v32 = 0;
      do
      {
        v32 |= KiCommitRescheduleContextEntry(
                 (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v22->ProcessorEntries + 32 * v29
                                                                                       + 8 * (unsigned int)v29),
                 v31,
                 v30,
                 &v64);
        v29 = (unsigned int)(v29 + 1);
      }
      while ( (unsigned int)v29 < v22->ProcessorCount );
      v11 = v63;
      v61 = v32;
      StaticRescheduleContext = (struct _KI_RESCHEDULE_CONTEXT *)v68;
    }
    if ( v22->IsolationWidth == KiIsolationWidthCore )
    {
      v33 = v22->ProcessorEntries[0].Prcb->CoreControlBlock;
      v34 = v33->ScanStartIndex + 1;
      v33->ScanStartIndex = v34;
      if ( v34 >= v33->ProcessorCount )
        v33->ScanStartIndex = 0;
    }
    LODWORD(v3) = v69;
    v35 = 0;
  }
  if ( v6 )
  {
    v69 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v6 & 1) != 0 )
    {
      v36 = *(_BYTE **)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v37 = (unsigned __int8)*v36;
      v38 = (unsigned __int64 *)(v36 + 8);
      if ( !*v36 )
      {
LABEL_35:
        v6 = 0LL;
        v66 = 0LL;
        goto LABEL_36;
      }
    }
    else
    {
      v38 = &v69;
      v37 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v38[--v37] + 48), 0LL);
    while ( v37 );
    v11 = v62;
    v63 = v62;
    goto LABEL_35;
  }
LABEL_36:
  if ( (unsigned __int8)v35 | (unsigned __int8)KiScheduleThreadToRescheduleContext(
                                                 (_DWORD)StaticRescheduleContext,
                                                 StandbyThreadForSteal,
                                                 v3,
                                                 0,
                                                 (__int64)&v64) )
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
  v39 = 0;
  v40 = 0LL;
  v41 = (DWORD1(xmmword_140FC6B50) >> 9) & 2;
  v60 = 0;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    v42 = v65;
    v43 = 0;
    do
    {
      v43 |= KiCommitRescheduleContextEntry(
               (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * v40
                                                     + 8 * (unsigned int)v40),
               v42,
               v41,
               &v64);
      v40 = (unsigned int)(v40 + 1);
    }
    while ( (unsigned int)v40 < StaticRescheduleContext->ProcessorCount );
    v11 = v63;
    v60 = v43;
    v39 = v43;
    v22 = v67;
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    v44 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v45 = v44->ScanStartIndex + 1;
    v44->ScanStartIndex = v45;
    if ( v45 >= v44->ProcessorCount )
      v44->ScanStartIndex = 0;
  }
  if ( v11 )
  {
    StandbyThreadForSteal = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v11 & 1) != 0 )
    {
      v46 = *(_BYTE **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v47 = (unsigned __int8)*v46;
      p_StandbyThreadForSteal = (unsigned __int64 *)(v46 + 8);
      if ( !*v46 )
      {
LABEL_50:
        v11 = 0LL;
        v63 = 0LL;
        v62 = 0LL;
        goto LABEL_51;
      }
    }
    else
    {
      p_StandbyThreadForSteal = &StandbyThreadForSteal;
      v47 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(p_StandbyThreadForSteal[--v47] + 48), 0LL);
    while ( v47 );
    v6 = v66;
    goto LABEL_50;
  }
LABEL_51:
  if ( v61 )
  {
    v58 = 0LL;
    if ( v22->ProcessorCount )
    {
      v59 = v65;
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v22->ProcessorEntries + 32 * v58 + 8 * (unsigned int)v58),
          v59,
          0LL,
          0LL);
        v58 = (unsigned int)(v58 + 1);
      }
      while ( (unsigned int)v58 < v22->ProcessorCount );
      v11 = v63;
    }
    if ( !v60 )
      goto LABEL_69;
    goto LABEL_65;
  }
  if ( v39 )
  {
LABEL_65:
    v50 = 0LL;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      v51 = v65;
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                + 32 * v50
                                                + 8 * (unsigned int)v50),
          v51,
          0LL,
          0LL);
        v50 = (unsigned int)(v50 + 1);
      }
      while ( (unsigned int)v50 < StaticRescheduleContext->ProcessorCount );
      v11 = v63;
    }
LABEL_69:
    v49 = v65;
    KiFlushSoftwareInterruptBatch(&v65->DeferredDispatchInterrupts);
    goto LABEL_54;
  }
  v49 = v65;
LABEL_54:
  if ( v64.Next )
    KiReadyDeferredReadyList(v49, &v64);
  v12 = 1;
LABEL_5:
  if ( !v6 )
    goto LABEL_10;
  v68 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v6 & 1) != 0 )
  {
    v13 = *(_BYTE **)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
    v14 = (unsigned __int8)*v13;
    v15 = (unsigned __int64 *)(v13 + 8);
    if ( !*v13 )
      goto LABEL_10;
  }
  else
  {
    v15 = &v68;
    v14 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v15[--v14] + 48), 0LL);
  while ( v14 );
  v11 = v62;
LABEL_10:
  if ( v11 )
  {
    v67 = (struct _KI_RESCHEDULE_CONTEXT *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v11 & 1) != 0 )
    {
      v16 = *(_BYTE **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v17 = (unsigned __int8)*v16;
      v18 = (unsigned __int64 *)(v16 + 8);
      if ( !*v16 )
        return v12;
    }
    else
    {
      v18 = (unsigned __int64 *)&v67;
      v17 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v18[--v17] + 48), 0LL);
    while ( v17 );
  }
  return v12;
}
