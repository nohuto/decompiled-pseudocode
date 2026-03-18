/*
 * XREFs of KiAttemptToStealStandbyThread @ 0x14032E858
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x140315420 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14032EC90 (KiIsIsolationUnitIdleByHandle.c)
 *     KiAcquireMultiplePrcbLockArrays @ 0x1403308F0 (KiAcquireMultiplePrcbLockArrays.c)
 *     KiFindStandbyThreadForSteal @ 0x1403309C0 (KiFindStandbyThreadForSteal.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiAttemptToStealStandbyThread(struct _KPRCB *a1, struct _KPRCB *a2, __int64 a3)
{
  struct _KPRCB *v5; // r12
  unsigned __int64 v6; // rbx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  char v8; // si
  _KCORE_CONTROL_BLOCK *v9; // r8
  __int64 ProcessorCount; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  int IsIsolationUnitIdleByHandle; // eax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KI_RESCHEDULE_CONTEXT *v16; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v18; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v19; // r9
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // r8
  _KTHREAD *IdleThread; // rax
  char v23; // r13
  _BYTE *v24; // rax
  int v25; // edx
  unsigned __int64 *v26; // r8
  char v27; // al
  _BYTE *v28; // rax
  int v29; // edx
  unsigned __int64 *p_StandbyThreadForSteal; // r8
  __int64 j; // r15
  __int64 i; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v33; // rdx
  char v34; // r10
  _KPRCB *v35; // r11
  _KTHREAD *v36; // rax
  _KTHREAD *v37; // rax
  __int64 v38; // r12
  struct _KPRCB *v39; // r13
  char v40; // [rsp+30h] [rbp-D0h]
  char v41; // [rsp+31h] [rbp-CFh]
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  struct _SINGLE_LIST_ENTRY v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  struct _KPRCB *v45; // [rsp+50h] [rbp-B0h]
  unsigned __int64 StandbyThreadForSteal; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  struct _KI_RESCHEDULE_CONTEXT v49; // [rsp+70h] [rbp-90h] BYREF

  v48 = a3;
  v45 = a1;
  v5 = a1;
  memset_0(&v49, 0, sizeof(v49));
  v43.Next = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  CoreControlBlock = a2->CoreControlBlock;
  v8 = 1;
  v9 = *(_KCORE_CONTROL_BLOCK **)(a3 + 36440);
  if ( CoreControlBlock == v9 )
  {
    KiAcquirePrcbLocksForIsolationUnit(a3, 1, (unsigned __int64 *)&v42);
    v12 = v42;
  }
  else
  {
    ProcessorCount = v9->ProcessorCount;
    v11 = CoreControlBlock->ProcessorCount;
    v6 = (unsigned __int64)a2 | 1;
    v44 = (unsigned __int64)a2 | 1;
    v12 = a3 | 1;
    v42 = a3 | 1;
    KiAcquireMultiplePrcbLockArrays(CoreControlBlock->Prcbs, v11, v9->Prcbs, ProcessorCount);
  }
  if ( (*(_BYTE *)(a3 + 35) & 1) != 0
    || (IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v42),
        (StandbyThreadForSteal = KiFindStandbyThreadForSteal(a3, a2, IsIsolationUnitIdleByHandle != 0)) == 0) )
  {
    v8 = 0;
    goto LABEL_5;
  }
  StaticRescheduleContext = v5->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v42);
  if ( v6 )
  {
    v16 = &v49;
    memset_0(&v49, 0, sizeof(v49));
    KiStartRescheduleContext((__int64)&v49, &v44);
  }
  else
  {
    v16 = StaticRescheduleContext;
  }
  v41 = 0;
  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v16, a2);
  v19 = RescheduleContextEntryForPrcb;
  AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
  Prcb = RescheduleContextEntryForPrcb->Prcb;
  if ( (AllCompareThreadStateFlags & 0x20) == 0 )
    RescheduleContextEntryForPrcb->___u5[0] |= 1u;
  RescheduleContextEntryForPrcb->___u5[0] |= 2u;
  RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
  RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
  IdleThread = Prcb->IdleThread;
  *((_BYTE *)&v19->0 + 1) &= ~1u;
  v19->NewThread = IdleThread;
  if ( (AllCompareThreadStateFlags & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < v16->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v33 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v16->ProcessorEntries + 32 * i + 8 * (unsigned int)i);
      if ( v33 != v19 )
      {
        v34 = v33->AllCompareThreadStateFlags;
        v35 = v33->Prcb;
        if ( (v34 & 0x20) == 0 )
          v33->___u5[0] |= 1u;
        v33->___u5[0] |= 2u;
        v36 = v35->IdleThread;
        v33->AllCompareThreadStateFlags = v34 & 0xC0 | 5;
        v33->CompareThread = v36;
        v37 = v35->IdleThread;
        *((_BYTE *)&v33->0 + 1) &= ~1u;
        v33->NewThread = v37;
      }
    }
    v16->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  if ( v16 == StaticRescheduleContext )
  {
    v23 = 1;
  }
  else
  {
    KiSearchForNewThreadsForRescheduleContext(v18, &v43);
    v23 = 0;
    v41 = KiCommitRescheduleContext(&v16->ProcessorCount, v5, 0, &v43);
  }
  if ( v6 )
  {
    v47 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v6 & 1) != 0 )
    {
      v24 = *(_BYTE **)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v25 = (unsigned __int8)*v24;
      v26 = (unsigned __int64 *)(v24 + 8);
      if ( !*v24 )
      {
LABEL_23:
        v6 = 0LL;
        v44 = 0LL;
        goto LABEL_24;
      }
    }
    else
    {
      v26 = &v47;
      v25 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v26[--v25] + 48), 0LL);
    while ( v25 );
    v12 = v42;
    goto LABEL_23;
  }
LABEL_24:
  if ( (unsigned __int8)v23 | (unsigned __int8)KiScheduleThreadToRescheduleContext(
                                                 &StaticRescheduleContext->ProcessorCount,
                                                 StandbyThreadForSteal,
                                                 v48,
                                                 0,
                                                 (__int64)&v43) )
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v43);
  v27 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, v5, 0, &v43);
  v40 = v27;
  if ( v12 )
  {
    StandbyThreadForSteal = v12 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v12 & 1) != 0 )
    {
      v28 = *(_BYTE **)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
      v29 = (unsigned __int8)*v28;
      p_StandbyThreadForSteal = (unsigned __int64 *)(v28 + 8);
      if ( !*v28 )
      {
LABEL_31:
        v27 = v40;
        v12 = 0LL;
        v42 = 0LL;
        goto LABEL_32;
      }
    }
    else
    {
      p_StandbyThreadForSteal = &StandbyThreadForSteal;
      v29 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(p_StandbyThreadForSteal[--v29] + 48), 0LL);
    while ( v29 );
    v6 = v44;
    goto LABEL_31;
  }
LABEL_32:
  if ( v41 )
  {
    v38 = 0LL;
    if ( v16->ProcessorCount )
    {
      v39 = v45;
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v16->ProcessorEntries + 32 * v38 + 8 * (unsigned int)v38),
          v39,
          0LL,
          0LL);
        v38 = (unsigned int)(v38 + 1);
      }
      while ( (unsigned int)v38 < v16->ProcessorCount );
    }
    v5 = v45;
    if ( !v40 )
      goto LABEL_44;
  }
  else if ( !v27 )
  {
    goto LABEL_34;
  }
  for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
    KiCompleteRescheduleContextEntry(
      (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                            + 32 * j
                                            + 8 * (unsigned int)j),
      v5,
      0LL,
      0LL);
LABEL_44:
  KiFlushSoftwareInterruptBatch((char *)&v5->DeferredDispatchInterrupts);
LABEL_34:
  if ( v43.Next )
    KiReadyDeferredReadyList(v5, &v43);
LABEL_5:
  if ( v6 )
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v44);
  if ( v12 )
    KiReleasePrcbLocksForIsolationUnit(&v42);
  return v8;
}
