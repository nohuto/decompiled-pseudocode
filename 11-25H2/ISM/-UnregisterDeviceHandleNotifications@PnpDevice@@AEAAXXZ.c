/*
 * XREFs of ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x1800E4790
 * Callers:
 *     ??1PnpDevice@@UEAA@XZ @ 0x18006D010 (--1PnpDevice@@UEAA@XZ.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x1800E4350 (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 * Callees:
 *     ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x180036880 (-UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 */

void __fastcall PnpDevice::UnregisterDeviceHandleNotifications(PnpDevice *this, void **a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDevice *)((char *)this + 48), a2);
    *v2 = 0LL;
  }
}
