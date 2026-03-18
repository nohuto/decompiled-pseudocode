/*
 * XREFs of KiSrcuStartGracePeriod @ 0x1405BD9BC
 * Callers:
 *     KeSrcuSynchronize @ 0x140730930 (KeSrcuSynchronize.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x1405BD1DC (KiSrcuNotifyGracePeriodStarted.c)
 */

void __fastcall KiSrcuStartGracePeriod(KSPIN_LOCK *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  KSPIN_LOCK **v6; // r8

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
  KiSrcuFlushCompleted((__int64)a1);
}
