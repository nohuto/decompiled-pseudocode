/*
 * XREFs of ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1401640C0
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140077AB0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007A6B0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140047700 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x140071240 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@@Z @ 0x14008BE80 (--0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_E.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeDevicePnPEventNotifyHandler(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_DEVICE_PNP_EVENT *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  enum _NDIS_DEVICE_PNP_EVENT DevicePnPEvent; // ebp
  __int64 v6; // [rsp+30h] [rbp-68h]
  char v7[4]; // [rsp+30h] [rbp-68h]
  _BYTE v8[64]; // [rsp+40h] [rbp-58h] BYREF

  DriverHandle = a1->DriverHandle;
  DevicePnPEvent = a2->DevicePnPEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = a2->DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xF4u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
  {
    AzTelemetry::MiniportDevicePnPEventNotify::MiniportDevicePnPEventNotify(
      (AzTelemetry::MiniportDevicePnPEventNotify *)v8,
      a1,
      DevicePnPEvent);
    (*((void (__fastcall **)(void *, struct _NET_DEVICE_PNP_EVENT *, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_DEVICE_PNP_EVENT *)))ndisVerifierNdisDispatch
     + 6))(
      a1->MiniportAdapterContext,
      a2,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler);
  }
  else
  {
    AzTelemetry::MiniportDevicePnPEventNotify::MiniportDevicePnPEventNotify(
      (AzTelemetry::MiniportDevicePnPEventNotify *)v8,
      a1,
      DevicePnPEvent);
    DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler(a1->MiniportAdapterContext, a2);
  }
  AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify((AzTelemetry::MiniportDevicePnPEventNotify *)v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = DevicePnPEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xF5u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v6);
  }
}
