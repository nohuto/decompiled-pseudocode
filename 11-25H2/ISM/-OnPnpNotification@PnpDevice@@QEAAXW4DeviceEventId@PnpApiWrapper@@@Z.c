/*
 * XREFs of ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x1800E4350
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800726C8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x1800E4790 (-UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ.c)
 */

void __fastcall PnpDevice::OnPnpNotification(PnpDevice *a1, int a2)
{
  DWORD *v2; // rbx
  int v3; // edx
  int v4; // edx

  v2 = (DWORD *)a1;
  v3 = a2 - 5;
  if ( !v3 )
    goto LABEL_5;
  v4 = v3 - 1;
  if ( !v4 )
  {
    PnpDevice::UnregisterDeviceHandleNotifications(a1);
    PnpDevice::CreateFileHandle((PnpDevice *)v2, v2[33], v2[34]);
    return;
  }
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    PnpDevice::UnregisterDeviceHandleNotifications(a1);
    a1 = (PnpDevice *)v2;
LABEL_5:
    PnpDevice::CloseInterface(a1);
  }
}
