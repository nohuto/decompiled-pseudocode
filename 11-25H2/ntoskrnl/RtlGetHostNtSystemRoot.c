/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140A9AA40
 * Callers:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1232;
}
