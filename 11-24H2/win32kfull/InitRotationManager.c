/*
 * XREFs of InitRotationManager @ 0x140270F00
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 InitRotationManager()
{
  __int64 Pool2; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp+8h]

  if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
  {
    v7 = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor,
      Feature_BrokeredDisplays_RotMgr__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v7,
      3,
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor);
  }
  Pool2 = ExAllocatePool2(256LL, 40LL, 1836347989LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_DWORD *)(Pool2 + 12) = 0;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_DWORD *)(Pool2 + 20) = 0;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_DWORD *)(Pool2 + 28) = 1;
    *(_QWORD *)Pool2 = &CDispBrokerRotationMgr::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 66112) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v5, v4) + 66112) == 0LL ? 0xC0000017 : 0;
}
