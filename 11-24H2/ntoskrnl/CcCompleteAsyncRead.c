/*
 * XREFs of CcCompleteAsyncRead @ 0x1404DF87C
 * Callers:
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404DFBA0 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x1404DFCEC (CcPostWorkQueueAsyncRead.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     CcCopyReadExceptionFilter @ 0x1404B3C44 (CcCopyReadExceptionFilter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CcMapAndCopyFromCache @ 0x140AC2F00 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140AC35E0 (CcTelemetryBucketizeLatency.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID MappedSystemVa; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // [rsp+9Ch] [rbp-B4h]
  __int64 v16; // [rsp+A0h] [rbp-B0h]
  unsigned __int64 v17; // [rsp+A8h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+D8h] [rbp-78h]
  __int64 v20; // [rsp+E8h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-58h] BYREF
  int v22; // [rsp+160h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+168h] [rbp+18h]
  int PagePriorityThread; // [rsp+170h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  v22 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v20 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v23 = *(_DWORD *)(a1 + 40);
  v15 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD **)(a1 + 80);
  v16 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 120);
  PsSetPagePriorityThread(v7, v15);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 < 0 )
  {
    v12 = v16;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    v8 = v23;
    *(_QWORD *)(v4 + 8) = v23;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v8 = v23;
    }
    if ( MappedSystemVa )
    {
      LOBYTE(v10) = 1;
      CcMapAndCopyFromCache(v20, v3, v8, v10, (__int64)MappedSystemVa, (__int64)&v22, v15, v16, 0LL);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
    v12 = v16;
  }
  if ( v12 )
    IoDiskIoAttributionDereference(v12);
  if ( v22 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *v5 )
    guard_dispatch_icall_no_overrides(v5[1], v8, v9, v10);
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 528));
  if ( !byte_140F8E501 )
  {
    v13 = *(_QWORD *)(v2 + 512) + 232LL;
    v17 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v6) / stru_140F8E4C8.QuadPart;
    CcTelemetryBucketizeLatency(v17, v13 + 1056, v13 + 1152);
    ++*(_QWORD *)(v13 + 1040);
    if ( v17 > *(_QWORD *)(v13 + 1048) )
      *(_QWORD *)(v13 + 1048) = v17;
  }
  v14 = *(_QWORD *)(a1 + 136);
  if ( v14 != *(_QWORD *)(v2 + 536) )
    KeBugCheckEx(0x34u, 0x71CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
