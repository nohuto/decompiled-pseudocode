/*
 * XREFs of PopCadTriggerDriverLoad @ 0x1407537C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14069D300 (ZwLoadDriver.c)
 */

NTSTATUS PopCadTriggerDriverLoad()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
