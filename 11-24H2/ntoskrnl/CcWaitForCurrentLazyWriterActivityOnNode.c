/*
 * XREFs of CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x14057B0B4 (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1402A7FF0 (CcPerfLogWorkItemEnqueue.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 */

__int64 __fastcall CcWaitForCurrentLazyWriterActivityOnNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 **v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 **v11; // rcx
  unsigned int v12; // edi
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v14; // [rsp+32h] [rbp-4Eh]
  char v15; // [rsp+33h] [rbp-4Dh]
  int v16; // [rsp+34h] [rbp-4Ch]
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = 0LL;
  v15 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v18, 0, sizeof(v18));
  result = CcAllocateWorkQueueEntry(a1, a2, a3, &v20);
  if ( (int)result >= 0 )
  {
    v7 = (__int64 *)v20;
    v8 = a1 + 848;
    *(_DWORD *)(v20 + 128) = 4;
    Object = 0;
    v16 = 0;
    v17[1] = v17;
    v17[0] = v17;
    v14 = 6;
    v7[2] = (__int64)&Object;
    if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 848, (__int64)v7, 0, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( a2 )
    {
      v11 = *(__int64 ***)(a2 + 792);
      if ( *v11 == (__int64 *)(a2 + 784) )
      {
        *v7 = a2 + 784;
        v7[1] = (__int64)v11;
        *v11 = v7;
        *(_QWORD *)(a2 + 792) = v7;
        v10 = (volatile signed __int32 *)(a2 + 808);
        *(_BYTE *)(a2 + 986) = 1;
LABEL_10:
        _InterlockedIncrement(v10);
        CcScheduleLazyWriteScan((_BYTE *)a1, (_BYTE *)a2, 1, 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v12 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        while ( 1 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 832), &v18);
          if ( !*(_DWORD *)(a3 + 176) )
            break;
          KeReleaseInStackQueuedSpinLock(&v18);
          KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
        }
        KeReleaseInStackQueuedSpinLock(&v18);
        _InterlockedDecrement(v10);
        return v12;
      }
    }
    else
    {
      v9 = *(__int64 ***)(a1 + 856);
      if ( *v9 == (__int64 *)v8 )
      {
        *v7 = v8;
        v7[1] = (__int64)v9;
        *v9 = v7;
        *(_QWORD *)(a1 + 856) = v7;
        v10 = (volatile signed __int32 *)(a1 + 872);
        *(_BYTE *)(a1 + 1050) = 1;
        goto LABEL_10;
      }
    }
    __fastfail(3u);
  }
  return result;
}
