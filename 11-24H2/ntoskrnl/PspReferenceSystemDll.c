/*
 * XREFs of PspReferenceSystemDll @ 0x1408FF9C8
 * Callers:
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     MmInitSystemDll @ 0x140BDE990 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x140C35304 (PspInitPhase3.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x140397714 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140402C30 (ObFastReferenceObject.c)
 */

ULONG_PTR __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v5; // rdi
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
      ExfAcquirePushLockSharedEx(a1 + 1, 0, v5, (__int64)(a1 + 1));
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
