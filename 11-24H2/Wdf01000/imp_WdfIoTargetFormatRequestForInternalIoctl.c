/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x14005B9D0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIoctl @ 0x14005BA24 (FxIoTargetFormatIoctl.c)
 */

int __fastcall imp_WdfIoTargetFormatRequestForInternalIoctl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  return FxIoTargetFormatIoctl(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
           IoTarget,
           Request,
           Ioctl,
           1u,
           InputBuffer,
           InputBufferOffsets,
           OutputBuffer,
           OutputBufferOffsets);
}
