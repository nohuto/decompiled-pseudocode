/*
 * XREFs of RtlTimeFieldsToTime @ 0x1404266B0
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406FCBF8 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072C228 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077DA80 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExGetExpirationDate @ 0x1407B7EC8 (ExGetExpirationDate.c)
 *     I_MinAsn1AdjustFileTime @ 0x140827998 (I_MinAsn1AdjustFileTime.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140827B88 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082805C (MinAsn1DecodeUtcTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B68020 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140B6D740 (HaliSetWakeAlarm.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x1404266C8 (RtlpTimeFieldsToTime.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time);
}
