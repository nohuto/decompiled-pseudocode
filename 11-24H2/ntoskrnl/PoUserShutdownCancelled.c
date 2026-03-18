/*
 * XREFs of PoUserShutdownCancelled @ 0x1406FBA30
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(1LL);
  return result;
}
