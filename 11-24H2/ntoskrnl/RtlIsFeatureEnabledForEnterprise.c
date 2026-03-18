/*
 * XREFs of RtlIsFeatureEnabledForEnterprise @ 0x1405EF030
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEcReadPolicyState @ 0x1405EF108 (RtlpEcReadPolicyState.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EF278 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EF2F4 (RtlpEtcIsValidFeatureId.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 */

bool __fastcall RtlIsFeatureEnabledForEnterprise(int a1)
{
  char v2; // di
  int v4; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-18h] BYREF
  char v6; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+30h] BYREF
  int v8; // [rsp+88h] [rbp+38h] BYREF

  v7 = 0;
  v2 = 1;
  v6 = 1;
  if ( (int)RtlpEtcGetDwordFromRegistry(
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls\\Active",
              L"ActiveConfig",
              &v7) >= 0
    && (unsigned __int8)RtlpEtcIsValidFeatureId(
                          __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                          v7) )
  {
    if ( (int)RtlpEcReadPolicyState(&v6) < 0
      && (v4 = 0,
          v8 = 0,
          v7 = 0,
          v5[1] = L"UpdatePolicy-UpdateManagementGroup",
          v5[0] = 4587588LL,
          (int)ZwQueryLicenseValue(v5, &v8, &v4, 4LL, &v7) >= 0)
      && v7 == 4
      && v8 == 4 )
    {
      return v4 == 0;
    }
    else
    {
      return v6;
    }
  }
  return v2;
}
