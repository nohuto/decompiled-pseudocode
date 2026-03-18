/*
 * XREFs of IopGetSessionIdFromPDO @ 0x140A11704
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x14034A630 (IopCheckSessionDeviceAccess.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F9184 (IopGetSessionIdFromSymbolicName.c)
 *     IoRegisterContainerNotification @ 0x140715330 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407208D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EEAA0 (PnpNotifyTargetDeviceChange.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PnpInitializeSessionId @ 0x140A7C000 (PnpInitializeSessionId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140A11F10 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall IopGetSessionIdFromPDO(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rax
  unsigned int Data; // [rsp+50h] [rbp+8h] BYREF
  ULONG Type; // [rsp+58h] [rbp+10h] BYREF
  ULONG RequiredSize; // [rsp+60h] [rbp+18h] BYREF

  RequiredSize = 0;
  v1 = -1;
  Type = 0;
  Data = -1;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0
        && IoGetDevicePropertyData(a1, &DEVPKEY_Device_SessionId, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0 )
      {
        return Data;
      }
    }
  }
  return v1;
}
