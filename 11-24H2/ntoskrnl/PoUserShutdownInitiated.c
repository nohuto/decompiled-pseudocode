/*
 * XREFs of PoUserShutdownInitiated @ 0x140AA11E0
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140754120 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(3LL);
  return result;
}
