/*
 * XREFs of RtlDeleteRegistryValue @ 0x140ABC780
 * Callers:
 *     DifRtlDeleteRegistryValueWrapper @ 0x14062D970 (DifRtlDeleteRegistryValueWrapper.c)
 *     WheapResetPolicyDefaults @ 0x1407B9550 (WheapResetPolicyDefaults.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
