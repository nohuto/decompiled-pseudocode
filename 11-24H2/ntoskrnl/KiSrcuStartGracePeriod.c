/*
 * XREFs of KiSrcuStartGracePeriod @ 0x1405BEFFC
 * Callers:
 *     KeSrcuSynchronize @ 0x14073A880 (KeSrcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405BE81C (KiSrcuNotifyGracePeriodStarted.c)
 */

void __fastcall KiSrcuStartGracePeriod(KSPIN_LOCK *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  KSPIN_LOCK **v6; // r8
  __int64 v7; // rdx

  v4 = KeAcquireSpinLockRaiseToDpc(a1 + 5);
  _m_prefetchw(a1 + 7);
  v5 = a1[7] + 1;
  a2[2] = v5;
  v6 = (KSPIN_LOCK **)a1[9];
  if ( *v6 != a1 + 8 )
    __fastfail(3u);
  *a2 = (KSPIN_LOCK)(a1 + 8);
  a2[1] = (KSPIN_LOCK)v6;
  *v6 = a2;
  a1[9] = (KSPIN_LOCK)a2;
  a1[7] = v5;
  KeReleaseSpinLock(a1 + 5, v4);
  KiSrcuNotifyGracePeriodStarted((__int64)a1, 0LL);
  KiSrcuFlushCompleted((__int64)a1, v7);
}
