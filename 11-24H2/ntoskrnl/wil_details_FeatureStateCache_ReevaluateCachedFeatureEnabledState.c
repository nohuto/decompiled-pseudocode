/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403FF858
 * Callers:
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1403FF820 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CD938 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066893C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 * Callees:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1403FF968 (wil_details_GetCurrentFeatureEnabledState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebp
  signed __int32 v6; // edi
  __int16 CurrentFeatureEnabledState; // bx
  __int64 v9; // r9
  signed __int32 v10; // eax
  char i; // cl
  unsigned int v12; // esi
  int v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]

  v4 = 0;
  v14 = 0;
  v15 = a2;
  v6 = a2;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v4 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  CurrentFeatureEnabledState = wil_details_GetCurrentFeatureEnabledState(a3, &v14);
  if ( !*(_BYTE *)(a3 + 28) )
    v14 = v4 != 0 ? v14 : 0;
  v10 = v6;
  for ( i = v6; ; i = v10 )
  {
    v12 = v10;
    LODWORD(v15) = v10;
    if ( v14 )
    {
      LODWORD(v15) = v10;
      if ( (i & 2) == 0 )
      {
        v12 = CurrentFeatureEnabledState & 0x9C1 | v10 & 0xFFFFF63E | 2;
        LODWORD(v15) = v12;
      }
    }
    if ( (v6 & 4) == 0 )
    {
      v12 = v12 & 0xFFFFFBFF | CurrentFeatureEnabledState & 0x400 | 4;
      LODWORD(v15) = v12;
    }
    v10 = _InterlockedCompareExchange(a1, v12, v6);
    if ( v6 == v10 )
      break;
    v6 = v10;
  }
  if ( (v6 & 4) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    guard_dispatch_icall_no_overrides(a1, *(unsigned __int8 *)(a3 + 28), v4, v9);
  if ( !v14 )
    LODWORD(v15) = v12 & 0xFFFFF63E | CurrentFeatureEnabledState & 0x9C1;
  return v15;
}
