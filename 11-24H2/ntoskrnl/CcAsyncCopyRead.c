/*
 * XREFs of CcAsyncCopyRead @ 0x1402A94F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     CcGetNodeForReadAhead @ 0x1402A94A0 (CcGetNodeForReadAhead.c)
 *     CcIncrementOpenCount @ 0x1402AAADC (CcIncrementOpenCount.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402AC224 (ExAllocatePoolWithTagFromNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadNuma @ 0x1404992C0 (CcScheduleReadAheadNuma.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140AC25B4 (CcSetTelemetryPeriodicTimer.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _QWORD *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 Ahead; // rax
  _DWORD *v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // r9
  _QWORD *PoolWithTagFromNode; // rax
  void *v21; // rdi
  int WorkQueueEntry; // r15d
  volatile signed __int64 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  int PagePriorityThread; // eax
  __int64 v30; // rdx
  LARGE_INTEGER *v31; // r14
  __int64 v33; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v36; // [rsp+98h] [rbp+10h]

  v36 = a2;
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  P = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(Object[5] + 8LL);
  v13 = *(_QWORD *)(v12 + 536);
  v33 = v13;
  Ahead = CcGetNodeForReadAhead(v12);
  v16 = Ahead;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x403uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v17 = 0LL;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v15 & 0x20000) != 0 )
  {
    CcScheduleReadAheadNuma(Object, Ahead);
    v17 = 0LL;
  }
  ++qword_140F8E528;
  if ( !dword_140F8E624 && !byte_140F8E501 && CcTelemetryGlobalData && !dword_140F8E620 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v19 = *(unsigned int *)(v16 + 24);
  LODWORD(v19) = v19 | 0x80000000;
  PoolWithTagFromNode = (_QWORD *)ExAllocatePoolWithTagFromNode(v17, 8LL, 1933665091LL, v19);
  v21 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(-1073741670);
  *PoolWithTagFromNode = 0LL;
  WorkQueueEntry = CcAllocateWorkQueueEntry(v13, *(_QWORD *)(v12 + 600), v16, (__int64 *)&P);
  if ( WorkQueueEntry < 0 )
  {
    ExFreePoolWithTag(v21, 0x73416343u);
    RtlRaiseStatus(WorkQueueEntry);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v23 = (volatile signed __int64 *)CurrentThread->Process[3].Padding[4];
  if ( v23 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedAdd64(v23, (a3 + 4095) & 0xFFFFF000);
    _InterlockedIncrement64(v23 + 2);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 768), &LockHandle);
  LOBYTE(v24) = 1;
  CcIncrementOpenCount(v12, v25, v24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v26 = P;
  v27 = v36;
  *((_DWORD *)P + 32) = 5;
  v26[2] = v12;
  v26[4] = Object;
  v26[3] = *v27;
  *((_DWORD *)v26 + 10) = a3;
  v26[6] = v21;
  v28 = a8;
  v26[8] = *(_QWORD *)(a8 + 16);
  v26[9] = a6;
  v26[10] = v28;
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  *(_DWORD *)(v30 + 56) = PagePriorityThread;
  v31 = (LARGE_INTEGER *)P;
  *((_QWORD *)P + 11) = KeGetCurrentThread()->ApcState.Process;
  v31[12].QuadPart = (LONGLONG)CurrentThread;
  LOBYTE(v31[14].LowPart) = *(_BYTE *)(v28 + 24);
  v31[14].HighPart = *(_DWORD *)(v28 + 28);
  v31[15] = PerformanceCounter;
  v31[13].QuadPart = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  if ( *(_DWORD *)(v28 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v31);
  return 1;
}
