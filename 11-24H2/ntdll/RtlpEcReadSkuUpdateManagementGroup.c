/*
 * XREFs of RtlpEcReadSkuUpdateManagementGroup @ 0x180145114
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x180144FF0 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x180162C40 (ZwQueryLicenseValue.c)
 */

NTSTATUS __fastcall RtlpEcReadSkuUpdateManagementGroup(bool *a1)
{
  NTSTATUS result; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  ULONG Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Data = 0;
  Type = 0;
  ResultDataSize = 0;
  ValueName.Buffer = L"UpdatePolicy-UpdateManagementGroup";
  *(_QWORD *)&ValueName.Length = 4587588LL;
  result = ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 )
  {
    if ( ResultDataSize == 4 && Type == 4 )
      *a1 = Data == 0;
    else
      return -1073741788;
  }
  return result;
}
