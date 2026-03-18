/*
 * XREFs of PopFxBeginDeviceIRPhaseAccounting @ 0x1404C34D4
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

void __fastcall PopFxBeginDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  byte_140F0A758 = 1;
  if ( PopFxGlobalDeviceAccountingInfo )
    qword_140F0A750 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
