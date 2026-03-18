/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140A71554
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  RtlCheckTokenMembership(0LL, SeLocalSystemSid);
  return 0;
}
