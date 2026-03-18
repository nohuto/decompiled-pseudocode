/*
 * XREFs of ??0FxRequestBuffer@@QEAA@XZ @ 0x140008614
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140007824 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1400079A0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140007E10 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::FxRequestBuffer(FxRequestBuffer *this)
{
  this->DataType = FxRequestBufferUnspecified;
  this->u.Memory = 0LL;
  this->u.RefMdl.Mdl = 0LL;
}
