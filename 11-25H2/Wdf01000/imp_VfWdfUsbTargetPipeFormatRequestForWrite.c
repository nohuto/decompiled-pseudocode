/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForWrite @ 0x1400E1610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForWrite)(
           DriverGlobals,
           Pipe,
           Request,
           WriteMemory,
           WriteOffset);
}
