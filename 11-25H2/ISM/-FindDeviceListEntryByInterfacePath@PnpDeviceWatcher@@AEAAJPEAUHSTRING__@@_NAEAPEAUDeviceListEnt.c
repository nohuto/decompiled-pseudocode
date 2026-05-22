/*
 * XREFs of ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180037980
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?GetDeviceInstanceId@PnpApiWrapper@@YAJPEAUHSTRING__@@AEAPEAU2@@Z @ 0x180037A48 (-GetDeviceInstanceId@PnpApiWrapper@@YAJPEAUHSTRING__@@AEAPEAU2@@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180038FEC (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800394EC (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
        PnpDeviceWatcher *this,
        PnpApiWrapper *a2,
        bool a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v4; // rsi
  char *i; // rbx
  HSTRING *v10; // r8
  int DeviceInstanceId; // ebx
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this + 64;
  for ( i = (char *)*((_QWORD *)this + 8); i != v4; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 32LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  DeviceInstanceId = PnpApiWrapper::GetDeviceInstanceId(a2, (HSTRING)&string, v10);
  if ( DeviceInstanceId >= 0 )
    DeviceInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string, a3, a4);
  WindowsDeleteString(string);
  return (unsigned int)DeviceInstanceId;
}
