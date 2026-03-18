/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140A1C494
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  RtlCheckTokenMembership(0LL, SeLocalSystemSid);
  return 0;
}
