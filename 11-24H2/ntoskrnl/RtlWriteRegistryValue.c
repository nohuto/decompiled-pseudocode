/*
 * XREFs of RtlWriteRegistryValue @ 0x140A54360
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405CC010 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405E9470 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x14063B040 (DifRtlWriteRegistryValueWrapper.c)
 *     RtlSetActiveTimeBias @ 0x1407821AC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782648 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6158 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     WheaWritePolicyValueToRegistry @ 0x1407C8C3C (WheaWritePolicyValueToRegistry.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpEnumerateKeyProviders @ 0x140A99E54 (EtwpEnumerateKeyProviders.c)
 *     IopStoreBootDriveLetter @ 0x140C1D39C (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
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
