/*
 * XREFs of imp_WdfIoTargetFormatRequestForWrite @ 0x14005A5E0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x14005A618 (FxIoTargetFormatIo.c)
 */

int __fastcall imp_WdfIoTargetFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        __int64 *DeviceOffset)
{
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           IoTarget,
           Request,
           4u,
           InputBuffer,
           InputBufferOffsets,
           DeviceOffset);
}
