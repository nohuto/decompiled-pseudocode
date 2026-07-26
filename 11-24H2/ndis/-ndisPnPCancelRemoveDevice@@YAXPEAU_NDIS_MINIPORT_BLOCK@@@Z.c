/*
 * XREFs of ?ndisPnPCancelRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009273C
 * Callers:
 *     ?ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140092830 (-ndisPnPCancelStopDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A704C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140035B60 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  int v3; // edx
  struct _NET_PNP_EVENT_NOTIFICATION v4; // [rsp+30h] [rbp-C8h] BYREF

  memset(&v4, 0, sizeof(v4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      91,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
  ndisInitializeNetPnPEvent(&v4, 0LL);
  v4.NetPnPEvent.NetEvent = NetEventCancelRemoveDevice;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      13,
      92,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
}
