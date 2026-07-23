/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F9D78
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403F9D40 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CB0A8 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x14066722C (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x14066729C (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066730C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1403F9E88 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebp
  signed __int32 v5; // edi
  __int16 CurrentFeatureEnabledState; // bx
  signed __int32 v8; // eax
  char i; // cl
  signed __int32 v10; // esi
  int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v12 = 0;
  v13 = a2;
  v5 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = guard_dispatch_icall_no_overrides(a1, a2);
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v12);
  if ( !*(_BYTE *)(a3 + 28) )
    v12 = v3 != 0 ? v12 : 0;
  v8 = v5;
  for ( i = v5; ; i = v8 )
  {
    v10 = v8 | 0x40000;
    LODWORD(v13) = v8 | 0x40000;
    if ( v12 && (i & 2) == 0 )
    {
      v10 = CurrentFeatureEnabledState & 0x9C1 | v8 & 0xFFFBF63E | 0x40000 | 2;
      LODWORD(v13) = v10;
    }
    if ( (v5 & 4) == 0 )
    {
      v10 = v10 & 0xFFFFFBFF | CurrentFeatureEnabledState & 0x400 | 4;
      LODWORD(v13) = v10;
    }
    v8 = _InterlockedCompareExchange(a1, v10, v5);
    if ( v5 == v8 )
      break;
    v5 = v8;
  }
  if ( (v5 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(a1, *(unsigned __int8 *)(a3 + 28));
  if ( !v12 )
    LODWORD(v13) = v10 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v13;
}
