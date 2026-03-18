/*
 * XREFs of RtlGetActiveConsoleId @ 0x14042F190
 * Callers:
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x14093289C (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x1409BB660 (PopNotifyConsoleUserPresent.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetActiveConsoleId()
{
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[80].Blink->Flink);
  else
    return MEMORY[0xFFFFF780000002D8];
}
