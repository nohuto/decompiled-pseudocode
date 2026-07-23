/*
 * XREFs of ExAcquireFastResourceSharedStarveExclusive @ 0x1403BC9C0
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403BC958 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     DifExAcquireFastResourceSharedStarveExclusiveWrapper @ 0x140619E90 (DifExAcquireFastResourceSharedStarveExclusiveWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceSharedStarveExclusive(__int64 *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  __int16 v3; // r9
  int v6; // r10d
  char v7; // di
  int v8; // r12d
  unsigned __int8 v9; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v12; // r9
  char v13; // al
  unsigned int v14; // r15d
  ULONG_PTR v15; // r9
  int v16; // ecx
  unsigned __int64 v17; // r14
  signed __int32 *v18; // rbp
  __int64 v19; // rtt
  char v20; // r13
  int v21; // r12d
  int v22; // r15d
  int v23; // r13d
  char v24; // al
  ULONG_PTR *v25; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  ULONG_PTR *v31; // rax
  __int64 v32; // rcx

  v3 = *((_WORD *)BugCheckParameter2 + 13);
  v6 = 4;
  if ( a3 )
    v6 = 12;
  v7 = 1;
  v8 = v6 & 0x10;
  v9 = 2 - ((v6 & 8) != 0);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v9 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v9, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v3 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v12 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v12, 0LL);
  v13 = *(_BYTE *)(a2 + 37);
  v14 = v6;
  if ( (v13 & 2) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 24);
    if ( v15 )
    {
      if ( (__int64 *)v15 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v15, 0LL);
    }
  }
  v16 = *(_DWORD *)(a2 + 32);
  if ( !v16 || (v13 & 4) != 0 )
  {
    v17 = (unsigned __int64)KeGetCurrentThread();
    v18 = 0LL;
    if ( !*(_BYTE *)(a2 + 36) )
      v18 = (signed __int32 *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    do
    {
      _m_prefetchw(BugCheckParameter2);
      if ( (*BugCheckParameter2 & 1) != 0 )
        return ExpAcquireFastResourceSharedSlow((struct _KPRCB *)BugCheckParameter2, a2, v18, v17, v14);
      v19 = *BugCheckParameter2;
    }
    while ( v19 != _InterlockedCompareExchange64(
                     BugCheckParameter2,
                     *BugCheckParameter2 ^ (*BugCheckParameter2 ^ (*BugCheckParameter2 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     *BugCheckParameter2) );
    v20 = 3;
    if ( v8 )
      v20 = 15;
    v21 = v20 & 2;
    v22 = v20 & 4;
    v23 = v20 & 8;
    if ( (__int64 *)a2 != BugCheckParameter2 + 8 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = v17 | (v22 != 0);
    if ( v18 )
    {
      v24 = v18[2] & 0x3F;
      *((_BYTE *)v18 + 10) = 1;
      *(_BYTE *)(a2 + 36) = (2 * v24) | 1;
    }
    if ( v21 )
      _disable();
    if ( v22 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v17 + 1736));
      v31 = (ULONG_PTR *)(v17 + 1744);
      v32 = *(_QWORD *)(v17 + 1744);
      if ( *(_QWORD *)(v32 + 8) != v17 + 1744 )
LABEL_34:
        __fastfail(3u);
      *(_QWORD *)a2 = v32;
      *(_QWORD *)(a2 + 8) = v31;
      *(_QWORD *)(v32 + 8) = a2;
      *v31 = a2;
      KxReleaseSpinLock((volatile signed __int64 *)(v17 + 1736));
    }
    else
    {
      v25 = (ULONG_PTR *)(v17 + 1720);
      CurrentPrcb = *(struct _KPRCB **)(v17 + 1720);
      if ( CurrentPrcb->CurrentThread != (_KTHREAD *)(v17 + 1720) )
        goto LABEL_34;
      *(_QWORD *)a2 = CurrentPrcb;
      *(_QWORD *)(a2 + 8) = v25;
      CurrentPrcb->CurrentThread = (_KTHREAD *)a2;
      *v25 = a2;
    }
    if ( v21 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v29 = *SchedulerAssist;
        do
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
        }
        while ( v30 != v29 );
        if ( (v29 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    if ( v22 )
    {
      if ( v23 && v18 )
        KeAbMarkCrossThreadReleasable(CurrentPrcb, v18);
      ObfReferenceObjectWithTag((PVOID)v17, 0x746C6644u);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v16 + 1;
  }
  return v7;
}
