/*
 * XREFs of PspReferenceSystemDll @ 0x1409222A8
 * Callers:
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140BE0990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C37444 (PspInitPhase3.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x1403517CC (ObFastReferenceObjectLocked.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObFastReferenceObject @ 0x1403FD230 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  char *v5; // rdi

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (char *)KeAbPreAcquire((__int64)(a1 + 1), 0LL);
    if ( _InterlockedCompareExchange64(a1 + 1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a1 + 1, 0, v5, (__int64)(a1 + 1));
    if ( v5 )
      v5[10] = 1;
    v2 = ObFastReferenceObjectLocked(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
