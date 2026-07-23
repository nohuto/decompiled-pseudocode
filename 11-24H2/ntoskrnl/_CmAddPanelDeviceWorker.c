/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x14081CD50
 * Callers:
 *     _CmAddPanelDevice @ 0x14081CC0C (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     _CmCreateDevicePanel @ 0x14081CF00 (_CmCreateDevicePanel.c)
 *     _CmDeleteDevicePanel @ 0x14081D10C (_CmDeleteDevicePanel.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  int DevicePanel; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0;
  v15 = 0LL;
  Handle = 0LL;
  v16 = 0;
  v12 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, a3, (unsigned int)&v15, (__int64)&v16);
  if ( DevicePanel >= 0 )
  {
    DevicePanel = PnpCtxRegCreateKey(
                    a1,
                    (_DWORD)v15,
                    (unsigned int)L"Devices",
                    0,
                    7,
                    0LL,
                    (__int64)&Handle,
                    (__int64)&v12);
    if ( DevicePanel >= 0 )
    {
      if ( v12 == 2 )
      {
        v13 = 0;
        v10 = PnpCtxRegQueryValue(v9, Handle, a3, 0LL, 0LL, &v13);
        DevicePanel = v10;
        if ( v10 == -1073741772 || v10 == -1073741444 )
        {
          DevicePanel = 0;
        }
        else if ( v10 )
        {
          if ( v10 < 0 )
            goto LABEL_9;
        }
        else
        {
          *a4 = 1;
        }
      }
      if ( *a4 )
      {
LABEL_9:
        if ( DevicePanel >= 0 )
          goto LABEL_14;
        goto LABEL_10;
      }
      DevicePanel = PnpCtxRegSetValue(v9, Handle, a3, 0LL, 0LL, 0);
      if ( DevicePanel >= 0 )
      {
        PnpObjectRaisePropertyChangeEvent(a1, a3, 1, 0, 0LL, (__int64)&DEVPKEY_Device_PanelId);
        goto LABEL_14;
      }
    }
  }
  if ( DevicePanel != -1073741444 )
    goto LABEL_9;
  DevicePanel = -1073741772;
LABEL_10:
  if ( v12 == 1 )
    PnpCtxRegDeleteKey(a1, (__int64)Handle, 0LL);
  if ( v16 == 1 )
    CmDeleteDevicePanel(a1, a2);
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)DevicePanel;
}
