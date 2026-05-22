/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800CD560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::OnDeviceRemoval(__int64 a1, struct DeviceInfo *a2)
{
  return InputStateManager::OnDeviceRemoval((RTL_SRWLOCK *)(a1 - 8), a2);
}
