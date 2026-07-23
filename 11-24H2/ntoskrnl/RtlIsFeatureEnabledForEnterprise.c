/*
 * XREFs of RtlIsFeatureEnabledForEnterprise @ 0x1405EC610
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEcReadPolicyState @ 0x1405EC6E8 (RtlpEcReadPolicyState.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EC858 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EC8D4 (RtlpEtcIsValidFeatureId.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 */

bool __fastcall RtlIsFeatureEnabledForEnterprise(int a1)
{
  char v2; // di
  int Data; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-18h] BYREF
  char v6; // [rsp+78h] [rbp+28h] BYREF
  ULONG ResultDataSize; // [rsp+80h] [rbp+30h] BYREF
  ULONG Type; // [rsp+88h] [rbp+38h] BYREF

  ResultDataSize = 0;
  v2 = 1;
  v6 = 1;
  if ( (int)RtlpEtcGetDwordFromRegistry(
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls\\Active") >= 0
    && (unsigned __int8)RtlpEtcIsValidFeatureId(
                          __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                          ResultDataSize) )
  {
    if ( (int)RtlpEcReadPolicyState(&v6) < 0
      && (Data = 0,
          Type = 0,
          ResultDataSize = 0,
          ValueName.Buffer = L"UpdatePolicy-UpdateManagementGroup",
          *(_QWORD *)&ValueName.Length = 4587588LL,
          ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0)
      && ResultDataSize == 4
      && Type == 4 )
    {
      return Data == 0;
    }
    else
    {
      return v6;
    }
  }
  return v2;
}
