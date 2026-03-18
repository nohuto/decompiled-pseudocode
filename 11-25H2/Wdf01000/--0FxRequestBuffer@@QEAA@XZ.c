/*
 * XREFs of ??0FxRequestBuffer@@QEAA@XZ @ 0x140006AE4
 * Callers:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140005CF0 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x140005E70 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1400062E0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::FxRequestBuffer(FxRequestBuffer *this)
{
  this->DataType = FxRequestBufferUnspecified;
  this->u.Memory = 0LL;
  this->u.RefMdl.Mdl = 0LL;
}
