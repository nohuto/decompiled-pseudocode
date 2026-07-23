/*
 * XREFs of ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1402F0B5C
 * Callers:
 *     ExMoveFastResourceOwnershipWithFlags @ 0x1402F0AC0 (ExMoveFastResourceOwnershipWithFlags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1402F2120 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExpMoveSharedFastResourceOwnershipWithFlags(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR a3,
        char a4)
{
  unsigned __int64 CurrentThread; // r13
  __int16 v5; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v10; // rdx
  __int64 v11; // r8
  char v12; // dl
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  struct _KTHREAD *v15; // r8
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // r9
  unsigned __int8 v18; // bp
  unsigned int v19; // r14d
  LONG_PTR result; // rax
  _QWORD *v21; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v24; // ett
  ULONG_PTR *v25; // rax
  struct _LIST_ENTRY *v26; // rcx

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && !_bittest((const signed __int32 *)&v10->116, 0xAu) && !v10->WaitBlock[3].SpareLong )
    goto LABEL_8;
  v11 = *(_QWORD *)(a2 + 16);
  if ( (struct _KTHREAD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  v12 = *(_BYTE *)(a2 + 37);
  if ( (v12 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    if ( v13 != BugCheckParameter2 )
    {
      if ( v13 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v11 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v12 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v12 & 2) << 15, 0LL);
  v14 = KeGetCurrentIrql();
  v15 = KeGetCurrentThread();
  if ( v14 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v14, 2uLL, 0LL);
  if ( v14 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v5 & 8) == 0 && (v15->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v14 && !_bittest((const signed __int32 *)&v15->116, 0xAu) && !v15->WaitBlock[3].SpareLong )
LABEL_8:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v16 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v16 != v15 )
    KeBugCheckEx(0x1C6u, 9uLL, a3, v16, 0LL);
  if ( (*(_BYTE *)(a3 + 37) & 2) == 0 )
  {
    v17 = *(_QWORD *)(a3 + 24);
    if ( v17 )
    {
      if ( v17 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a3, v17, 0LL);
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v18 = 1;
    if ( *(int *)(a2 + 32) > 1 )
      KeBugCheckEx(0x1C6u, 0x17uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(a3 + 32) = 1;
  v19 = 0;
  *(_QWORD *)(a3 + 24) = BugCheckParameter2;
  *(_QWORD *)(a3 + 16) = CurrentThread | v18;
  *(_BYTE *)(a3 + 36) = *(_BYTE *)(a2 + 36);
  _disable();
  ExpRemoveFastOwnerEntryFromThreadList(a2);
  if ( v18 )
  {
    v19 = *(unsigned __int8 *)(a3 + 36);
    KxAcquireSpinLock((PKSPIN_LOCK)(CurrentThread + 1736));
    v25 = (ULONG_PTR *)(CurrentThread + 1744);
    v26 = *(struct _LIST_ENTRY **)(CurrentThread + 1744);
    if ( v26->Blink != (struct _LIST_ENTRY *)(CurrentThread + 1744) )
LABEL_34:
      __fastfail(3u);
    *(_QWORD *)a3 = v26;
    *(_QWORD *)(a3 + 8) = v25;
    v26->Blink = (struct _LIST_ENTRY *)a3;
    *v25 = a3;
    result = KxReleaseSpinLock((volatile signed __int64 *)(CurrentThread + 1736));
  }
  else
  {
    result = CurrentThread + 1720;
    v21 = *(_QWORD **)(CurrentThread + 1720);
    if ( v21[1] != CurrentThread + 1720 )
      goto LABEL_34;
    *(_QWORD *)a3 = v21;
    *(_QWORD *)(a3 + 8) = result;
    v21[1] = a3;
    *(_QWORD *)result = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v24 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v24 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  if ( v19 )
    result = KeAbMarkCrossThreadReleasable(CurrentPrcb, v19);
  if ( v18 )
    return ObfReferenceObjectWithTag((PVOID)CurrentThread, 0x746C6644u);
  return result;
}
