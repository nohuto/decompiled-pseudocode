/*
 * XREFs of CcCompleteAsyncRead @ 0x1404E018C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x1403AA564 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404E04B0 (CcCompleteAsyncReadWorker.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     CcCopyReadExceptionFilter @ 0x1404B4340 (CcCopyReadExceptionFilter.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CcMapAndCopyFromCache @ 0x140ABF7A0 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140ABFE80 (CcTelemetryBucketizeLatency.c)
 */

void __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  PVOID MappedSystemVa; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // [rsp+9Ch] [rbp-B4h]
  __int64 v15; // [rsp+A0h] [rbp-B0h]
  unsigned __int64 v16; // [rsp+A8h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+D8h] [rbp-78h]
  __int64 v19; // [rsp+E8h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-58h] BYREF
  int v21; // [rsp+160h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+168h] [rbp+18h]
  int PagePriorityThread; // [rsp+170h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  v21 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v22 = *(_DWORD *)(a1 + 40);
  v14 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD **)(a1 + 80);
  v15 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 120);
  PsSetPagePriorityThread(v7, v14);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 < 0 )
  {
    v11 = v15;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    v8 = v22;
    *(_QWORD *)(v4 + 8) = v22;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v8 = v22;
    }
    if ( MappedSystemVa )
    {
      LOBYTE(v9) = 1;
      CcMapAndCopyFromCache(v19, v3, v8, v9, (__int64)MappedSystemVa, (__int64)&v21, v14, v15, 0LL);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
    v11 = v15;
  }
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  if ( v21 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *v5 )
    guard_dispatch_icall_no_overrides(v5[1], v8);
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 528));
  if ( !byte_140F8DD41 )
  {
    v12 = *(_QWORD *)(v2 + 512) + 232LL;
    v16 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v6) / stru_140F8DD08.QuadPart;
    CcTelemetryBucketizeLatency(v16, v12 + 1056, v12 + 1152);
    ++*(_QWORD *)(v12 + 1040);
    if ( v16 > *(_QWORD *)(v12 + 1048) )
      *(_QWORD *)(v12 + 1048) = v16;
  }
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 != *(_QWORD *)(v2 + 536) )
    KeBugCheckEx(0x34u, 0x71CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 768), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
