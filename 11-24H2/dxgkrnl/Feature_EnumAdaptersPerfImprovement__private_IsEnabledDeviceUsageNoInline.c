/*
 * XREFs of Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0
 * Callers:
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738E4 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x140073934 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1401EE220 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetYieldPercentage @ 0x1401EEC90 (DxgkGetYieldPercentage.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D5ED4 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 * Callees:
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback @ 0x14006B4E8 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback.c)
 */

__int64 Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnumAdaptersPerfImprovement__private_featureState & 0x10) != 0 )
    return Feature_EnumAdaptersPerfImprovement__private_featureState & 1;
  else
    return Feature_EnumAdaptersPerfImprovement__private_IsEnabledFallback(
             (unsigned int)Feature_EnumAdaptersPerfImprovement__private_featureState,
             3LL);
}
