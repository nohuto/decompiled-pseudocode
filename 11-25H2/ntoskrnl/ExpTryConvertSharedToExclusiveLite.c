/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x14064B090
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x14064AF3C (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpGetThreadResourceHint @ 0x1403DF900 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x1403DF920 (ExpFindCurrentThread.c)
 */

char ExpTryConvertSharedToExclusiveLite()
{
  struct _KTHREAD *CurrentThread; // rdi
  char v1; // bl
  unsigned int ThreadResourceHint; // eax
  ULONG_PTR *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&CmpRegistryLock + 12, &LockHandle);
  v1 = 1;
  if ( *((_DWORD *)&CmpRegistryLock + 16) == 1 )
  {
    *((_WORD *)&CmpRegistryLock + 13) |= 0x80u;
    ThreadResourceHint = ExpGetThreadResourceHint((__int64)CurrentThread);
    v3 = ExpFindCurrentThread(
           (__int64)&CmpRegistryLock,
           (__int64)CurrentThread,
           (__int64)&LockHandle,
           0,
           0,
           ThreadResourceHint);
    if ( v3 != &CmpRegistryLock + 6 )
    {
      *((_OWORD *)&CmpRegistryLock + 3) = *(_OWORD *)v3;
      *((_DWORD *)&CmpRegistryLock + 14) = _mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&CmpRegistryLock + 3), 8)) & 7 | 8;
      *(_OWORD *)v3 = 0LL;
    }
  }
  else
  {
    v1 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v1;
}
