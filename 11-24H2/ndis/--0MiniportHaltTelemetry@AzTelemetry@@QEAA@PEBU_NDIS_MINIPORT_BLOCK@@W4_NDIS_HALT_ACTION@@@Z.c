/*
 * XREFs of ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x14008D6A0
 * Callers:
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x140165310 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 * Callees:
 *     ??$?0X$0A@$0A@@?$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071410 (--$-0X$0A@$0A@@-$DriverCallbackBase@U_NDIS_MINIPORT_BLOCK@@X@Details@AzTelemetry@@QEAA@PEBU_NDIS.c)
 */

AzTelemetry::MiniportHaltTelemetry *__fastcall AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry(
        AzTelemetry::MiniportHaltTelemetry *this,
        const struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NDIS_HALT_ACTION a3)
{
  AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,void>(
    (__int64)this,
    (__int64)a2);
  *((_DWORD *)this + 12) = a3;
  *(_QWORD *)this = &AzTelemetry::MiniportHaltTelemetry::`vftable';
  return this;
}
