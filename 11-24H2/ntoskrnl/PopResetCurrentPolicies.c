/*
 * XREFs of PopResetCurrentPolicies @ 0x140A688CC
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A68738 (PopBatteryUpdateCompositeInformation.c)
 *     PopChangeCapability @ 0x140A688B0 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404AA6FC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDefaultPolicy @ 0x140748C74 (PopDefaultPolicy.c)
 *     PopApplyPolicy @ 0x1409B85D0 (PopApplyPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  ULONG v2; // r9d
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v7[15]; // [rsp+5Ch] [rbp-A4h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  memset_0(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           &ResultLength);
    if ( v1 >= 0 )
    {
      v2 = ResultLength - 12;
    }
    else
    {
      PopDefaultPolicy(v7);
      v2 = 232;
    }
    ResultLength = v2;
    PopApplyPolicy(0, 0, v7, v2);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
