/*
 * XREFs of ExAcquireFastResourceShared @ 0x140294520
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140294330 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     DifExAcquireFastResourceSharedWrapper @ 0x14060FA90 (DifExAcquireFastResourceSharedWrapper.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140293050 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpSaveAbHandle @ 0x140294300 (ExpSaveAbHandle.c)
 *     ExAreApcsDisabledForThread @ 0x140294480 (ExAreApcsDisabledForThread.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceShared(_WORD *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  int v5; // edi
  __int16 v6; // dx
  int v7; // r13d
  int v8; // r15d
  unsigned __int8 v9; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v12; // r9
  char v13; // al
  int v14; // ebp
  ULONG_PTR v15; // r9
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // r14
  bool v19; // zf
  __int64 *v20; // r15
  signed __int64 v21; // rax
  __int64 v23; // rtt
  char v24; // r12
  int v25; // r13d
  int v26; // ebp
  int v27; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett

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
  if ( CurrentIrql > v9 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v9, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v6 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !ExAreApcsDisabledForThread(CurrentIrql, (__int64)CurrentThread) )
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
    v17 = 0LL;
    v18 = (__int64)KeGetCurrentThread();
    v19 = v8 == 0;
    v20 = 0LL;
    if ( !*(_BYTE *)(a2 + 36) )
      v20 = (__int64 *)KeAbPreAcquire(BugCheckParameter2, 0LL, v19);
    do
    {
      _m_prefetchw(BugCheckParameter2);
      v21 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 || (v21 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow((ULONG_PTR)BugCheckParameter2, v14);
      v23 = *(_QWORD *)BugCheckParameter2;
    }
    while ( v23 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)BugCheckParameter2,
                     v21 ^ (v21 ^ (v21 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     v21) );
    v24 = 3;
    if ( v7 )
      v24 = 15;
    v25 = v24 & 2;
    v26 = v24 & 4;
    v27 = v24 & 8;
    if ( (_WORD *)a2 != BugCheckParameter2 + 32 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    LOBYTE(v17) = v26 != 0;
    *(_QWORD *)(a2 + 16) = v18 | v17;
    ExpSaveAbHandle(a2, (__int64)v20, 1);
    if ( v25 )
      _disable();
    if ( v26 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 1736));
      ExpAddFastOwnerEntryToThreadList(v18, (__int64)BugCheckParameter2, 1, (_QWORD *)a2);
      KxReleaseSpinLock(v18 + 1736);
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList(v18, (__int64)BugCheckParameter2, 0, (_QWORD *)a2);
    }
    if ( v25 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v30 = *SchedulerAssist;
        do
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange(SchedulerAssist, v30 & 0xFFDFFFFF, v30);
        }
        while ( v31 != v30 );
        if ( (v30 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    if ( v26 )
    {
      if ( v27 )
      {
        if ( v20 )
          KeAbMarkCrossThreadReleasable((__int64)BugCheckParameter2, v20);
      }
      ObfReferenceObjectWithTag((PVOID)v18, 0x746C6644u);
    }
    return 1;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v16 + 1;
    return 1;
  }
}
