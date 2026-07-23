/*
 * XREFs of MiIssueSegmentDereferenceWork @ 0x1403ED890
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403ED670 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiComputeUnusedSegmentReduction @ 0x1403EDBDC (MiComputeUnusedSegmentReduction.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1403EDDB8 (MiSaveUnusedSegmentCalibration.c)
 *     MiPrepareDeleteOnClose @ 0x1406736D0 (MiPrepareDeleteOnClose.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiIssueSegmentDereferenceWork(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  ULONG *Pool; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r15
  struct _WORK_QUEUE_ITEM *v8; // r14
  PVOID *v9; // r12
  ULONG *v10; // r8
  char *v11; // rdx
  char *v12; // rcx
  _QWORD *v13; // rax
  KIRQL v14; // al
  __int64 v15; // rdi
  KIRQL v16; // al
  KIRQL v17; // [rsp+40h] [rbp-108h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v19[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v20; // [rsp+54h] [rbp-F4h]

  v20 = 0;
  memset_0(v19, 0, 0xBCuLL);
  v4 = (unsigned int)KeNumberProcessors_0 >> 2;
  if ( (unsigned int)KeNumberProcessors_0 >> 2 )
  {
    if ( v4 > 4 )
      v4 = 4;
  }
  else
  {
    v4 = 1;
  }
  if ( a2 == 7 || v4 == 1 || (Pool = (ULONG *)MiAllocatePool(0x40uLL, 152 * v4 + 24, 1917086029)) == 0LL )
  {
    memset_0(v19, 0, 0xC0uLL);
    Pool = (ULONG *)v19;
    v4 = 1;
  }
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v6.QuadPart = 10000000 * v6.QuadPart / PerformanceFrequency.QuadPart;
  v7 = v4;
  v8 = (struct _WORK_QUEUE_ITEM *)(Pool + 6);
  *Pool = v4;
  v9 = (PVOID *)&Pool[24 * v4 + 6];
  PerformanceFrequency.QuadPart = (LONGLONG)&v9[v4];
  if ( a2 - 2 <= 1 )
    MiComputeUnusedSegmentReduction(a1, a2, Pool + 2);
  v10 = &Pool[24 * v4 + 6];
  v11 = (char *)Pool + 57;
  do
  {
    *(_DWORD *)(v11 + 23) = a2;
    v12 = v11 - 1;
    *(_DWORD *)(v11 + 3) = 0;
    v13 = v11 + 7;
    *(_WORD *)v11 = 1536;
    v11 += 96;
    *v12 = 0;
    *(_QWORD *)(v11 - 81) = v13;
    *v13 = v13;
    *(_QWORD *)(v11 - 65) = a1;
    *(_QWORD *)v10 = v12;
    v10 += 2;
    --v7;
  }
  while ( v7 );
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v17 = v14;
  *(_QWORD *)(a1 + 2080) = Pool;
  if ( a2 == 4 )
  {
    MiPrepareDeleteOnClose(a1);
    v14 = v17;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v14);
  v15 = v4 - 1;
  if ( (_DWORD)v15 )
  {
    do
    {
      v8->List.Flink = 0LL;
      v8->WorkerRoutine = (void (__fastcall *)(void *))MiSegmentDereferenceWorker;
      v8->Parameter = v8;
      ExQueueWorkItem(v8, CriticalWorkQueue);
      v8 += 3;
      --v15;
    }
    while ( v15 );
  }
  v8->WorkerRoutine = (void (__fastcall *)(void *))1;
  MiSegmentDereferenceWorker(v8);
  if ( Pool != (ULONG *)v19 )
    KeWaitForMultipleObjects(*Pool, v9, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)PerformanceFrequency.QuadPart);
  if ( a2 - 2 <= 1 )
    ((void (__fastcall *)(_QWORD, _QWORD))MiSaveUnusedSegmentCalibration)(Pool, (LARGE_INTEGER)v6.QuadPart);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  *(_QWORD *)(a1 + 2080) = 0LL;
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v16);
  if ( Pool != (ULONG *)v19 )
    ExFreePoolWithTag(Pool, 0);
}
