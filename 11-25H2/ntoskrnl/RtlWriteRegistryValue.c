/*
 * XREFs of RtlWriteRegistryValue @ 0x140A50A70
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C79F0 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405DD320 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x14062F080 (DifRtlWriteRegistryValueWrapper.c)
 *     RtlSetActiveTimeBias @ 0x140772EFC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140773398 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14077366C (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140796D88 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079FAC8 (EtwpEnumerateAutologgerPath.c)
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     WheaWritePolicyValueToRegistry @ 0x1407B946C (WheaWritePolicyValueToRegistry.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A78080 (EtwpEnableAutoLoggerProvider.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpEnumerateKeyProviders @ 0x140A9438C (EtwpEnumerateKeyProviders.c)
 *     IopStoreBootDriveLetter @ 0x140C0C1CC (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
