/*
 * XREFs of RtlTimeToTimeFields @ 0x14042E020
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     RtlCutoverTimeToSystemTime @ 0x14076E824 (RtlCutoverTimeToSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407A697C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x1407A73C4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407A9780 (ExpKernelExpirationDateCacheProvider.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CB130 (CmpUpdateReorganizeRegistryValues.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14094F0B4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7DC2C (HalpUtcTimeToAcpiRealTime.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9E750 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExpSetSystemTime @ 0x140B5DCB0 (ExpSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140B5E690 (HaliSetWakeAlarm.c)
 *     HdlspProcessDumpCommand @ 0x140B9DFDC (HdlspProcessDumpCommand.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
