/*
 * XREFs of PopFxBeginDeviceIRPhaseAccounting @ 0x1404BD4C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxBeginDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  KxAcquireSpinLock(&PopCsResiliencyStatsLock);
  byte_140F0C3F8 = 1;
  if ( PopFxGlobalDeviceAccountingInfo )
    qword_140F0C3F0 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
