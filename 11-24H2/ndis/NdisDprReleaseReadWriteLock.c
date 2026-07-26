/*
 * XREFs of NdisDprReleaseReadWriteLock @ 0x1400C2450
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x14003CDE0 (-ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z.c)
 */

void __stdcall NdisDprReleaseReadWriteLock(PNDIS_RW_LOCK Lock, PLOCK_STATE LockState)
{
  ndisReleaseReadWriteLockX(Lock, LockState, 1);
}
