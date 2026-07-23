/*
 * XREFs of PpmBeginHighPerfRequest @ 0x140464930
 * Callers:
 *     PopSetupHighPerfPowerRequest @ 0x140747120 (PopSetupHighPerfPowerRequest.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PoInitializeBroadcast @ 0x140A36214 (PoInitializeBroadcast.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PdcPoPerfOverride @ 0x140A91EBC (PdcPoPerfOverride.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}
