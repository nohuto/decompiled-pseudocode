/*
 * XREFs of PopCadTriggerDriverLoad @ 0x140763280
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x1406A85D0 (ZwLoadDriver.c)
 */

NTSTATUS PopCadTriggerDriverLoad()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
