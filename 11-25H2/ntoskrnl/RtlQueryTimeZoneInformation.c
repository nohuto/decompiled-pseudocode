/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x1409936D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140992AEC (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0xACuLL);
}
