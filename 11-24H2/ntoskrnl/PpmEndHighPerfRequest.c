/*
 * XREFs of PpmEndHighPerfRequest @ 0x14046BC44
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x140748E30 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140A8BD00 (PoClearBroadcast.c)
 *     PdcPoPerfOverride @ 0x140A9568C (PdcPoPerfOverride.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     PopPowerRequestReferenceRelease @ 0x14046BD60 (PopPowerRequestReferenceRelease.c)
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
