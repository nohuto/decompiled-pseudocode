/*
 * XREFs of MiAddViewsForSection @ 0x140213970
 * Callers:
 *     MiReferenceDataSubsections @ 0x1402A485C (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiDecrementSubsections @ 0x140322C00 (MiDecrementSubsections.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(int **BugCheckParameter2, unsigned __int64 a2, __int16 a3)
{
  int *v3; // r14
  unsigned int v4; // ebx
  ULONG_PTR v7; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // edx
  __int64 v10; // rcx
  int active; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  struct _KTHREAD *v15; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  _KLOCK_ENTRY *v19; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v21; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  int PrototypePtes; // eax
  unsigned int v29; // ecx
  KIRQL v30; // al
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int32 v37; // eax
  unsigned __int32 v38; // ett
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned int FileExtents; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  KIRQL v45; // bl
  __int64 v46; // rsi
  ULONG_PTR v47; // [rsp+38h] [rbp-80h]
  __int64 v48; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v49; // [rsp+48h] [rbp-70h]
  unsigned __int8 v50; // [rsp+50h] [rbp-68h]
  __int64 v51; // [rsp+58h] [rbp-60h]
  __int64 v52; // [rsp+58h] [rbp-60h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  ULONG_PTR v54; // [rsp+60h] [rbp-58h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v56; // [rsp+C0h] [rbp+8h]
  int v58; // [rsp+D0h] [rbp+18h]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v47 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( *((_QWORD *)*BugCheckParameter2 + 8) )
  {
    v56 = 1;
    v49 = 0LL;
    v48 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v48 = *(_QWORD *)v3;
    v24 = *(_QWORD *)v3;
    v56 = 0;
    --CurrentThread->SpecialApcDisable;
    v25 = (volatile signed __int32 *)(v24 + 40);
    v49 = CurrentThread;
    v26 = KeAbPreAcquire(v24 + 40, 0LL, 0LL);
    v27 = v26;
    if ( _interlockedbittestandset64(v25, 0LL) )
      ExfAcquirePushLockExclusiveEx(v25, v26, v25);
    v4 = 0;
    if ( v27 )
      *(_BYTE *)(v27 + 10) = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset(v3 + 18, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v3 + 18, CurrentIrql);
    v9 = v3[18];
    v10 = v9;
    for ( LODWORD(v10) = v9 & 0xBFFFFFFF; (v9 & 0xBFFFFFFF) != 0x80000000; v9 = v3[18] )
    {
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedOr(v3 + 18, 0x40000000u);
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
      {
        HvlNotifyLongSpinWait(v4);
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
  if ( (a3 & 1) != 0 )
  {
    ++*((_QWORD *)v3 + 5);
    ++v3[22];
    a3 |= 4u;
  }
  do
  {
    v54 = v7;
    if ( !*(_QWORD *)(v7 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v3 + 18);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( !v56 )
      {
        v32 = v48 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v32);
          v32 = v48 + 40;
        }
        KeAbPostRelease(v32);
        v21 = v49->SpecialApcDisable++ == -1;
        if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
          KiCheckForKernelApcDelivery(v49, v33, v34, v35);
      }
      if ( (a3 & 2) != 0 )
        return 3221225865LL;
      PrototypePtes = MiCreatePrototypePtes(v7);
      v58 = PrototypePtes;
      v29 = PrototypePtes;
      if ( PrototypePtes < 0 )
      {
        if ( PrototypePtes != -1073741302 )
          goto LABEL_76;
        if ( !v56 )
        {
          --v49->SpecialApcDisable;
          v39 = KeAbPreAcquire(v48 + 40, 0LL, 0LL);
          v52 = v39;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 40), 0LL) )
          {
            ExfAcquirePushLockExclusiveEx(v48 + 40, v39, v48 + 40);
            v39 = v52;
          }
          if ( v39 )
            *(_BYTE *)(v39 + 10) = 1;
        }
        goto LABEL_101;
      }
      if ( !v56 )
      {
        --v49->SpecialApcDisable;
        v36 = KeAbPreAcquire(v48 + 40, 0LL, 0LL);
        v51 = v36;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 40), 0LL) )
        {
          ExfAcquirePushLockExclusiveEx(v48 + 40, v36, v48 + 40);
          v36 = v51;
        }
        if ( v36 )
          *(_BYTE *)(v36 + 10) = 1;
      }
      ExAcquireSpinLockExclusive(v3 + 18);
      goto LABEL_70;
    }
    if ( (a3 & 0x200) != 0 )
    {
      v58 = -1073741800;
      MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
      if ( v56 )
      {
        v29 = -1073741800;
        goto LABEL_76;
      }
      v40 = v48;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_119;
      goto LABEL_118;
    }
    active = MiReferenceActiveSubsection(v7);
    v58 = active;
    if ( active < 0 )
    {
      if ( active == -1073741302 )
        continue;
      MiReleaseSpinLockExclusive(v3 + 18, CurrentIrql);
      if ( v56 )
        goto LABEL_122;
      v40 = v48;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_119:
        KeAbPostRelease(v40 + 40);
        v21 = v49->SpecialApcDisable++ == -1;
        if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
          KiCheckForKernelApcDelivery(v49, v42, v43, v44);
LABEL_122:
        v29 = v58;
LABEL_76:
        v7 = v47;
LABEL_77:
        if ( v7 )
        {
          v45 = ExAcquireSpinLockExclusive(v3 + 18);
          v46 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
          MiReleaseSpinLockExclusive(v3 + 18, v45);
          if ( v46 )
            MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (v3[15] & 0x3FF)), v56, v46);
          v29 = v58;
        }
        if ( (a3 & 1) != 0 )
        {
          v30 = ExAcquireSpinLockExclusive(v3 + 18);
          --*((_QWORD *)v3 + 5);
          --v3[22];
          MiCheckControlArea(v3, v30);
          return (unsigned int)v58;
        }
        return v29;
      }
LABEL_118:
      ExfTryToWakePushLock(v40 + 40);
      goto LABEL_119;
    }
    v12 = v56;
    if ( !v56 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
      goto LABEL_20;
    MiReleaseSpinLockExclusive(v3 + 18, v50);
    FileExtents = MiAllocateFileExtents(v7, 0, -1);
    v58 = FileExtents;
    v29 = FileExtents;
    if ( (int)(FileExtents + 0x80000000) >= 0 && FileExtents != -1073741302 )
      goto LABEL_77;
    ExAcquireSpinLockExclusive(v3 + 18);
    if ( v58 >= 0 )
    {
      CurrentIrql = v50;
LABEL_70:
      v12 = v56;
LABEL_20:
      if ( a2 )
      {
        v13 = *(unsigned int *)(v7 + 44);
        if ( a2 <= v13 )
          break;
        a2 -= v13;
      }
      v7 = *(_QWORD *)(v7 + 16);
      v47 = v54;
      if ( !v12 )
        v47 = v54;
      continue;
    }
    CurrentIrql = v50;
    v53 = MiDecrementSubsections(v7);
    if ( v53 )
    {
      MiReleaseSpinLockExclusive(v3 + 18, v50);
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (v3[15] & 0x3FF)), 1LL, v53);
LABEL_101:
      ExAcquireSpinLockExclusive(v3 + 18);
    }
  }
  while ( v7 );
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
  if ( !v56 )
  {
    v14 = v48 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    v15 = KeGetCurrentThread();
    _disable();
    KernelAbEntries = v15->KernelAbEntries;
    v17 = 0LL;
    v18 = v14 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (unsigned int)v17 < KernelAbEntries->EntryCount )
    {
      v19 = &KernelAbEntries->Entries[(unsigned int)v17];
      if ( (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v18
        && v19->AcquiredByte
        && (*(_QWORD *)&v19->LockState.0 & 1) == 0 )
      {
        v19->AcquiredByte = 0;
        KiAbEntryFreeAndEnableInterrupts(v19, v15, v14, 1LL, 0LL);
        goto LABEL_37;
      }
      v17 = (unsigned int)(v17 + 1);
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v37 = *SchedulerAssist;
      do
      {
        v17 = v37;
        LODWORD(v17) = v37 & 0xFFDFFFFF;
        v38 = v37;
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
LABEL_37:
    v21 = v49->SpecialApcDisable++ == -1;
    if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery(v49, v17, SchedulerAssist, v18);
  }
  return 0LL;
}
