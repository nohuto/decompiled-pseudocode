/*
 * XREFs of IopGetSessionIdFromPDO @ 0x1409A1C44
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x140433938 (IopCheckSessionDeviceAccess.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406ED544 (IopGetSessionIdFromSymbolicName.c)
 *     IoRegisterContainerNotification @ 0x140709230 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407147D4 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x14096CFB0 (PnpNotifyTargetDeviceChange.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     PnpInitializeSessionId @ 0x140A7A298 (PnpInitializeSessionId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1409A2450 (IoGetDevicePropertyData.c)
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
