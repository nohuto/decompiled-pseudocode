/*
 * XREFs of ??0MiniportDevicePnPEventNotify@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@@Z @ 0x140097630
 * Callers:
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x14016FE40 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 * Callees:
 *     ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB20 (--$-0X$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 */

AzTelemetry::MiniportDevicePnPEventNotify *__fastcall AzTelemetry::MiniportDevicePnPEventNotify::MiniportDevicePnPEventNotify(
        AzTelemetry::MiniportDevicePnPEventNotify *this,
        const struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NDIS_DEVICE_PNP_EVENT a3)
{
  AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
    (__int64)this,
    (__int64)a2);
  *((_DWORD *)this + 12) = a3;
  *(_QWORD *)this = &AzTelemetry::MiniportDevicePnPEventNotify::`vftable';
  return this;
}
