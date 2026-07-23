/*
 * XREFs of PopCadTriggerDriverLoad @ 0x140762C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x1406A9570 (ZwLoadDriver.c)
 */

NTSTATUS PopCadTriggerDriverLoad()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
