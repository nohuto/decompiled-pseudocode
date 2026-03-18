/*
 * XREFs of PoUserShutdownCancelled @ 0x1406EFBC0
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
    return PopSwitchUpdateUserShutdownScenarioState(1LL);
  return result;
}
