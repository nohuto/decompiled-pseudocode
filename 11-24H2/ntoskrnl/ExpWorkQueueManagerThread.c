/*
 * XREFs of ExpWorkQueueManagerThread @ 0x140A21D40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetUserAffinityThread @ 0x140209564 (KeSetUserAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KeIsEqualAffinityEx @ 0x1403C8980 (KeIsEqualAffinityEx.c)
 *     KeTimeOutQueueWaiters @ 0x1403D7DA0 (KeTimeOutQueueWaiters.c)
 *     ExpNewThreadNecessary @ 0x140430080 (ExpNewThreadNecessary.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x1405C94C8 (KeSetMaximumCountPriQueue.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140A221DC (ExpPartitionCreatePoolDelayed.c)
 *     ExpCreateWorkerThread @ 0x140A22278 (ExpCreateWorkerThread.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v2; // r15
  struct _WORK_QUEUE_ITEM *v3; // r14
  _QWORD *Pool2; // rsi
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int16 **v7; // r13
  char v8; // di
  NTSTATUS v9; // eax
  struct _KDPC *v10; // r10
  int v11; // ebx
  __int64 j; // r9
  __int64 v13; // rdi
  int PoolDelayed; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 k; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _KDPC *v26; // rdx
  unsigned __int64 v27; // rdi
  __int64 i; // rbx
  _DWORD *v29; // r9
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // r8
  int WorkerThread; // eax
  char v36; // [rsp+48h] [rbp-C0h]
  char v37; // [rsp+49h] [rbp-BFh]
  unsigned __int16 v38; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KTHREAD *v39; // [rsp+50h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v42[264]; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp+70h] BYREF

  v2 = 0;
  v38 = 0;
  memset_0(&v41, 0, 0x108uLL);
  v37 = 1;
  v3 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( v3 )
    {
      v37 = 0;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v39 = CurrentThread;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 12, v5);
  v40[1] = -1LL;
  v40[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v40);
  v7 = (unsigned __int16 **)(a1 + 1);
  v8 = 0;
  v36 = 0;
  v40[0] = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v9 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v10 = 0LL;
    if ( !v9 )
      break;
    v19 = v9 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v27 = v40[0];
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v29 = 0LL;
          v30 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7);
          if ( (*(_QWORD *)(v30 + i) & 1) == 0 )
            v29 = *(_DWORD **)(v30 + i);
          if ( v29 )
          {
            if ( (v29[178] & 0x4000) == 0 && !v29[1] )
            {
              v31 = (v29[178] & 0x3FFF) - ((2 * v29[179]) >> 1);
              if ( v31 )
              {
                KeTimeOutQueueWaiters((__int64)v29, v27, v31);
                v10 = 0LL;
              }
            }
          }
        }
        v8 = v36;
        CurrentThread = v39;
      }
      LOBYTE(j) = 1;
LABEL_20:
      if ( v8 )
        goto LABEL_21;
      goto LABEL_31;
    }
    v32 = 0LL;
    for ( j = 1LL; v32 <= j; v32 += j )
    {
      v33 = (__int64)v10;
      v34 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7);
      if ( ((unsigned __int8)*(_QWORD *)(v34 + 8 * v32) & (unsigned __int8)j) == 0 )
        v33 = *(_QWORD *)(v34 + 8 * v32);
      if ( *(_DWORD *)(v33 + 704) == *(_DWORD *)(v33 + 708) && ExpNewThreadNecessary(v33, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v10);
        if ( v32 == j && v37 == (_BYTE)v10 )
        {
          *(_DWORD *)Pool2 = j;
          Pool2[1] = v33;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = Pool2;
          v3->List.Flink = (struct _LIST_ENTRY *)v10;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v37 = 1;
        }
        WorkerThread = ExpCreateWorkerThread(v33, (char *)a1 + 276);
        v10 = 0LL;
        j = 1LL;
        if ( WorkerThread < 0 )
          v2 = 1;
      }
    }
    v8 = 0;
LABEL_31:
    v24 = (__int64)v10;
    do
    {
      v25 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7);
      v26 = v10;
      if ( ((unsigned __int8)*(_QWORD *)(v25 + v24) & (unsigned __int8)j) == 0 )
        v26 = *(struct _KDPC **)(v25 + v24);
      *((_DWORD *)&v26[11].0 + 1) = v26[11].TargetInfoAsUlong;
      if ( ((__int64)v26[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v26[11].ProcessorHistory) || v2 )
        v8 = j;
      v24 += 8LL;
    }
    while ( v24 <= 8 );
    v36 = v8;
    if ( v8 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v10);
    CurrentThread = v39;
LABEL_21:
    v41 = 2097153LL;
    memset_0(v42, 0, 0x100uLL);
    KeQueryNodeActiveAffinityEx(**v7, (unsigned __int16 *)&v41, &v38);
    v2 = 0;
    if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)&v41, &CurrentThread->UserAffinity->Count) )
      KeSetUserAffinityThread((__int64)CurrentThread, (__int64)&v41, v20);
    for ( k = 0LL; k < 64; k += 8LL )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7);
      v23 = 0LL;
      if ( (*(_QWORD *)(v22 + k) & 1) == 0 )
        v23 = *(_QWORD *)(v22 + k);
      if ( v23 )
      {
        if ( *(_DWORD *)(v23 + 664) != v38 )
          KeSetMaximumCountPriQueue(v23, v38);
      }
    }
    v8 = v36;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v11 = 0;
    LODWORD(j) = 1;
    v13 = 0LL;
    do
    {
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7) + v13) & (unsigned __int8)j) != 0
        && (PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, *v7, (unsigned int)v11),
            v10 = 0LL,
            LODWORD(j) = 1,
            PoolDelayed < 0) )
      {
        v2 = 1;
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * **v7);
        v16 = (__int64)v10;
        if ( ((unsigned __int8)*(_QWORD *)(v15 + v13) & (unsigned __int8)j) == 0 )
          v16 = *(_QWORD *)(v15 + v13);
        if ( v16 )
        {
          if ( ExpNewThreadNecessary(v16, *(_DWORD *)(v16 + 720)) )
          {
            v18 = ExpCreateWorkerThread(v17, (char *)a1 + 276);
            v10 = 0LL;
            LODWORD(j) = 1;
            if ( v18 < 0 )
              v2 = 1;
          }
        }
      }
      v11 += j;
      v13 += 8LL;
    }
    while ( v11 < 8 );
    v8 = v36;
    CurrentThread = v39;
    goto LABEL_20;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
