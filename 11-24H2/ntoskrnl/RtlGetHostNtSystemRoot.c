/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140A9BB90
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1232;
}
