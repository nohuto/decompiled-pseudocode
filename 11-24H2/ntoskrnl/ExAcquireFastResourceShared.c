/*
 * XREFs of ExAcquireFastResourceShared @ 0x1403206D0
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140322C20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     DifExAcquireFastResourceSharedWrapper @ 0x14061A010 (DifExAcquireFastResourceSharedWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpSaveAbHandle @ 0x140322D70 (ExpSaveAbHandle.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     ExAreApcsDisabledForThread @ 0x1403FD770 (ExAreApcsDisabledForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140404DF0 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(_WORD *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  int v5; // edi
  __int16 v6; // dx
  int v7; // r13d
  int v8; // r15d
  unsigned __int8 v9; // al
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v12; // r9
  char v13; // al
  int v14; // r14d
  ULONG_PTR v15; // r9
  int v16; // ecx
  unsigned __int64 v17; // rbp
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // r15
  _BOOL8 v21; // r8
  signed __int64 v22; // rax
  __int64 v24; // rtt
  char v25; // r12
  int v26; // r13d
  int v27; // r14d
  int v28; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // r8

  v5 = 2;
  if ( a3 )
    v5 = 10;
  v6 = BugCheckParameter2[13];
  v7 = v5 & 0x10;
  v8 = v5 & 8;
  v9 = (v8 == 0) + 1;
  if ( (v6 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)CurrentIrql > v9 )
    KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, v9, 0LL);
  if ( (unsigned __int8)CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v6 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !(unsigned __int8)ExAreApcsDisabledForThread(CurrentIrql, CurrentThread) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v12 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v12, 0LL);
  v13 = *(_BYTE *)(a2 + 37);
  v14 = v5;
  if ( (v13 & 2) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 24);
    if ( v15 )
    {
      if ( (_WORD *)v15 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v15, 0LL);
    }
  }
  v16 = *(_DWORD *)(a2 + 32);
  if ( !v16 || (v13 & 4) != 0 )
  {
    v17 = (unsigned __int64)KeGetCurrentThread();
    v18 = 0LL;
    v19 = v8 == 0;
    v20 = 0LL;
    v21 = v19;
    if ( !*(_BYTE *)(a2 + 36) )
      v20 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    do
    {
      _m_prefetchw(BugCheckParameter2);
      v22 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 || (v22 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow((ULONG_PTR)BugCheckParameter2, v14);
      v24 = *(_QWORD *)BugCheckParameter2;
    }
    while ( v24 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)BugCheckParameter2,
                     v22 ^ (v22 ^ (v22 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     v22) );
    v25 = 3;
    if ( v7 )
      v25 = 15;
    v26 = v25 & 2;
    v27 = v25 & 4;
    v28 = v25 & 8;
    if ( (_WORD *)a2 != BugCheckParameter2 + 32 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    LOBYTE(v21) = 1;
    LOBYTE(v18) = v27 != 0;
    *(_QWORD *)(a2 + 16) = v17 | v18;
    ExpSaveAbHandle(a2, v20, v21);
    if ( v26 )
      _disable();
    if ( v27 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v17 + 1736));
      LOBYTE(v33) = 1;
      ExpAddFastOwnerEntryToThreadList(v17, BugCheckParameter2, v33, a2);
      KxReleaseSpinLock((volatile signed __int64 *)(v17 + 1736));
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList(v17, BugCheckParameter2, 0LL, a2);
    }
    if ( v26 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v31 = *SchedulerAssist;
        do
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
        }
        while ( v32 != v31 );
        if ( (v31 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    if ( v27 )
    {
      if ( v28 )
      {
        if ( v20 )
          KeAbMarkCrossThreadReleasable(BugCheckParameter2, v20);
      }
      ObfReferenceObjectWithTag((PVOID)v17, 0x746C6644u);
    }
    return 1;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v16 + 1;
    return 1;
  }
}
