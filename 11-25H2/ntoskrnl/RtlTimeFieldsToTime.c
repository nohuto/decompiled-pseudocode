/*
 * XREFs of RtlTimeFieldsToTime @ 0x14042E5E0
 * Callers:
 *     HalpAcpiRealTimeToUtcTime @ 0x1406F0E08 (HalpAcpiRealTimeToUtcTime.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1407202A8 (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlCutoverTimeToSystemTime @ 0x14076E824 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExGetExpirationDate @ 0x1407A8A18 (ExGetExpirationDate.c)
 *     I_MinAsn1AdjustFileTime @ 0x140817BA4 (I_MinAsn1AdjustFileTime.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140817D94 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140818268 (MinAsn1DecodeUtcTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140B581F0 (ExUpdateSystemTimeFromCmos.c)
 *     HaliSetWakeAlarm @ 0x140B5E690 (HaliSetWakeAlarm.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  return RtlpTimeFieldsToTime(TimeFields, Time);
}
