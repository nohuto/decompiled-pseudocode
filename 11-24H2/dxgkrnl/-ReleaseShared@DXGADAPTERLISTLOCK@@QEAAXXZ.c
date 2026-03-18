/*
 * XREFs of ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x140073934
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1400734D0 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738A8 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401D6A18 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401D6EA0 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTERLISTLOCK::ReleaseShared(DXGADAPTERLISTLOCK *this)
{
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 16);
    ExReleasePushLockSharedEx((char *)this + 48, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    DXGFASTMUTEX::Release((struct _KTHREAD **)this);
  }
}
