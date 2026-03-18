/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140AA0800
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1232;
}
