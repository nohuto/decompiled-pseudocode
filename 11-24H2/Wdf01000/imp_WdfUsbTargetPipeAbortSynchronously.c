/*
 * XREFs of imp_WdfUsbTargetPipeAbortSynchronously @ 0x14004F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x14001F170 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x14004D250 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x14004F110 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14004F6F0 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeAbortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  WDFREQUEST__ *v7; // r9
  _FX_DRIVER_GLOBALS *v8; // rbx
  int _a2; // edi
  FxRequestBase *v10; // r8
  const void *m_TrueRequest; // rax
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v15; // [rsp+50h] [rbp-B0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+180h] [rbp+80h] BYREF

  pFxDriverGlobals = 0LL;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe,
    &pFxDriverGlobals);
  FxUsbRequestContext::FxUsbRequestContext(&context, 0x12u);
  context.m_USBDHandle = 0LL;
  v7 = Request;
  context.__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  v8 = pFxDriverGlobals;
  context.m_Urb = &context.m_UrbLegacy;
  FxSyncRequest::FxSyncRequest(&v15, pFxDriverGlobals, &context, (unsigned __int64)v7);
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_q(v8, 5u, 0xEu, 0x18u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe);
  _a2 = FxVerifierCheckIrqlLevel(v8, 0);
  if ( _a2 >= 0 )
  {
    _a2 = FxValidateRequestOptions(v8, RequestOptions, v10);
    if ( _a2 < 0 )
    {
      WPP_IFR_SF_(v8, 2u, 0xEu, 0x19u, WPP_FxUsbPipeAPI_cpp_Traceguids);
    }
    else
    {
      _a2 = FxUsbPipe::FormatAbortRequest(pUsbPipe, v15.m_TrueRequest);
      if ( _a2 >= 0 )
      {
        if ( v8->FxVerboseOn )
        {
          if ( !v15.m_TrueRequest->m_ObjectSize
            || (m_TrueRequest = (const void *)((unsigned __int64)v15.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          {
            m_TrueRequest = v15.m_TrueRequest;
          }
          WPP_IFR_SF_qq(v8, 5u, 0xEu, 0x1Au, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, m_TrueRequest);
        }
        _a2 = FxIoTarget::SubmitSync(pUsbPipe, v15.m_TrueRequest, RequestOptions, 0LL);
      }
      if ( v8->FxVerboseOn )
        WPP_IFR_SF_qd(v8, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v15);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)_a2;
}
