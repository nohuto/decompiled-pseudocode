/*
 * XREFs of ?Erase@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXPEAUDeviceListEntry@PnpDeviceWatcher@@@Z @ 0x1800E1948
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

PnpDeviceWatcher::RetryDeviceListEntry *__fastcall NtList<PnpDeviceWatcher::DeviceListEntry>::Erase(
        __int64 a1,
        PnpDeviceWatcher::RetryDeviceListEntry *a2)
{
  PnpDeviceWatcher::RetryDeviceListEntry *v2; // r8
  PnpDeviceWatcher::RetryDeviceListEntry **v3; // rax

  v2 = *(PnpDeviceWatcher::RetryDeviceListEntry **)a2;
  if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)a2 + 8LL) != a2
    || (v3 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)a2 + 1), *v3 != a2) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *((_QWORD *)v2 + 1) = v3;
  --*(_DWORD *)(a1 + 16);
  return PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(a2);
}
