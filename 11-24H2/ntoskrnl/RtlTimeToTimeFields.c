/*
 * XREFs of RtlTimeToTimeFields @ 0x1404260F0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407624E0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077DA80 (RtlCutoverTimeToSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407B5E1C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407B8C30 (ExpKernelExpirationDateCacheProvider.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DA8F4 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140995494 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A812AC (HalpUtcTimeToAcpiRealTime.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AA3FD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExpSetSystemTime @ 0x140B6CD90 (ExpSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140B6D740 (HaliSetWakeAlarm.c)
 *     HdlspProcessDumpCommand @ 0x140BADFDC (HdlspProcessDumpCommand.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140426110 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
