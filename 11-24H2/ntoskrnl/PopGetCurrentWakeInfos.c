/*
 * XREFs of PopGetCurrentWakeInfos @ 0x1404B8154
 * Callers:
 *     PopGetWakeSource @ 0x140AA0808 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  v4 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 8LL * (unsigned int)PopWakeInfoCount, 0x206D654Du);
    if ( Pool2 )
    {
      v5 = PopWakeInfoList;
      while ( (__int64 *)v5 != &PopWakeInfoList && v2 < v4 )
      {
        *(_QWORD *)(Pool2 + 8LL * v2) = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
        ++v2;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v4;
  *a1 = Pool2;
  return result;
}
