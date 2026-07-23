/*
 * XREFs of PopResetCurrentPolicies @ 0x140A61C7C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A61AE8 (PopBatteryUpdateCompositeInformation.c)
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404A48FC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDefaultPolicy @ 0x140746F64 (PopDefaultPolicy.c)
 *     PopApplyPolicy @ 0x14099EC20 (PopApplyPolicy.c)
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
