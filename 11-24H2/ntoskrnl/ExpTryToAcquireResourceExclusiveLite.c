/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x14065574C
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x140655580 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceExclusive @ 0x140431450 (ExpTryAcquireResourceExclusive.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14046891C (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // r12
  int v4; // r15d
  int v5; // ebp
  int v6; // r14d
  char v7; // si
  int v8; // ecx
  unsigned int v9; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v6 = 65537;
  __incgsdword(0x90E0u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7;
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = v8 | 8;
    if ( v5 )
      v4 = *(_DWORD *)(a1 + 68);
    LOBYTE(v2) = v5 != 0;
    v6 = 32 * v2 + 65537;
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v9 = (*(_DWORD *)(a1 + 56) + 8) ^ ((unsigned __int8)*(_DWORD *)(a1 + 56) ^ (unsigned __int8)(*(_DWORD *)(a1 + 56) + 8)) & 7;
    *(_DWORD *)(a1 + 56) = v9;
    if ( v5 )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v2 = v9 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    __incgsdword(0x90E4u);
    __incgsdword(0x9064u);
  }
  if ( v5 )
    PerfLogExecutiveResourceAcquire(v6, a1, v2, v4);
  return v7;
}
