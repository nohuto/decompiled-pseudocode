/*
 * XREFs of ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038849C
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402CA9B0 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1403884DC (-TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 391);
  if ( v2 )
  {
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(v2, 1LL);
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(*((_QWORD *)this + 391), 2LL);
  }
}
