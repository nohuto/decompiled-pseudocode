/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1407821D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
