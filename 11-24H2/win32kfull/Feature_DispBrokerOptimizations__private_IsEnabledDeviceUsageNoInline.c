/*
 * XREFs of Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140270EA0
 * Callers:
 *     zzzResetSharedDesktops @ 0x14024E3F0 (zzzResetSharedDesktops.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402705AC (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x140270ED8 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 */

__int64 Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DispBrokerOptimizations__private_featureState & 0x10) != 0 )
    return Feature_DispBrokerOptimizations__private_featureState & 1;
  else
    return Feature_DispBrokerOptimizations__private_IsEnabledFallback(
             (unsigned int)Feature_DispBrokerOptimizations__private_featureState,
             3LL);
}
