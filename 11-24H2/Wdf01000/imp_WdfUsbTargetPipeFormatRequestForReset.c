/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForReset @ 0x14009C390
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14004D2B0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qqD @ 0x14009ACE4 (WPP_IFR_SF_qqD.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  unsigned int level; // eax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned int v9; // edi
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
    WPP_IFR_SF_qq(pFxDriverGlobals, 5u, 0xEu, 0x23u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request);
  FxObjectHandleGetPtr(v5, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  level = FxUsbPipe::FormatResetRequest(pUsbPipe, pRequest);
  v9 = level;
  if ( v5->FxVerboseOn )
    WPP_IFR_SF_qqD(v5, v7, v8, 0x24u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Request, level);
  return v9;
}
