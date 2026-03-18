/*
 * XREFs of ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0
 * Callers:
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1400734D0 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D6A18 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D6EA0 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D5ED4 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTERLISTLOCK::AcquireShared(DXGADAPTERLISTLOCK *this)
{
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
    DXGPUSHLOCK::AcquireShared((DXGADAPTERLISTLOCK *)((char *)this + 48));
  else
    DXGFASTMUTEX::Acquire(this);
}
