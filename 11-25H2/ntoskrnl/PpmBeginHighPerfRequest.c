/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14046D320
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x14073CE20 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PdcPoPerfOverride @ 0x140A2BB1C (PdcPoPerfOverride.c)
 *     PoInitializeBroadcast @ 0x140A3C114 (PoInitializeBroadcast.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14046D4E0 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}
