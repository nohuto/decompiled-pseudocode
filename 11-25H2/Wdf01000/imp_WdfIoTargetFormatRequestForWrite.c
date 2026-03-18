/*
 * XREFs of imp_WdfIoTargetFormatRequestForWrite @ 0x14006F780
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1400346CC (FxIoTargetFormatIo.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        _LARGE_INTEGER *DeviceOffset)
{
  WDFMEMORY__ *IoBuffer; // [rsp+20h] [rbp-28h]

  IoBuffer = InputBuffer;
  LOBYTE(InputBuffer) = 4;
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           (unsigned __int64)IoTarget,
           (unsigned __int64)Request,
           (unsigned __int16)InputBuffer,
           IoBuffer,
           InputBufferOffsets,
           DeviceOffset);
}
