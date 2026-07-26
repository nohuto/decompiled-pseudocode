/*
 * XREFs of NdisIfGetInterfaceIndexFromNetLuid @ 0x14004E2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfGetInterfaceIndexFromNetLuid(NET_LUID NetLuid, PNET_IFINDEX pIfIndex)
{
  NDIS_STATUS v4; // edi
  KIRQL v5; // r8
  _DEVICE_OBJECT *i; // rax

  *pIfIndex = 0;
  v4 = -1071448021;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  for ( i = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i = *(_DEVICE_OBJECT **)&i->Type )
  {
    if ( i->Queue.ListEntry.Flink == (_LIST_ENTRY *)NetLuid.Value )
    {
      if ( i != (_DEVICE_OBJECT *)1232 )
      {
        v4 = 0;
        *pIfIndex = HIDWORD(i[-4].Queue.Wcb.DeviceContext);
      }
      break;
    }
    if ( i->Queue.ListEntry.Flink > (_LIST_ENTRY *)NetLuid.Value )
      break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  return v4;
}
