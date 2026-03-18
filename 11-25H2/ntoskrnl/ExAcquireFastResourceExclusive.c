/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x1402934E0
 * Callers:
 *     DifExAcquireFastResourceExclusiveWrapper @ 0x14060F790 (DifExAcquireFastResourceExclusiveWrapper.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14064AF80 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  int v6; // ebp
  char v7; // al
  char v8; // r14
  __int16 v9; // r8
  unsigned __int8 v10; // al
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v12; // rdx
  ULONG_PTR v13; // r13
  signed __int64 v14; // rax
  struct _KTHREAD ***v15; // r15
  char v16; // al
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( a3 )
  {
    v6 = 8;
    v7 = 1;
    v8 = 9;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 1;
  }
  v9 = *(_WORD *)(BugCheckParameter2 + 26);
  v10 = (v7 ^ 1) + 1;
  if ( (v9 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v12 = KeGetCurrentThread();
  if ( CurrentIrql > v10 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v10, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v9 & 8) == 0 && (v12->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v12->MiscFlags & 0x400) == 0 && !v12->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v13 = KeAbPreAcquire(BugCheckParameter2, 0LL, v6 == 0);
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 0LL);
  v15 = (struct _KTHREAD ***)(BugCheckParameter2 + 64);
  if ( !v14 )
  {
    *(_DWORD *)(BugCheckParameter2 + 96) = 1;
    LOBYTE(v4) = 0;
    *(_QWORD *)(BugCheckParameter2 + 80) = (unsigned __int64)CurrentThread | v4;
    if ( v13 )
    {
      v16 = *(_BYTE *)(v13 + 8);
      *(_BYTE *)(v13 + 10) = 1;
      *(_BYTE *)(BugCheckParameter2 + 100) = (2 * (v16 & 0x3F)) | 1;
    }
    _disable();
    p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
    SparePtr = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
      __fastfail(3u);
    *v15 = SparePtr;
    *(_QWORD *)(BugCheckParameter2 + 72) = p_LastXStateSaveDebugInfo;
    SparePtr[1] = (struct _KTHREAD *)v15;
    *p_LastXStateSaveDebugInfo = (unsigned __int64)v15;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v22 = *SchedulerAssist;
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    return 1;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
  {
    ++*(_DWORD *)(BugCheckParameter2 + 96);
    if ( v13 )
      KeAbPostReleaseEx(BugCheckParameter2, v13);
    return 1;
  }
  if ( v6 )
  {
    ExpAcquireFastResourceExclusiveSlow(BugCheckParameter2, v14, (_DWORD)CurrentThread, v13, v8);
    return 1;
  }
  if ( v13 )
    KeAbPostReleaseEx(BugCheckParameter2, v13);
  return 0;
}
