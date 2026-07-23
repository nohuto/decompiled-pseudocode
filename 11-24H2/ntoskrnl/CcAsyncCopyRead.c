/*
 * XREFs of CcAsyncCopyRead @ 0x140273E20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     CcPostWorkQueueAsyncRead @ 0x14027372C (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     CcGetNodeForReadAhead @ 0x140273DD0 (CcGetNodeForReadAhead.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  NTSTATUS v22; // r15d
  volatile signed __int64 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdi
  int PagePriorityThread; // eax
  __int64 v30; // rdx
  __int64 v31; // r14
  unsigned int v32; // ecx
  __int64 v34; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v37; // [rsp+98h] [rbp+10h]

  v37 = a2;
  PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v36 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(Object[5] + 8LL);
  v13 = *(_QWORD *)(v12 + 536);
  v34 = v13;
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
  ++qword_140F8E708;
  if ( !dword_140F8E804 && !byte_140F8E6E1 && CcTelemetryGlobalData && !dword_140F8E800 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v19 = *(unsigned int *)(v16 + 24);
  LODWORD(v19) = v19 | 0x80000000;
  PoolWithTagFromNode = (_QWORD *)ExAllocatePoolWithTagFromNode(v17, 8LL, 1933665091LL, v19);
  v21 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(-1073741670);
  *PoolWithTagFromNode = 0LL;
  v22 = CcAllocateWorkQueueEntry(v13, *(_QWORD *)(v12 + 600), v16, &v36);
  if ( v22 < 0 )
  {
    ExFreePoolWithTag(v21, 0x73416343u);
    RtlRaiseStatus(v22);
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 768), &LockHandle);
  LOBYTE(v24) = 1;
  CcIncrementOpenCount(v12, v25, v24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v26 = v36;
  v27 = v37;
  *(_DWORD *)(v36 + 128) = 5;
  *(_QWORD *)(v26 + 16) = v12;
  *(_QWORD *)(v26 + 32) = Object;
  *(_QWORD *)(v26 + 24) = *v27;
  *(_DWORD *)(v26 + 40) = a3;
  *(_QWORD *)(v26 + 48) = v21;
  v28 = a8;
  *(_QWORD *)(v26 + 64) = *(_QWORD *)(a8 + 16);
  *(_QWORD *)(v26 + 72) = a6;
  *(_QWORD *)(v26 + 80) = v28;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v26);
  *(_DWORD *)(v30 + 56) = PagePriorityThread;
  v31 = v36;
  *(_QWORD *)(v36 + 88) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v31 + 96) = CurrentThread;
  *(_BYTE *)(v31 + 112) = *(_BYTE *)(v28 + 24);
  *(_DWORD *)(v31 + 116) = *(_DWORD *)(v28 + 28);
  *(LARGE_INTEGER *)(v31 + 120) = PerformanceCounter;
  *(_QWORD *)(v31 + 104) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (unsigned __int64 *)(v31 + 104));
  v32 = *(_DWORD *)(v28 + 28);
  if ( v32 > CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead((_QWORD *)v31, *(_QWORD *)(v16 + 256) + 16LL * v32);
  return 1;
}
