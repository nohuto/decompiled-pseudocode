/*
 * XREFs of PspThreadOpen @ 0x1409E3420
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspIsParentProcess @ 0x140447928 (PspIsParentProcess.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409E35E8 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v5; // rbx
  bool IsParentProcess; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r10
  int v17; // eax
  unsigned __int8 v18; // [rsp+48h] [rbp+20h]

  v5 = *(_QWORD *)(a4 + 544);
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    v18 = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ID51912085__private_descriptor,
      Feature_ID51912085__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v18, 3, (__int64)&Feature_ID51912085__private_descriptor);
  }
  IsParentProcess = PspIsParentProcess(a3, v5);
  v13 = v12 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v13 = v12;
  if ( ((unsigned int)v13 & *a5) != 0 )
  {
    v14 = *(_QWORD *)(a4 + 544);
    if ( a3 != v14 )
    {
      LOBYTE(v10) = *(_BYTE *)(a3 + 1530);
      LOBYTE(v13) = a2;
      LOBYTE(v11) = *(_BYTE *)(v14 + 1530);
      if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(v13, v10, v11) )
      {
        if ( !qword_140F04BD8 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3, v15) )
          return 3221225506LL;
      }
    }
  }
  if ( *(_QWORD *)(a4 + 1648) && !*(_QWORD *)(a3 + 1600) && a2 && (~HIDWORD(xmmword_140F05A60) & *a5) != 0 )
    return 3221225506LL;
  v17 = *a5;
  if ( (*a5 & 0x40) != 0 )
  {
    v17 |= 0x800u;
    *a5 = v17;
  }
  if ( (v17 & 0x20) != 0 )
  {
    v17 |= 0x400u;
    *a5 = v17;
  }
  if ( (v17 & 2) != 0 )
    *a5 = v17 | 0x1000;
  return 0LL;
}
