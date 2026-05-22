/*
 * XREFs of ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800E019C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E0080 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E056C (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 */

void __fastcall PnpDeviceWatcher::~PnpDeviceWatcher(PnpDeviceWatcher *this)
{
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 88);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 64);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((char *)this + 32);
}
