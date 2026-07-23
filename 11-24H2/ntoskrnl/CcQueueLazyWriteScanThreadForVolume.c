/*
 * XREFs of CcQueueLazyWriteScanThreadForVolume @ 0x140265C20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsLazyWriteScanQueuedInternal @ 0x140265EE4 (CcIsLazyWriteScanQueuedInternal.c)
 *     CcNotifyExternalCachesInternal @ 0x140265F30 (CcNotifyExternalCachesInternal.c)
 *     CcSetLazyWriteScanQueuedInternal @ 0x140266090 (CcSetLazyWriteScanQueuedInternal.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueueSpecial @ 0x1404B0E58 (CcPostWorkQueueSpecial.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall CcQueueLazyWriteScanThreadForVolume(char *StartContext)
{
  char *v1; // r15
  __int64 v2; // r13
  unsigned int v3; // ebx
  NTSTATUS v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF

  v18 = 0LL;
  v1 = StartContext + 920;
  v2 = *((_QWORD *)StartContext + 4);
  v3 = 0;
  Object[2] = StartContext + 920;
  Object[0] = StartContext + 816;
  Object[1] = StartContext + 840;
  Object[3] = StartContext + 864;
  Object[4] = StartContext + 888;
  Object[5] = StartContext + 1200;
  Object[6] = StartContext + 1576;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    v5 = KeWaitForMultipleObjects(7u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v5 )
    {
      v3 = 1;
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v3 = 2;
      goto LABEL_11;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v3 = 4;
      goto LABEL_11;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v3 = 8;
      goto LABEL_11;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v3 = 16;
      goto LABEL_11;
    }
    v10 = v9 - 1;
    if ( !v10 )
      return;
    if ( v10 == 1 )
    {
      v3 = 32;
      goto LABEL_11;
    }
    if ( !v3 )
      break;
LABEL_11:
    v11 = *((_QWORD *)StartContext + 8);
    if ( !v11 )
      KeBugCheckEx(0x34u, 0x6B9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( CcNumberOfExternalCaches
      && (*((char **)StartContext + 156) != StartContext + 1248 || *((char **)StartContext + 158) != StartContext + 1264) )
    {
      CcNotifyExternalCachesInternal(v3, v2, StartContext);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
    if ( (unsigned __int8)CcIsLazyWriteScanQueuedInternal(v1, v3) )
    {
LABEL_21:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      LOBYTE(v13) = 1;
      CcSetLazyWriteScanQueuedInternal(v12, v3, v13);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (int)CcAllocateWorkQueueEntry(v2, StartContext, v11, &v18) < 0 )
      {
        ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
        v17 = v3;
        *(_BYTE *)(v2 + 1049) = 0;
LABEL_20:
        CcSetLazyWriteScanQueuedInternal(v1, v17, 0LL);
        goto LABEL_21;
      }
      v14 = v18;
      v15 = 72LL;
      *(_DWORD *)(v18 + 128) = 3;
      if ( v3 != 8 )
        v15 = 104LL;
      *(_DWORD *)(v14 + 16) = v3;
      v16 = v15 + v11;
      if ( v3 == 32 )
      {
        if ( !(unsigned __int8)CcPostWorkQueueSpecial(v14, v16) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 768), &LockHandle);
          v17 = 32LL;
          goto LABEL_20;
        }
      }
      else
      {
        CcPostWorkQueue(v14, v16);
      }
    }
  }
}
