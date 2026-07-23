/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140AA3BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409B66B0 (RtlpQueryTimeZoneInformationWorker.c)
 */

int __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
