/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x1403D6CCC
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x1403D6B20 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1403D6C70 (ExpFindEmptyEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  _DWORD *Pool2; // rsi

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v7;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 3;
  }
  KeReleaseInStackQueuedSpinLock(a2);
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)v6, 0x61546552u);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(Pool2, v2, 16LL * v5);
      Pool2[2] = v7;
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
