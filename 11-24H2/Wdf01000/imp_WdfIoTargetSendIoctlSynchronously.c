/*
 * XREFs of imp_WdfIoTargetSendIoctlSynchronously @ 0x14000EB40
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 */

__int64 __fastcall imp_WdfIoTargetSendIoctlSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  return FxIoTargetSendIoctl(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           (unsigned __int64)IoTarget,
           (unsigned __int64)Request,
           Ioctl,
           0,
           InputBuffer,
           OutputBuffer,
           RequestOptions,
           BytesReturned);
}
