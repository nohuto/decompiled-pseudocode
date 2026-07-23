/*
 * XREFs of PspProcessOpen @ 0x1409E3620
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspIsParentProcess @ 0x140447928 (PspIsParentProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  unsigned int v9; // r9d
  PS_PROTECTION v10; // r10
  unsigned int v11; // ecx
  int v12; // edx
  unsigned __int8 v14; // [rsp+48h] [rbp+20h]

  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v14 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v14, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  IsParentProcess = PspIsParentProcess(a3, a4);
  v11 = v9 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v11 = v9;
  if ( (v11 & *a5) != 0
    && a3 != a4
    && a2
    && !RtlTestProtectedAccess(*(PS_PROTECTION *)(a3 + 1530), v10)
    && (!qword_140F04BD8 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3, a4)) )
  {
    return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1600) && !*(_QWORD *)(a3 + 1600) && a2 && (~DWORD2(xmmword_140F05A60) & *a5) != 0 )
    return 3221225506LL;
  v12 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 1532) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v12 |= 0x1000u;
    *a5 = v12;
  }
  if ( (v12 & 0x200) != 0 )
    *a5 = v12 | 0x2000;
  return 0LL;
}
