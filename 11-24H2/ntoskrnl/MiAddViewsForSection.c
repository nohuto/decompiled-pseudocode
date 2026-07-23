/*
 * XREFs of MiAddViewsForSection @ 0x140336DD0
 * Callers:
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(int **BugCheckParameter2, unsigned __int64 a2, __int16 a3)
{
  int *v3; // r14
  ULONG_PTR v4; // r13
  __int16 v5; // bp
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // ebx
  int i; // edx
  int active; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  struct _KTHREAD *v15; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v17; // r9
  unsigned int j; // eax
  char *v19; // r10
  char *v20; // rax
  char *v21; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v24; // zf
  int PrototypePtes; // eax
  unsigned int v27; // ecx
  KIRQL v28; // al
  volatile signed __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rcx
  unsigned __int32 v35; // eax
  unsigned __int32 v36; // ett
  char *v37; // rcx
  unsigned int FileExtents; // eax
  __int16 v39; // ax
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // r15
  KIRQL v46; // bl
  __int64 v47; // r15
  __int16 v48; // [rsp+30h] [rbp-88h]
  ULONG_PTR v49; // [rsp+38h] [rbp-80h]
  char *v50; // [rsp+38h] [rbp-80h]
  __int16 v51; // [rsp+40h] [rbp-78h]
  __int64 v52; // [rsp+48h] [rbp-70h]
  int v53; // [rsp+58h] [rbp-60h]
  char *v54; // [rsp+58h] [rbp-60h]
  ULONG_PTR v55; // [rsp+68h] [rbp-50h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v59; // [rsp+D0h] [rbp+18h]
  int v60; // [rsp+D0h] [rbp+18h]
  int v61; // [rsp+D8h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  v48 = a3;
  v5 = a3;
  v49 = 0LL;
  if ( *((_QWORD *)*BugCheckParameter2 + 8) )
  {
    v61 = 1;
    CurrentThread = 0LL;
    v52 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v61 = 0;
    v52 = *(_QWORD *)v3;
    --CurrentThread->SpecialApcDisable;
    v20 = (char *)KeAbPreAcquire(v52 + 40, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v52 + 40), v20, v52 + 40);
    if ( v21 )
      v21[10] = 1;
  }
  v51 = v5 & 0x80;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, CurrentIrql);
    for ( i = v3[18]; (i & 0xBFFFFFFF) != 0x80000000; i = v3[18] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v3 + 18, 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 18, CurrentIrql);
  }
  if ( (v5 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++v3[22];
    v5 |= 4u;
    v48 = v5;
  }
  do
  {
    v59 = *(_DWORD *)(v4 + 44);
    v55 = v4;
    if ( *(_QWORD *)(v4 + 8) )
    {
      if ( (v5 & 0x200) != 0 )
      {
        v60 = -1073741800;
        MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
        v12 = v61;
        if ( v61 )
        {
          v27 = -1073741800;
LABEL_77:
          v4 = v49;
LABEL_78:
          if ( v4 )
          {
            v45 = v51 | 8;
            if ( (v5 & 5) != 0 )
              v45 = 0;
            v46 = ExAcquireSpinLockExclusive(v3 + 18);
            v47 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v4, v45);
            MiReleaseSpinLockExclusive(v3 + 18, v46);
            if ( v47 )
              MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (v3[15] & 0x3FF)), v12, v47);
            v27 = v60;
          }
          if ( (v5 & 1) != 0 )
          {
            v28 = ExAcquireSpinLockExclusive(v3 + 18);
            --*((_QWORD *)v3 + 5);
            --v3[22];
            MiCheckControlArea(v3, v28);
            return (unsigned int)v60;
          }
          return v27;
        }
      }
      else
      {
        active = MiReferenceActiveSubsection(v4);
        v60 = active;
        if ( active >= 0 )
        {
          v12 = v61;
          if ( v61 && (*(_DWORD *)(v4 + 52) & 0x40000000) != 0 )
          {
            MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
            FileExtents = MiAllocateFileExtents(v4, 0, -1);
            v60 = FileExtents;
            v27 = FileExtents;
            if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
            {
              v12 = v61;
              goto LABEL_78;
            }
            ExAcquireSpinLockExclusive(v3 + 18);
            if ( v60 < 0 )
            {
              if ( (v5 & 5) != 0 )
                v39 = 0;
              else
                v39 = v51 | 8;
              v48 = v39;
              v40 = MiDecrementSubsections(v4, v4, v39);
              if ( v40 )
              {
                MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
                MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (v3[15] & 0x3FF)), 1LL, v40);
                ExAcquireSpinLockExclusive(v3 + 18);
              }
              goto LABEL_64;
            }
            v12 = v61;
          }
          goto LABEL_20;
        }
        if ( active == -1073741302 )
        {
LABEL_64:
          v12 = v61;
          continue;
        }
        MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
        v12 = v61;
        if ( v61 )
          goto LABEL_124;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v52 + 40));
      KeAbPostRelease(v52 + 40);
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v42, v41, v43, v44);
      }
LABEL_124:
      v27 = v60;
      goto LABEL_77;
    }
    v53 = *(_DWORD *)(v4 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v12 = v61;
    if ( !v61 )
    {
      v29 = (volatile signed __int64 *)(v52 + 40);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v29);
        v29 = (volatile signed __int64 *)(v52 + 40);
      }
      KeAbPostRelease((ULONG_PTR)v29);
      v24 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v24
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v31, v30, v32, v33);
      }
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    PrototypePtes = MiCreatePrototypePtes(v4, v48, v59 - v53, v59);
    v60 = PrototypePtes;
    v27 = PrototypePtes;
    if ( PrototypePtes >= 0 )
    {
      if ( !v61 )
      {
        --CurrentThread->SpecialApcDisable;
        v34 = (char *)KeAbPreAcquire(v52 + 40, 0LL);
        v50 = v34;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 40), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v52 + 40), v34, v52 + 40);
          v34 = v50;
        }
        if ( v34 )
          v34[10] = 1;
      }
      ExAcquireSpinLockExclusive(v3 + 18);
LABEL_20:
      if ( a2 )
      {
        v13 = *(unsigned int *)(v4 + 44);
        if ( a2 <= v13 )
          break;
        a2 -= v13;
      }
      v4 = *(_QWORD *)(v4 + 16);
      v49 = v55;
      if ( !v12 )
      {
        v49 = v55;
        v48 = v51 | 4;
      }
      continue;
    }
    if ( PrototypePtes != -1073741302 )
      goto LABEL_77;
    if ( !v61 )
    {
      --CurrentThread->SpecialApcDisable;
      v37 = (char *)KeAbPreAcquire(v52 + 40, 0LL);
      v54 = v37;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 40), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v52 + 40), v37, v52 + 40);
        v37 = v54;
      }
      if ( v37 )
        v37[10] = 1;
    }
    ExAcquireSpinLockExclusive(v3 + 18);
  }
  while ( v4 );
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      v3[18] = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      v3[18] = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 18, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( !v12 )
  {
    v14 = v52 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14);
    v15 = KeGetCurrentThread();
    _disable();
    KernelAbEntries = v15->KernelAbEntries;
    v17 = v14 & 0x7FFFFFFFFFFFFFFCLL;
    for ( j = 0; j < KernelAbEntries->EntryCount; ++j )
    {
      v19 = (char *)KernelAbEntries + 88 * j;
      v11 = *((_QWORD *)v19 + 2);
      if ( (v11 & 0x7FFFFFFFFFFFFFFCLL) == v17 && v19[26] && (v11 & 1) == 0 )
      {
        v19[26] = 0;
        KiAbEntryFreeAndEnableInterrupts((__int64)(v19 + 16), (ULONG_PTR)v15, v14, 1LL, 0LL);
        goto LABEL_47;
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v35 = *SchedulerAssist;
      do
      {
        v11 = v35;
        LODWORD(v11) = v35 & 0xFFDFFFFF;
        v36 = v35;
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v35 & 0xFFDFFFFF, v35);
      }
      while ( v36 != v35 );
      if ( (v35 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_47:
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(CurrentPrcb, v11, SchedulerAssist, v17);
  }
  return 0LL;
}
