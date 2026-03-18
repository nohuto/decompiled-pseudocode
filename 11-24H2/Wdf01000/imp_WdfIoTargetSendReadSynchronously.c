/*
 * XREFs of imp_WdfIoTargetSendReadSynchronously @ 0x140064890
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 */

__int64 __fastcall imp_WdfIoTargetSendReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesRead)
{
  return FxIoTargetSendIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           (unsigned __int64)IoTarget,
           (unsigned __int64)Request,
           3u,
           OutputBuffer,
           DeviceOffset,
           RequestOptions,
           BytesRead);
}
