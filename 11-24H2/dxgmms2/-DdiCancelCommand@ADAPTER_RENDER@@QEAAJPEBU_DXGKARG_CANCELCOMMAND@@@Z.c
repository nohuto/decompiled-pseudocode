/*
 * XREFs of ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x14004B554
 * Callers:
 *     VidSchiDiscardQueuePacket @ 0x1400B83F8 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCancelCommand(ADAPTER_RENDER *this, const struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_CANCELCOMMAND *))DxgCoreInterface[44])(
           this,
           a2);
}
