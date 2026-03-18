/*
 * XREFs of PopUpdateAcDcState @ 0x1404ADDF4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopCurrentPowerState @ 0x140A22CB0 (PopCurrentPowerState.c)
 *     PopDiagTraceAcDcStateChange @ 0x140AC199C (PopDiagTraceAcDcStateChange.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // di
  KIRQL v4; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( dword_140F0B70C == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  dword_140F0B70C = a1;
  KeReleaseSpinLock(&PopCsResiliencyStatsLock, v4);
  v2 = 1;
  PopCurrentPowerState(&v5);
  PopDiagTraceAcDcStateChange(a1, HIDWORD(v5), DWORD2(v5));
  return v2;
}
