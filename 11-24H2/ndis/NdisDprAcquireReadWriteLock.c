/*
 * XREFs of NdisDprAcquireReadWriteLock @ 0x1400C2430
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x140028FA0 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 */

void __stdcall NdisDprAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  ndisAcquireReadWriteLockX(Lock, fWrite, LockState, 1);
}
