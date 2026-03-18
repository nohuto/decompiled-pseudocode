/*
 * XREFs of PopFxBeginDeviceIRPhaseAccounting @ 0x1404C1ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 */

void __fastcall PopFxBeginDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  byte_140F0BF78 = 1;
  if ( PopFxGlobalDeviceAccountingInfo )
    qword_140F0BF70 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
