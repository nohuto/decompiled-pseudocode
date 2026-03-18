/*
 * XREFs of imp_WdfUsbTargetPipeWriteSynchronously @ 0x14006EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x14001EE38 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeWriteSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesWritten)
{
  _FX_DRIVER_GLOBALS *v9; // rdi

  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], 5u, 0xEu, 0xBu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  return FxUsbPipe::_SendTransfer(
           v9,
           (unsigned __int64)Pipe,
           Request,
           RequestOptions,
           MemoryDescriptor,
           BytesWritten,
           0);
}
