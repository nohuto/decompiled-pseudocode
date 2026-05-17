/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x180116E44
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18005D050 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D5B10 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800D5E78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x18011FED4 (RtlpInitializeLegacyDosDevicePathState.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  unsigned __int8 v2; // [rsp+30h] [rbp-19h]
  int v3; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v5[2]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v6; // [rsp+50h] [rbp+7h]
  const wchar_t *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+64h] [rbp+1Bh]
  __int128 v10; // [rsp+68h] [rbp+1Fh]
  _BYTE v11[4]; // [rsp+78h] [rbp+2Fh] BYREF
  int v12; // [rsp+7Ch] [rbp+33h]
  int v13; // [rsp+80h] [rbp+37h]
  unsigned int v14; // [rsp+84h] [rbp+3Bh]

  v9 = 0;
  v3 = 0;
  v5[1] = 0;
  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_1801CE294;
  if ( !dword_1801CE294 )
  {
    v6 = 0LL;
    Handle = 0LL;
    v7 = L"|~";
    v5[0] = 48;
    v8 = 64;
    v10 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, v5) >= 0
      && (int)NtQueryValueKey(Handle, L"(*", 2LL, v11, 20, &v3) >= 0
      && v12 == 4
      && v13 == 4 )
    {
      RtlpInitializeLegacyDosDevicePathState(v14);
    }
    if ( Handle )
      NtClose(Handle);
    v1 = dword_1801CE294;
    if ( !dword_1801CE294 )
    {
      if ( (Feature_TreatDosDevicePathsAsNormalFiles__private_featureState & 0x10) == 0 )
      {
        v2 = Feature_TreatDosDevicePathsAsNormalFiles__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor,
          Feature_TreatDosDevicePathsAsNormalFiles__private_featureState | 1,
          3u,
          1LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v2,
          3,
          (__int64)&Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor);
      }
      v1 = 2;
      dword_1801CE294 = 2;
    }
  }
  return v1 == 1;
}
