/*
 * XREFs of RtlTimeFieldsToTime @ 0x14041A560
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406FA838 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072A218 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077D9B0 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExGetExpirationDate @ 0x1407B8318 (ExGetExpirationDate.c)
 *     I_MinAsn1AdjustFileTime @ 0x140828168 (I_MinAsn1AdjustFileTime.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082882C (MinAsn1DecodeUtcTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B6A160 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140B6EFE0 (HaliSetWakeAlarm.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14041A578 (RtlpTimeFieldsToTime.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time);
}
