/*
 * XREFs of MiAddViewsForSection @ 0x14020DA70
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MiReferenceDataSubsections @ 0x140416740 (MiReferenceDataSubsections.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(int **BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  int *v3; // r14
  ULONG_PTR v4; // r13
  __int16 v5; // bp
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rcx
  int active; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned __int64 v14; // rax
  ULONG_PTR v15; // rdi
  struct _KTHREAD *v16; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v18; // r9
  unsigned int i; // eax
  char *v20; // r10
  __int64 v21; // rax
  __int64 v22; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v25; // zf
  int PrototypePtes; // eax
  unsigned int v28; // ecx
  KIRQL v29; // al
  ULONG_PTR v30; // rcx
  __int64 v31; // rcx
  unsigned __int32 v32; // eax
  unsigned __int32 v33; // ett
  __int64 v34; // rcx
  unsigned int FileExtents; // eax
  __int64 v36; // rdi
  KIRQL v37; // bl
  __int64 v38; // r15
  ULONG_PTR v39; // [rsp+38h] [rbp-80h]
  __int64 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+48h] [rbp-70h]
  __int64 v42; // [rsp+58h] [rbp-60h]
  ULONG_PTR v43; // [rsp+68h] [rbp-50h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v47; // [rsp+D0h] [rbp+18h]
  int v48; // [rsp+D8h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = (ULONG_PTR)BugCheckParameter2;
  v5 = a3;
  v39 = 0LL;
  if ( *((_QWORD *)*BugCheckParameter2 + 8) )
  {
    v48 = 1;
    CurrentThread = 0LL;
    v41 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v48 = 0;
    v41 = *(_QWORD *)v3;
    --CurrentThread->SpecialApcDisable;
    v21 = KeAbPreAcquire(v41 + 40, 0LL, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx(v41 + 40, v21, v41 + 40);
    if ( v22 )
      *(_BYTE *)(v22 + 10) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = 0;
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, CurrentIrql, a3);
    v9 = v3[18];
    v10 = v9;
    for ( LODWORD(v10) = v9 & 0xBFFFFFFF; (v9 & 0xBFFFFFFF) != 0x80000000; v9 = v3[18] )
    {
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedOr(v3 + 18, 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
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
  }
  do
  {
    v43 = v4;
    if ( *(_QWORD *)(v4 + 8) )
    {
      if ( (v5 & 0x200) != 0 )
      {
        v47 = -1073741800;
        MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
        v13 = v48;
        if ( v48 )
        {
          v28 = -1073741800;
LABEL_77:
          v4 = v39;
LABEL_78:
          if ( v4 )
          {
            v37 = ExAcquireSpinLockExclusive(v3 + 18);
            v38 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
            MiReleaseSpinLockExclusive(v3 + 18, v37);
            if ( v38 )
              MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (v3[15] & 0x3FF)), v13, v38);
            v28 = v47;
          }
          if ( (v5 & 1) != 0 )
          {
            v29 = ExAcquireSpinLockExclusive(v3 + 18);
            --*((_QWORD *)v3 + 5);
            --v3[22];
            MiCheckControlArea(v3, v29);
            return (unsigned int)v47;
          }
          return v28;
        }
      }
      else
      {
        active = MiReferenceActiveSubsection(v4);
        v47 = active;
        if ( active >= 0 )
        {
          v13 = v48;
          if ( v48 && (*(_DWORD *)(v4 + 52) & 0x40000000) != 0 )
          {
            MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
            FileExtents = MiAllocateFileExtents(v4, 0, -1);
            v47 = FileExtents;
            v28 = FileExtents;
            if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
            {
              v13 = v48;
              goto LABEL_78;
            }
            ExAcquireSpinLockExclusive(v3 + 18);
            if ( v47 < 0 )
            {
              v36 = MiDecrementSubsections(v4);
              if ( v36 )
              {
                MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
                MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (v3[15] & 0x3FF)), 1LL, v36);
                ExAcquireSpinLockExclusive(v3 + 18);
              }
              goto LABEL_64;
            }
            v13 = v48;
          }
          goto LABEL_20;
        }
        if ( active == -1073741302 )
        {
LABEL_64:
          v13 = v48;
          continue;
        }
        MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
        v13 = v48;
        if ( v48 )
          goto LABEL_121;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v41 + 40);
      KeAbPostRelease(v41 + 40);
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        ((void (*)(void))KiCheckForKernelApcDelivery)();
      }
LABEL_121:
      v28 = v47;
      goto LABEL_77;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v13 = v48;
    if ( !v48 )
    {
      v30 = v41 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ((void (*)(void))ExfTryToWakePushLock)();
        v30 = v41 + 40;
      }
      KeAbPostRelease(v30);
      v25 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v25
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        ((void (*)(void))KiCheckForKernelApcDelivery)();
      }
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    PrototypePtes = MiCreatePrototypePtes(v4);
    v47 = PrototypePtes;
    v28 = PrototypePtes;
    if ( PrototypePtes >= 0 )
    {
      if ( !v48 )
      {
        --CurrentThread->SpecialApcDisable;
        v31 = KeAbPreAcquire(v41 + 40, 0LL, 0LL);
        v40 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 40), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(v41 + 40, v31, v41 + 40);
          v31 = v40;
        }
        if ( v31 )
          *(_BYTE *)(v31 + 10) = 1;
      }
      ExAcquireSpinLockExclusive(v3 + 18);
LABEL_20:
      if ( a2 )
      {
        v14 = *(unsigned int *)(v4 + 44);
        if ( a2 <= v14 )
          break;
        a2 -= v14;
      }
      v4 = *(_QWORD *)(v4 + 16);
      v39 = v43;
      if ( !v13 )
        v39 = v43;
      continue;
    }
    if ( PrototypePtes != -1073741302 )
      goto LABEL_77;
    if ( !v48 )
    {
      --CurrentThread->SpecialApcDisable;
      v34 = KeAbPreAcquire(v41 + 40, 0LL, 0LL);
      v42 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 40), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v41 + 40, v34, v41 + 40);
        v34 = v42;
      }
      if ( v34 )
        *(_BYTE *)(v34 + 10) = 1;
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
  if ( !v13 )
  {
    v15 = v41 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    v16 = KeGetCurrentThread();
    _disable();
    KernelAbEntries = v16->KernelAbEntries;
    v18 = v15 & 0x7FFFFFFFFFFFFFFCLL;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v20 = (char *)KernelAbEntries + 88 * i;
      v12 = *((_QWORD *)v20 + 2);
      if ( (v12 & 0x7FFFFFFFFFFFFFFCLL) == v18 && v20[26] && (v12 & 1) == 0 )
      {
        v20[26] = 0;
        KiAbEntryFreeAndEnableInterrupts(v20 + 16, v16, v15, 1LL, 0LL);
        goto LABEL_47;
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v32 = *SchedulerAssist;
      do
      {
        v12 = v32;
        LODWORD(v12) = v32 & 0xFFDFFFFF;
        v33 = v32;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v32 & 0xFFDFFFFF, v32);
      }
      while ( v33 != v32 );
      if ( (v32 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
LABEL_47:
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(CurrentPrcb, v12, SchedulerAssist, v18);
  }
  return 0LL;
}
