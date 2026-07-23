/*
 * XREFs of PopUpdateAcDcState @ 0x1404A9584
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCurrentPowerState @ 0x140A20120 (PopCurrentPowerState.c)
 *     PopDiagTraceAcDcStateChange @ 0x140AC4C34 (PopDiagTraceAcDcStateChange.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // di
  KIRQL v4; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( dword_140F0B38C == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  dword_140F0B38C = a1;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v4);
  v2 = 1;
  PopCurrentPowerState(&v5);
  PopDiagTraceAcDcStateChange(a1, HIDWORD(v5), DWORD2(v5));
  return v2;
}
