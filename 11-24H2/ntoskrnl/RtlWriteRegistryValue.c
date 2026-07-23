/*
 * XREFs of RtlWriteRegistryValue @ 0x1409B6290
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405C9730 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405E69C0 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x140639600 (DifRtlWriteRegistryValueWrapper.c)
 *     RtlSetActiveTimeBias @ 0x1407820DC (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140782578 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078284C (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6298 (WmipSaveGuidSecurityDescriptor.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5C94 (ExpSetTimeZoneInformation.c)
 *     WheaWritePolicyValueToRegistry @ 0x1407C912C (WheaWritePolicyValueToRegistry.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwpEnumerateKeyProviders @ 0x140A953C0 (EtwpEnumerateKeyProviders.c)
 *     IopStoreBootDriveLetter @ 0x140C1F3DC (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
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
