/*
 * XREFs of CcWaitForCurrentLazyWriterActivityOnNode @ 0x140578388
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x140578544 (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcWaitForCurrentLazyWriterActivityOnNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  PSLIST_ENTRY v7; // rbx
  _SLIST_ENTRY *v8; // rdi
  PSLIST_ENTRY *v9; // rax
  volatile signed __int32 *v10; // rbx
  PSLIST_ENTRY *v11; // rcx
  unsigned int v12; // edi
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v14; // [rsp+32h] [rbp-4Eh]
  char v15; // [rsp+33h] [rbp-4Dh]
  int v16; // [rsp+34h] [rbp-4Ch]
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = 0LL;
  v15 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v18, 0, sizeof(v18));
  result = CcAllocateWorkQueueEntry(a1, (_SLIST_ENTRY *)a2, a3, &v20);
  if ( (int)result >= 0 )
  {
    v7 = v20;
    v8 = (_SLIST_ENTRY *)(a1 + 848);
    LODWORD(v20[8].Next) = 4;
    Object = 0;
    v16 = 0;
    v17[1] = v17;
    v17[0] = v17;
    v14 = 6;
    v7[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 848, (__int64)v7, 0, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( a2 )
    {
      v11 = *(PSLIST_ENTRY **)(a2 + 792);
      if ( *v11 == (PSLIST_ENTRY)(a2 + 784) )
      {
        v7->Next = (_SLIST_ENTRY *)(a2 + 784);
        *((_QWORD *)&v7->Next + 1) = v11;
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
      v9 = *(PSLIST_ENTRY **)(a1 + 856);
      if ( *v9 == v8 )
      {
        v7->Next = v8;
        *((_QWORD *)&v7->Next + 1) = v9;
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
