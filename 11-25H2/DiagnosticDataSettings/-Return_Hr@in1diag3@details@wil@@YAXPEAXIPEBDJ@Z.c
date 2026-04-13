/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003338 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelpIsDeviceAzureADJoined @ 0x1800035E4 (TelpIsDeviceAzureADJoined.c)
 *     TelpReadRegistryDword @ 0x180003690 (TelpReadRegistryDword.c)
 *     TelpReadRegistryString @ 0x180003710 (TelpReadRegistryString.c)
 *     TelEvaluateActiveSettingAuthority @ 0x1800038C0 (TelEvaluateActiveSettingAuthority.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x1800039F0 (TelGetAllAllowedTelemetryTypes.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003B00 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetNumericPolicy @ 0x180003C20 (TelGetNumericPolicy.c)
 *     TelGetRegionalSettingsValue @ 0x180003FD0 (TelGetRegionalSettingsValue.c)
 *     TelGetStringPolicy @ 0x180004150 (TelGetStringPolicy.c)
 *     TelIsOsInProcessorMode @ 0x1800044C0 (TelIsOsInProcessorMode.c)
 *     TelIsTelemetryTypeAllowed @ 0x180004770 (TelIsTelemetryTypeAllowed.c)
 *     TelIsTelemetryTypeAllowedWinRE @ 0x1800047D0 (TelIsTelemetryTypeAllowedWinRE.c)
 *     TelSetLocalTelemetrySetting @ 0x180004850 (TelSetLocalTelemetrySetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x1800048C8 (TelpReadEnterpriseGovSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180004A1C (TelpReadGroupPolicySetting.c)
 *     TelpReadLocalSetting @ 0x180004AE8 (TelpReadLocalSetting.c)
 *     TelpReadMdmSetting @ 0x180004BC8 (TelpReadMdmSetting.c)
 *     TelpReadOfflineOsPolicySetting @ 0x180004C98 (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004E38 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180004FF4 (TelpReadOfflineSoftwareRegistryString.c)
 *     TelpReadUsersPolicySetting @ 0x1800051AC (TelpReadUsersPolicySetting.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180002544 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<1>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
