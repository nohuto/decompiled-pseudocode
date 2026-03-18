/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x1404BE100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1404B328C (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

void __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_140F0BF70 )
    PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_140F0BF78 = 0;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
}
