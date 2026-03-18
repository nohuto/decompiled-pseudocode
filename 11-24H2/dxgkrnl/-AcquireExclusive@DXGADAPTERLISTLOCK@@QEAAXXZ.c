/*
 * XREFs of ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C
 * Callers:
 *     ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1401D3710 (-DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1401EE220 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetYieldPercentage @ 0x1401EEC90 (DxgkGetYieldPercentage.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D5ED4 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTERLISTLOCK::AcquireExclusive(DXGADAPTERLISTLOCK *this)
{
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTERLISTLOCK *)((char *)this + 48));
  else
    DXGFASTMUTEX::Acquire(this);
}
