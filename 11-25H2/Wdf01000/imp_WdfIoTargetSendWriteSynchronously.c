/*
 * XREFs of imp_WdfIoTargetSendWriteSynchronously @ 0x14006FF00
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetSendIo @ 0x140032D90 (FxIoTargetSendIo.c)
 */

__int64 __fastcall imp_WdfIoTargetSendWriteSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesWritten)
{
  return FxIoTargetSendIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           (unsigned __int64)IoTarget,
           (unsigned __int64)Request,
           4u,
           InputBuffer,
           DeviceOffset,
           RequestOptions,
           BytesWritten);
}
