/*
 * XREFs of ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x140002400
 * Callers:
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400022B8 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140002358 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::AcquireExclusive(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this);
  LODWORD(this[1].Ptr) = GetCurrentThreadId();
}
