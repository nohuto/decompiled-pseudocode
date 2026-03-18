/*
 * XREFs of SmKmKeyGenGenerate @ 0x140799E00
 * Callers:
 *     SmcStoreCreate @ 0x14079D7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x140799F40 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x14079A004 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x14079A1C4 (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rdi
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
        ExfAcquirePushLockSharedEx(BugCheckParameter2, 0, v9, (__int64)BugCheckParameter2);
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
