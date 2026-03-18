/*
 * XREFs of PspReferenceSystemDll @ 0x14090BA68
 * Callers:
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140BCD990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObFastReferenceObject @ 0x140400CE0 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x140439B8C (ObFastReferenceObjectLocked.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
    if ( _InterlockedCompareExchange64(a1 + 1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1 + 1, 0, v5, (unsigned __int64)(a1 + 1));
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v2 = ObFastReferenceObjectLocked(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  }
  return v2;
}
