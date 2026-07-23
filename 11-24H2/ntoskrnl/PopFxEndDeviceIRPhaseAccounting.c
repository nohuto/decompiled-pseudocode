/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x1404B92BC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404ADA9C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_140F0C3F0 )
    PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_140F0C3F8 = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
