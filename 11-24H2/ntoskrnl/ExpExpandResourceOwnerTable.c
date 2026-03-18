/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x1403E912C
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x1403E8F80 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1403E90D0 (ExpFindEmptyEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  _DWORD *Pool2; // rsi

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v6 = v5 + 4;
    if ( v5 + 4 < v5 || 16 * (unsigned __int64)v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    v6 = 3;
  }
  KeReleaseInStackQueuedSpinLock(a2);
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(Pool2, v2, 16LL * v5);
      Pool2[2] = v6;
      *(_QWORD *)(a1 + 16) = Pool2;
      KeReleaseInStackQueuedSpinLock(a2);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(a2);
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  KeGetCurrentThread()->ResourceIndex = v5;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
}
