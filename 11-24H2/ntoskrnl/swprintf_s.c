/*
 * XREFs of swprintf_s @ 0x140502E50
 * Callers:
 *     RtlIpv4AddressToStringExW @ 0x14045E880 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14045E960 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringExW @ 0x140475890 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1404759E0 (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1404CA270 (RtlEthernetAddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x14054CD64 (HalpExtBuildResourceIdString.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140697A70 (BiSpacesUpdatePhysicalDevicePath.c)
 *     SddlpUuidToString @ 0x140796D74 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x1407BB6C8 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BBA04 (ExpCreateOutputSIGNATURE.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     CmSetAcpiHwProfile @ 0x1407D25A4 (CmSetAcpiHwProfile.c)
 *     CmpAddAcpiAliasEntry @ 0x1407D2DE4 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3860 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1407D4598 (CmpMoveBiosAliasTable.c)
 *     CmpRestampVersion @ 0x1407D7768 (CmpRestampVersion.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407DA8F4 (CmpUpdateReorganizeRegistryValues.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     BiCreateBootEntry @ 0x140814BFC (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140815E34 (SiFindSystemPartition.c)
 *     SiGetBiosSystemPartition @ 0x140816DA0 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14085E3B8 (BiAddStoreFromFile.c)
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140862DB8 (LocalConvertSDToStringSD_Rev1.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     SiGetBootDeviceName @ 0x140A2D9CC (SiGetBootDeviceName.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A60638 (_CmCreateOrdinalInstanceKey.c)
 *     ExpTranslateEfiPath @ 0x140A6389C (ExpTranslateEfiPath.c)
 *     ExpFindDiskSignature @ 0x140A63F20 (ExpFindDiskSignature.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9604C (PopPotsLogPowerTransitionReliability.c)
 *     BcdEnumerateDisks @ 0x140A9A084 (BcdEnumerateDisks.c)
 *     ExpGetDriveGeometry @ 0x140AB2680 (ExpGetDriveGeometry.c)
 *     BiGetPhysicalDriveName @ 0x140AB54BC (BiGetPhysicalDriveName.c)
 *     CreateMiniNtBootKey @ 0x140C0A220 (CreateMiniNtBootKey.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140C33A38 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     vswprintf_s @ 0x140502E80 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
