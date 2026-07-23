/*
 * XREFs of RtlGetActiveConsoleId @ 0x140421360
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x140420E04 (PoBlockConsoleSwitchEx.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink->Flink);
  else
    return MEMORY[0xFFFFF780000002D8];
}
