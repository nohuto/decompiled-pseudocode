/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x1405B8380
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

void __stdcall KeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseSpinLock(SpinLock, OldIrql);
  else
    KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
}
