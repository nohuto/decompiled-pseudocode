/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14047FA74
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x140700810 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14072CEC4 (PiDrvDbResolveNodeFilePaths.c)
 *     CmpOpenDevicesControlSet @ 0x1407BCDB8 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmSetAcpiHwProfile @ 0x1407C2E64 (CmSetAcpiHwProfile.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407D679C (CmpDeleteCorruptedLogfile.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140981F5C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1409824B0 (PiDevCfgBuildIndirectString.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A1A304 (SshpGenerateDeviceFriendlyName.c)
 *     PopGetCallerContextFromBuffer @ 0x140A34C60 (PopGetCallerContextFromBuffer.c)
 *     PopSleepstudyUlongFormatter @ 0x140A87230 (PopSleepstudyUlongFormatter.c)
 *     PopSleepstudyUlong64Formatter @ 0x140A8AD00 (PopSleepstudyUlong64Formatter.c)
 *     PopIdleWakeSystemImageCallback @ 0x140A8FDE0 (PopIdleWakeSystemImageCallback.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9E750 (PiDevCfgBuildDriverConfigurationId.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140A9F708 (PopIdleWakeGenerateDescriptionString.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140C347BC (CmpAddAliasEntry.c)
 *     CmpCreateControlSet @ 0x140C34B48 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140C34F00 (CmpCreateControlSetOverride.c)
 *     CmpCreateHardwareProfiles @ 0x140C3512C (CmpCreateHardwareProfiles.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAAE0 (_vsnwprintf.c)
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
