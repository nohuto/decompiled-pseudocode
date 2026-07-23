/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x14042D190
 * Callers:
 *     sub_140516870 @ 0x140516870 (sub_140516870.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)SpinLock, retaddr);
}
