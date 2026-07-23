/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x180111E30
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180072C30 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D0E80 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800D11E8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x18011E104 (RtlpInitializeLegacyDosDevicePathState.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  unsigned __int8 v2; // [rsp+30h] [rbp-19h]
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp+2Fh] BYREF
  int v7; // [rsp+7Ch] [rbp+33h]
  int v8; // [rsp+80h] [rbp+37h]
  unsigned int v9; // [rsp+84h] [rbp+3Bh]

  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_1801CD294;
  if ( !dword_1801CD294 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"|~";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_180173DE8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v7 == 4
      && v8 == 4 )
    {
      RtlpInitializeLegacyDosDevicePathState(v9);
    }
    if ( KeyHandle )
      NtClose(KeyHandle);
    v1 = dword_1801CD294;
    if ( !dword_1801CD294 )
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
      dword_1801CD294 = 2;
    }
  }
  return v1 == 1;
}
