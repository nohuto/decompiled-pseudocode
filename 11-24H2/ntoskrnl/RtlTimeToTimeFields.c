/*
 * XREFs of RtlTimeToTimeFields @ 0x140419FA0
 * Callers:
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077D9B0 (RtlCutoverTimeToSystemTime.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407B626C (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407B9080 (ExpKernelExpirationDateCacheProvider.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DAE44 (CmpUpdateReorganizeRegistryValues.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1409804D4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140A7BD0C (HalpUtcTimeToAcpiRealTime.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9F360 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     ExpSetSystemTime @ 0x140B6E630 (ExpSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140B6EFE0 (HaliSetWakeAlarm.c)
 *     HdlspProcessDumpCommand @ 0x140BAFFDC (HdlspProcessDumpCommand.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
