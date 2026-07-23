/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14047B368
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14070A290 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140737084 (PiDrvDbResolveNodeFilePaths.c)
 *     CmpOpenDevicesControlSet @ 0x1407CCAC0 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14096E66C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A195D4 (SshpGenerateDeviceFriendlyName.c)
 *     PopGetCallerContextFromBuffer @ 0x140A2EFC0 (PopGetCallerContextFromBuffer.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PopSleepstudyUlongFormatter @ 0x140A88760 (PopSleepstudyUlongFormatter.c)
 *     PopSleepstudyUlong64Formatter @ 0x140A8C190 (PopSleepstudyUlong64Formatter.c)
 *     PopIdleWakeSystemImageCallback @ 0x140A90730 (PopIdleWakeSystemImageCallback.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9F360 (PiDevCfgBuildDriverConfigurationId.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140AA0228 (PopIdleWakeGenerateDescriptionString.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140C47BC8 (CmpAddAliasEntry.c)
 *     CmpCreateControlSet @ 0x140C47F54 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140C4830C (CmpCreateControlSetOverride.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
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
