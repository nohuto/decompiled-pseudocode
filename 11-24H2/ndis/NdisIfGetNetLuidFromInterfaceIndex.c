/*
 * XREFs of NdisIfGetNetLuidFromInterfaceIndex @ 0x1400C8DA0
 * Callers:
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x140147F44 (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfGetNetLuidFromInterfaceIndex(NET_IFINDEX ifIndex, PNET_LUID pNetLuid)
{
  NDIS_STATUS v4; // ebx
  KIRQL v5; // al
  _LIST_ENTRY *i; // rdx

  pNetLuid->Value = 0LL;
  v4 = -1071448021;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  for ( i = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i != (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        i = i->Flink )
  {
    if ( HIDWORD(i[-77].Flink) == ifIndex )
    {
      v4 = 0;
      pNetLuid->Value = (ULONG64)i[5].Flink;
      break;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  return v4;
}
