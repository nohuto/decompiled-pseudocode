/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x14009C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140001CF0 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForAbort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  unsigned int _a3; // eax
  unsigned int v7; // edi
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-28h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+88h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pRequest = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe,
    &pFxDriverGlobals);
  v5 = pFxDriverGlobals;
  if ( pFxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_qq(pFxDriverGlobals, 5u, 0xEu, 0x1Cu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request);
  FxObjectHandleGetPtr(v5, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  _a3 = FxUsbPipe::FormatAbortRequest(pUsbPipe, pRequest);
  v7 = _a3;
  if ( v5->FxVerboseOn )
    WPP_IFR_SF_qqd(v5, 5u, 0xEu, 0x1Du, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, _a3);
  return v7;
}
