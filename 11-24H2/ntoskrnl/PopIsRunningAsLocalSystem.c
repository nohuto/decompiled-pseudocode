/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x140A6A934
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1403B5750 (RtlCheckTokenMembership.c)
 */

BOOLEAN PopIsRunningAsLocalSystem()
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &IsMember);
  return IsMember;
}
