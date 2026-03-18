/*
 * XREFs of ACPIUnregisterForDeviceNotifications2 @ 0x140052B90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIUnregisterForDeviceNotifications @ 0x140052BB0 (ACPIUnregisterForDeviceNotifications.c)
 */

__int64 __fastcall ACPIUnregisterForDeviceNotifications2(__int64 a1)
{
  return ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768), 0LL);
}
