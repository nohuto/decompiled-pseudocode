/*
 * XREFs of ExDisownFastResource @ 0x1404926D0
 * Callers:
 *     ExMoveFastResourceOwnershipWithFlags @ 0x1402F0AC0 (ExMoveFastResourceOwnershipWithFlags.c)
 *     DifExDisownFastResourceWrapper @ 0x14061C130 (DifExDisownFastResourceWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1402F2120 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  KSPIN_LOCK *CurrentThread; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rax
  KSPIN_LOCK v9; // rcx
  __int64 *v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett

  CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    BugCheckParameter3 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v5 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( (struct _KTHREAD *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != v5 )
    KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter3, v6 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 37) & 2) == 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter3 + 24);
    if ( v7 != BugCheckParameter2 )
    {
      if ( v7 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 24));
    }
  }
  if ( (v6 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, BugCheckParameter3, 0LL, 0LL);
  _disable();
  if ( *(int *)(BugCheckParameter3 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  ExpRemoveFastOwnerEntryFromThreadList((_QWORD *)BugCheckParameter3);
  KxAcquireSpinLock(CurrentThread + 217);
  *(_QWORD *)(BugCheckParameter3 + 16) |= 1uLL;
  v8 = CurrentThread + 218;
  v9 = CurrentThread[218];
  v10 = (__int64 *)*(unsigned __int8 *)(BugCheckParameter3 + 36);
  if ( *(KSPIN_LOCK **)(v9 + 8) != CurrentThread + 218 )
    __fastfail(3u);
  *(_QWORD *)BugCheckParameter3 = v9;
  *(_QWORD *)(BugCheckParameter3 + 8) = v8;
  *(_QWORD *)(v9 + 8) = BugCheckParameter3;
  *v8 = BugCheckParameter3;
  KxReleaseSpinLock((volatile signed __int64 *)CurrentThread + 217);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v14 = *SchedulerAssist;
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( (_BYTE)v10 )
    KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, v10);
  return ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
}
