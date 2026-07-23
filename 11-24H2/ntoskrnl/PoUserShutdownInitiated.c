/*
 * XREFs of PoUserShutdownInitiated @ 0x140A9C570
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(3LL);
  return result;
}
