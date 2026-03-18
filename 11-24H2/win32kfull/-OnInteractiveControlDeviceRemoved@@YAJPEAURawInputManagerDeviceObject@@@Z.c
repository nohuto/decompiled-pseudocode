/*
 * XREFs of ?OnInteractiveControlDeviceRemoved@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DB260
 * Callers:
 *     EditionDevicePnpNotification @ 0x14012DDD0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1401EE990 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402DF02C (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall OnInteractiveControlDeviceRemoved(struct RawInputManagerDeviceObject *a1, __int64 a2)
{
  InteractiveControlManager *v3; // rax

  v3 = InteractiveControlManager::Instance((__int64)a1, a2);
  return InteractiveControlManager::OnDeviceRemoval(v3, a1);
}
