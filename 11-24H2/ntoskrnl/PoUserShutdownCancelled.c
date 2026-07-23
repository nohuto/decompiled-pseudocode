/*
 * XREFs of PoUserShutdownCancelled @ 0x1406F9670
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(1LL);
  return result;
}
