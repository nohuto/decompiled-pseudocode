/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14046BCB0
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x140748E30 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PoInitializeBroadcast @ 0x140A40934 (PoInitializeBroadcast.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x140A9568C (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14046BE70 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}
