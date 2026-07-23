/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x140577A50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsLazyWriteScanQueuedInternal @ 0x140265EE4 (CcIsLazyWriteScanQueuedInternal.c)
 *     CcNotifyExternalCachesInternal @ 0x140265F30 (CcNotifyExternalCachesInternal.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x140266090 (CcSetLazyWriteScanQueuedInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  _BYTE *v1; // r12
  char *v2; // r13
  int v4; // r14d
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // r15
  _QWORD *v15; // rdx
  _BYTE *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _KSPIN_LOCK_QUEUE *volatile Next; // rcx
  __int64 v20; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h]
  PVOID Object[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-70h] BYREF

  v1 = StartContext + 123;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v22 = 0LL;
  v2 = (char *)(StartContext + 166);
  Object[2] = StartContext + 123;
  Object[0] = StartContext + 110;
  Object[5] = StartContext + 166;
  Object[1] = StartContext + 113;
  v4 = 0;
  Object[3] = StartContext + 116;
  v5 = 0;
  Object[4] = StartContext + 119;
LABEL_2:
  v6 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v11 = 2;
LABEL_11:
      v5 = 1;
      goto LABEL_16;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            return;
          v11 = v4;
          v5 = 0;
          if ( !v4 )
            return;
          goto LABEL_16;
        }
        v11 = 16;
      }
      else
      {
        v11 = 8;
      }
      goto LABEL_11;
    }
    v11 = 4;
  }
  else
  {
    v11 = 1;
    v5 = 1;
  }
LABEL_16:
  v4 = v11;
  _m_prefetchw(StartContext + 162);
  v12 = StartContext[162];
  while ( (unsigned __int64)(v12 + 1) > 1 )
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange64(StartContext + 162, v12 + 1, v12);
    if ( v13 == v12 )
    {
      v14 = StartContext[16];
      if ( !v14 )
        KeBugCheckEx(0x34u, 0x7B4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( CcNumberOfExternalCaches )
      {
        if ( (__int64 *)CcExternalCacheList != &CcExternalCacheList )
        {
          v15 = (_QWORD *)*((_QWORD *)PspSystemPartition + 1);
          if ( StartContext == v15 )
            CcNotifyExternalCachesInternal(v11, (__int64)v15, 0LL);
        }
      }
      CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
      KeAcquireInStackQueuedSpinLock(StartContext + 96, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
      if ( CcIsLazyWriteScanQueuedInternal(v1, v11) )
      {
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
      }
      else
      {
        CcSetLazyWriteScanQueuedInternal(v16, v11, 1);
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        if ( (int)CcAllocateWorkQueueEntry((__int64)StartContext, 0LL, v14, (PSLIST_ENTRY *)&LockHandle) >= 0 )
        {
          Next = LockHandle.LockQueue.Next;
          v20 = 72LL;
          LODWORD(LockHandle.LockQueue.Next[8].Next) = 3;
          if ( v11 != 8 )
            v20 = 104LL;
          LODWORD(Next[1].Next) = v11;
          CcPostWorkQueue(Next, v14 + v20, v17, v18);
        }
        else
        {
          ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
          KeAcquireInStackQueuedSpinLock(StartContext + 96, (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
          *((_BYTE *)StartContext + 1049) = 0;
          CcSetLazyWriteScanQueuedInternal(v1, v11, 0);
          KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
        }
      }
      v5 = 0;
      CcDereferencePartition((__int64)StartContext);
      goto LABEL_2;
    }
  }
  if ( v12 )
    __fastfail(0xEu);
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
}
