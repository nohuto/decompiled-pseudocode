/*
 * XREFs of IopGetSessionIdFromPDO @ 0x1409BFB14
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1403C1594 (IopCheckSessionDeviceAccess.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F6DC4 (IopGetSessionIdFromSymbolicName.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409EC4E0 (PnpNotifyTargetDeviceChange.c)
 *     PnpInitializeSessionId @ 0x140A76300 (PnpInitializeSessionId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1409C0320 (IoGetDevicePropertyData.c)
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
