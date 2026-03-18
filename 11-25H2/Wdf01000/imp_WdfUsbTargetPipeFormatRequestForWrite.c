/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x14006A190
 * Callers:
 *     <none>
 * Callees:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x14002D610 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  _FX_DRIVER_GLOBALS *v8; // rbp

  v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      5u,
      0xEu,
      0xCu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      WriteMemory);
  return FxUsbPipe::_FormatTransfer(
           v8,
           (unsigned __int64)Pipe,
           (unsigned __int64)Request,
           (unsigned __int64)WriteMemory,
           WriteOffsets,
           0);
}
