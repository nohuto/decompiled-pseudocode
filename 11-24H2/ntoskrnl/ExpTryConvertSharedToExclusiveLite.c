/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x140656F90
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x140656E3C (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpGetThreadResourceHint @ 0x140343720 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x1403E8F80 (ExpFindCurrentThread.c)
 */

char __fastcall ExpTryConvertSharedToExclusiveLite(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v3; // di
  unsigned int ThreadResourceHint; // eax
  _QWORD *v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    *(_WORD *)(a1 + 26) |= 0x80u;
    ThreadResourceHint = ExpGetThreadResourceHint((__int64)CurrentThread);
    v5 = ExpFindCurrentThread(a1, (__int64)CurrentThread, (__int64)&LockHandle, 0, 0, ThreadResourceHint);
    if ( v5 != (_QWORD *)(a1 + 48) )
    {
      *(_OWORD *)(a1 + 48) = *(_OWORD *)v5;
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
      *(_OWORD *)v5 = 0LL;
    }
  }
  else
  {
    v3 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
