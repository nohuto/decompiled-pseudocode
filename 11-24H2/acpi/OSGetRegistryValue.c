/*
 * XREFs of OSGetRegistryValue @ 0x1400B3AFC
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1400B3440 (IrqPolicyGetDevicePolicy.c)
 *     PcisuppGetRoutingInfo @ 0x1400B37A4 (PcisuppGetRoutingInfo.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400C5E00 (ACPIInitGetPlatformOverrides.c)
 *     IrqPolicyConfigure @ 0x1400C8C5C (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400C8D54 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *Pool2; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  result = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &ResultLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -2147483643 || result == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, ResultLength, 1399874369LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformationAlign64, Pool2, ResultLength, &ResultLength);
      if ( v8 >= 0 )
      {
        *a3 = v7;
        return 0;
      }
      else
      {
        ExFreePoolWithTag(v7, 0);
        return v8;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
