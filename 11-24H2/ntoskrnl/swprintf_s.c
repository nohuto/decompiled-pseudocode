/*
 * XREFs of swprintf_s @ 0x140500710
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x140453740 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x140453820 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x140471800 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x140471950 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1404C35C0 (RtlEthernetAddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x14054A624 (HalpExtBuildResourceIdString.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140698AF0 (BiSpacesUpdatePhysicalDevicePath.c)
 *     SddlpUuidToString @ 0x140796E84 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1407BBB18 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBE54 (ExpCreateOutputSIGNATURE.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 *     CmpAddAcpiAliasEntry @ 0x1407D32D4 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3D50 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4A88 (CmpMoveBiosAliasTable.c)
 *     CmpRestampVersion @ 0x1407D7CBC (CmpRestampVersion.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DAE44 (CmpUpdateReorganizeRegistryValues.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     BiCreateBootEntry @ 0x14081533C (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140816574 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x1408174E0 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14085A128 (BiAddStoreFromFile.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     SiGetBootDeviceName @ 0x140A2240C (SiGetBootDeviceName.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 *     ExpTranslateEfiPath @ 0x140A5C19C (ExpTranslateEfiPath.c)
 *     ExpFindDiskSignature @ 0x140A5C820 (ExpFindDiskSignature.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9287C (PopPotsLogPowerTransitionReliability.c)
 *     BcdEnumerateDisks @ 0x140A955F0 (BcdEnumerateDisks.c)
 *     ExpGetDriveGeometry @ 0x140AAD5F0 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AAF94C (BiGetPhysicalDriveName.c)
 *     CreateMiniNtBootKey @ 0x140C0C220 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C35B78 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x140500740 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
