/*
 * XREFs of ExpWorkQueueManagerThread @ 0x140A17020
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetUserAffinityThread @ 0x1403060E4 (KeSetUserAffinityThread.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     ExpNewThreadNecessary @ 0x1404340C0 (ExpNewThreadNecessary.c)
 *     KeTimeOutQueueWaiters @ 0x14043F744 (KeTimeOutQueueWaiters.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x1405C4E9C (KeSetMaximumCountPriQueue.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140A174BC (ExpPartitionCreatePoolDelayed.c)
 *     ExpCreateWorkerThread @ 0x140A17558 (ExpCreateWorkerThread.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v2; // r15
  struct _WORK_QUEUE_ITEM *v3; // r14
  _QWORD *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int16 **v6; // r13
  char v7; // di
  NTSTATUS v8; // eax
  struct _KDPC *v9; // r10
  int v10; // ebx
  __int64 j; // r9
  __int64 v12; // rdi
  int PoolDelayed; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 k; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct _KDPC *v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 i; // rbx
  _DWORD *v27; // r9
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r8
  int WorkerThread; // eax
  char v34; // [rsp+48h] [rbp-C0h]
  char v35; // [rsp+49h] [rbp-BFh]
  unsigned __int16 v36; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KTHREAD *v37; // [rsp+50h] [rbp-B8h]
  _QWORD v38[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KAFFINITY_EX v39; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp+70h] BYREF

  v2 = 0;
  v36 = 0;
  memset_0(&v39, 0, sizeof(v39));
  v35 = 1;
  v3 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( v3 )
    {
      v35 = 0;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 12);
  v38[1] = -1LL;
  v38[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    (LARGE_INTEGER)-((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v38);
  v6 = (unsigned __int16 **)(a1 + 1);
  v7 = 0;
  v34 = 0;
  v38[0] = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v9 = 0LL;
    if ( !v8 )
      break;
    v18 = v8 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v25 = v38[0];
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v27 = 0LL;
          v28 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6);
          if ( (*(_QWORD *)(v28 + i) & 1) == 0 )
            v27 = *(_DWORD **)(v28 + i);
          if ( v27 )
          {
            if ( (v27[178] & 0x4000) == 0 && !v27[1] )
            {
              v29 = (v27[178] & 0x3FFF) - ((2 * v27[179]) >> 1);
              if ( v29 )
              {
                KeTimeOutQueueWaiters((__int64)v27, v25, v29);
                v9 = 0LL;
              }
            }
          }
        }
        v7 = v34;
        CurrentThread = v37;
      }
      LOBYTE(j) = 1;
LABEL_20:
      if ( v7 )
        goto LABEL_21;
      goto LABEL_31;
    }
    v30 = 0LL;
    for ( j = 1LL; v30 <= j; v30 += j )
    {
      v31 = (__int64)v9;
      v32 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6);
      if ( ((unsigned __int8)*(_QWORD *)(v32 + 8 * v30) & (unsigned __int8)j) == 0 )
        v31 = *(_QWORD *)(v32 + 8 * v30);
      if ( *(_DWORD *)(v31 + 704) == *(_DWORD *)(v31 + 708) && ExpNewThreadNecessary(v31, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v9);
        if ( v30 == j && v35 == (_BYTE)v9 )
        {
          *(_DWORD *)Pool2 = j;
          Pool2[1] = v31;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = Pool2;
          v3->List.Flink = (struct _LIST_ENTRY *)v9;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v35 = 1;
        }
        WorkerThread = ExpCreateWorkerThread(v31, (char *)a1 + 276);
        v9 = 0LL;
        j = 1LL;
        if ( WorkerThread < 0 )
          v2 = 1;
      }
    }
    v7 = 0;
LABEL_31:
    v22 = (__int64)v9;
    do
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6);
      v24 = v9;
      if ( ((unsigned __int8)*(_QWORD *)(v23 + v22) & (unsigned __int8)j) == 0 )
        v24 = *(struct _KDPC **)(v23 + v22);
      *((_DWORD *)&v24[11].0 + 1) = v24[11].TargetInfoAsUlong;
      if ( ((__int64)v24[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v24[11].ProcessorHistory) || v2 )
        v7 = j;
      v22 += 8LL;
    }
    while ( v22 <= 8 );
    v34 = v7;
    if ( v7 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v9);
    CurrentThread = v37;
LABEL_21:
    *(_QWORD *)&v39.Count = 2097153LL;
    memset_0(&v39.8, 0, sizeof(v39.8));
    KeQueryNodeActiveAffinityEx(**v6, &v39.Count, &v36);
    v2 = 0;
    if ( !(unsigned int)KeIsEqualAffinityEx(&v39.Count, &CurrentThread->UserAffinity->Count) )
      KeSetUserAffinityThread((__int64)CurrentThread, &v39);
    for ( k = 0LL; k < 64; k += 8LL )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6);
      v21 = 0LL;
      if ( (*(_QWORD *)(v20 + k) & 1) == 0 )
        v21 = *(_QWORD *)(v20 + k);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 664) != v36 )
          KeSetMaximumCountPriQueue(v21, v36);
      }
    }
    v7 = v34;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v10 = 0;
    LODWORD(j) = 1;
    v12 = 0LL;
    do
    {
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6) + v12) & (unsigned __int8)j) != 0
        && (PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, *v6, (unsigned int)v10),
            v9 = 0LL,
            LODWORD(j) = 1,
            PoolDelayed < 0) )
      {
        v2 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v6);
        v15 = (__int64)v9;
        if ( ((unsigned __int8)*(_QWORD *)(v14 + v12) & (unsigned __int8)j) == 0 )
          v15 = *(_QWORD *)(v14 + v12);
        if ( v15 )
        {
          if ( ExpNewThreadNecessary(v15, *(_DWORD *)(v15 + 720)) )
          {
            v17 = ExpCreateWorkerThread(v16, (char *)a1 + 276);
            v9 = 0LL;
            LODWORD(j) = 1;
            if ( v17 < 0 )
              v2 = 1;
          }
        }
      }
      v10 += j;
      v12 += 8LL;
    }
    while ( v10 < 8 );
    v7 = v34;
    CurrentThread = v37;
    goto LABEL_20;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
