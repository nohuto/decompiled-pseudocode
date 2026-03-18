/*
 * XREFs of imp_VfWdfIoTargetFormatRequestForIoctl @ 0x1400DF890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoTargetFormatRequestForIoctl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        __int64 IoctlCode,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffset,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, __int64, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfIoTargetFormatRequestForIoctl)(
           DriverGlobals,
           IoTarget,
           Request,
           IoctlCode,
           InputBuffer,
           InputBufferOffset,
           OutputBuffer,
           OutputBufferOffset);
}
