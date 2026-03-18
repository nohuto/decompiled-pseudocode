/*
 * XREFs of SmKmKeyGenGenerate @ 0x14078AA38
 * Callers:
 *     SmcStoreCreate @ 0x14078E424 (SmcStoreCreate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x14078AB78 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x14078AC3C (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x14078ADFC (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int v12; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v9, (unsigned __int64)BugCheckParameter2);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v11 = (struct _PRIVILEGE_SET *)v10;
      if ( v10 )
        break;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v12 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2, v4);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    if ( *(_DWORD *)(v10 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v11);
  }
  memmove(a3, *(const void **)(v10 + 24), v4);
  v12 = 0;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
