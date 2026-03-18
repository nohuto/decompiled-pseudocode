/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x14043A950
 * Callers:
 *     sub_140518FB0 @ 0x140518FB0 (sub_140518FB0.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)SpinLock, retaddr);
}
