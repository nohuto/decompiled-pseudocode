/*
 * XREFs of ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800E05B4
 * Callers:
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18008CDF0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800E019C (--1PnpDeviceWatcher@@QEAA@XZ.c)
 * Callees:
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800655AC (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

HSTRING __fastcall NtList<PnpDeviceWatcher::NotificationListEntry>::Clear(HSTRING *a1)
{
  HSTRING *v2; // rcx
  HSTRING result; // rax

  while ( 1 )
  {
    v2 = (HSTRING *)*a1;
    if ( *((HSTRING **)*a1 + 1) != a1 || (result = *v2, *((HSTRING **)*v2 + 1) != v2) )
      __fastfail(3u);
    *a1 = result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == a1 )
      break;
    PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
