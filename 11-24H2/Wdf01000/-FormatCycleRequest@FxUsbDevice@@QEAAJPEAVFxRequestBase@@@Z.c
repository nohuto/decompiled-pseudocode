/*
 * XREFs of ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x14009F134
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x14009C770 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 */

__int64 __fastcall FxUsbDevice::FormatCycleRequest(FxUsbDevice *this, FxRequestBase *Request)
{
  FxRequestBuffer emptyBuffer; // [rsp+40h] [rbp-28h] BYREF

  emptyBuffer.DataType = FxRequestBufferUnspecified;
  memset(&emptyBuffer.u, 0, sizeof(emptyBuffer.u));
  return FxIoTarget::FormatIoctlRequest(this, Request, 0x22001Fu, 1u, &emptyBuffer, &emptyBuffer);
}
