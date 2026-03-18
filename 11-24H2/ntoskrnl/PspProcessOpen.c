/*
 * XREFs of PspProcessOpen @ 0x1409E8660
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspIsParentProcess @ 0x140452878 (PspIsParentProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409E87F0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char v11; // r10
  __int64 v12; // rcx
  int v13; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // [rsp+48h] [rbp+20h]

  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v17 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v17, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  IsParentProcess = PspIsParentProcess(a3, a4);
  v12 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v12 = v10;
  if ( ((unsigned int)v12 & *a5) != 0 && a3 != a4 )
  {
    if ( a2 )
    {
      LOBYTE(v12) = *(_BYTE *)(a3 + 1530);
      LOBYTE(v9) = v11;
      if ( !(unsigned __int8)RtlTestProtectedAccess(v12, v9)
        && (!qword_140F04938 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3, a4, v15, v16)) )
      {
        return 3221225506LL;
      }
    }
  }
  if ( *(_QWORD *)(a4 + 1600) && !*(_QWORD *)(a3 + 1600) && a2 && (~DWORD2(xmmword_140F05780) & *a5) != 0 )
    return 3221225506LL;
  v13 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 1532) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v13 |= 0x1000u;
    *a5 = v13;
  }
  if ( (v13 & 0x200) != 0 )
    *a5 = v13 | 0x2000;
  return 0LL;
}
