/*
 * XREFs of PopResetCurrentPolicies @ 0x140A65B7C
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140A659E8 (PopBatteryUpdateCompositeInformation.c)
 *     PopChangeCapability @ 0x140A65B60 (PopChangeCapability.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1404A9304 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopDefaultPolicy @ 0x14073CC64 (PopDefaultPolicy.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
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
