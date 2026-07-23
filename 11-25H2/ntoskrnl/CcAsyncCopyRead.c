/*
 * XREFs of CcAsyncCopyRead @ 0x1403AAC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     ExAllocatePoolWithTagFromNode @ 0x1402D9F00 (ExAllocatePoolWithTagFromNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     CcGetNodeForReadAhead @ 0x1403AAF40 (CcGetNodeForReadAhead.c)
 *     CcAllocateWorkQueueEntry @ 0x1403AC58C (CcAllocateWorkQueueEntry.c)
 *     CcScheduleReadAheadNuma @ 0x140499150 (CcScheduleReadAheadNuma.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABE7C4 (CcSetTelemetryPeriodicTimer.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 Ahead; // rax
  _DWORD *v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v21; // r9
  _QWORD *PoolWithTagFromNode; // rax
  void *v23; // rdi
  NTSTATUS v24; // r15d
  volatile signed __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdi
  int PagePriorityThread; // eax
  __int64 v31; // rdx
  __int64 v32; // r14
  unsigned int v33; // ecx
  __int64 v35; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v38; // [rsp+98h] [rbp+10h]

  v38 = a2;
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v37 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(Object[5] + 8LL);
  v13 = *(_QWORD *)(v12 + 536);
  v35 = v13;
  Ahead = CcGetNodeForReadAhead(v12, v14, v15, Object[6]);
  v18 = Ahead;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x403uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v19 = 0LL;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v17 & 0x20000) != 0 )
  {
    CcScheduleReadAheadNuma(Object, Ahead);
    v19 = 0LL;
  }
  ++qword_140F8DD68;
  if ( !dword_140F8DE64 && !byte_140F8DD41 && CcTelemetryGlobalData && !dword_140F8DE60 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v21 = *(unsigned int *)(v18 + 24);
  LODWORD(v21) = v21 | 0x80000000;
  PoolWithTagFromNode = (_QWORD *)ExAllocatePoolWithTagFromNode(v19, 8uLL, 0x73416343uLL, v21);
  v23 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(-1073741670);
  *PoolWithTagFromNode = 0LL;
  v24 = CcAllocateWorkQueueEntry(v13, *(_QWORD *)(v12 + 600), v18, &v37);
  if ( v24 < 0 )
  {
    ExFreePoolWithTag(v23, 0x73416343u);
    RtlRaiseStatus(v24);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  v25 = (volatile signed __int64 *)CurrentThread->Process[3].Padding[4];
  if ( v25 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedAdd64(v25, (a3 + 4095) & 0xFFFFF000);
    _InterlockedIncrement64(v25 + 2);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 768), &LockHandle);
  CcIncrementOpenCount(v12, v26, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v27 = v37;
  v28 = v38;
  *(_DWORD *)(v37 + 128) = 5;
  *(_QWORD *)(v27 + 16) = v12;
  *(_QWORD *)(v27 + 32) = Object;
  *(_QWORD *)(v27 + 24) = *v28;
  *(_DWORD *)(v27 + 40) = a3;
  *(_QWORD *)(v27 + 48) = v23;
  v29 = a8;
  *(_QWORD *)(v27 + 64) = *(_QWORD *)(a8 + 16);
  *(_QWORD *)(v27 + 72) = a6;
  *(_QWORD *)(v27 + 80) = v29;
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  *(_DWORD *)(v31 + 56) = PagePriorityThread;
  v32 = v37;
  *(_QWORD *)(v37 + 88) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v32 + 96) = CurrentThread;
  *(_BYTE *)(v32 + 112) = *(_BYTE *)(v29 + 24);
  *(_DWORD *)(v32 + 116) = *(_DWORD *)(v29 + 28);
  *(LARGE_INTEGER *)(v32 + 120) = PerformanceCounter;
  *(_QWORD *)(v32 + 104) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (unsigned __int64 *)(v32 + 104));
  v33 = *(_DWORD *)(v29 + 28);
  if ( v33 > CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead((_QWORD *)v32, *(_QWORD *)(v18 + 256) + 16LL * v33);
  return 1;
}
