/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x1404BF82C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B308C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_140F0A750 )
    PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_140F0A758 = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
