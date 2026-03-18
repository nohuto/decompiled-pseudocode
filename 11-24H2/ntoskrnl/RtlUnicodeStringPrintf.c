/*
 * XREFs of RtlUnicodeStringPrintf @ 0x140480894
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14070C6F0 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140739154 (PiDrvDbResolveNodeFilePaths.c)
 *     CmpOpenDevicesControlSet @ 0x1407CC5D0 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmSetAcpiHwProfile @ 0x1407D25A4 (CmSetAcpiHwProfile.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6620 (CmpDeleteCorruptedLogfile.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140985E5C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A255E4 (SshpGenerateDeviceFriendlyName.c)
 *     PopGetCallerContextFromBuffer @ 0x140A39F00 (PopGetCallerContextFromBuffer.c)
 *     PiDevCfgBuildIndirectString @ 0x140A65E4C (PiDevCfgBuildIndirectString.c)
 *     PopSleepstudyUlongFormatter @ 0x140A8C230 (PopSleepstudyUlongFormatter.c)
 *     PopSleepstudyUlong64Formatter @ 0x140A8FB50 (PopSleepstudyUlong64Formatter.c)
 *     PopIdleWakeSystemImageCallback @ 0x140A93F80 (PopIdleWakeSystemImageCallback.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AA3FD0 (PiDevCfgBuildDriverConfigurationId.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140AA4F28 (PopIdleWakeGenerateDescriptionString.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140C45A78 (CmpAddAliasEntry.c)
 *     CmpCreateControlSet @ 0x140C45E04 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140C461BC (CmpCreateControlSetOverride.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FD260 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS v5; // ebx
  size_t v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v5 = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  v6 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v7 = vsnwprintf(DestinationString->Buffer, v6, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
