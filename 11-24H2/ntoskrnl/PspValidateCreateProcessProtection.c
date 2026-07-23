/*
 * XREFs of PspValidateCreateProcessProtection @ 0x140A87F24
 * Callers:
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspValidateCreateProcessProtection(__int64 a1, __int64 a2, char a3, char a4, PS_PROTECTION Source)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v8; // [rsp+30h] [rbp+8h]

  v5 = *(unsigned __int8 *)(a1 + 1530);
  v6 = 0;
  if ( (a4 & 4) != 0 && a3 && (*(_DWORD *)(a2 + 8) & 0x800LL) == 0 )
  {
    if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
    {
      v8 = Feature_ID51912085__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ID51912085__private_descriptor,
        Feature_ID51912085__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v8,
        3,
        (__int64)&Feature_ID51912085__private_descriptor);
    }
    if ( (dword_140B3E244[3 * (v5 >> 4)] & 0x40) != 0 && !RtlTestProtectedAccess(Source, (PS_PROTECTION)v5) )
      return (unsigned int)-1073741811;
  }
  return v6;
}
