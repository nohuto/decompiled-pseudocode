/*
 * XREFs of HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1400234C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ReportDeviceFailure @ 0x14001A940 (HUBPDO_ReportDeviceFailure.c)
 */

__int64 __fastcall HUBDSM_MarkingUnknownDeviceAsFailed(__int64 a1)
{
  HUBPDO_ReportDeviceFailure(*(__int64 **)(a1 + 960));
  return 4077LL;
}
