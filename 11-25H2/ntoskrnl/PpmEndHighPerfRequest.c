/*
 * XREFs of PpmEndHighPerfRequest @ 0x14046D2B4
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x14073CE20 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PdcPoPerfOverride @ 0x140A2BB1C (PdcPoPerfOverride.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140A86FE8 (PoClearBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     PopPowerRequestReferenceRelease @ 0x14046D3D0 (PopPowerRequestReferenceRelease.c)
 */

void __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PopPowerRequestReferenceRelease(PpmHighPerfPowerRequest);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = 10000LL * (unsigned int)PpmHighPerfDuration[v1];
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  KeReleaseSpinLock(&PpmHighPerfRequestLock, v2);
}
