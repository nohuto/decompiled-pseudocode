/*
 * XREFs of imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x14004D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x14001F170 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14004E4C4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x14004F110 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  WDFREQUEST__ *v8; // r9
  _FX_DRIVER_GLOBALS *v9; // rbx
  signed int _a3; // edi
  FxRequestBase *v11; // r8
  const void *_a2; // rax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-C0h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+48h] [rbp-B8h] BYREF
  FxRequestBuffer buf; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest v17; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  pFxDriverGlobals = 0LL;
  pUsbDevice = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice,
    &pFxDriverGlobals);
  FxUsbRequestContext::FxUsbRequestContext(&context, 0x11u);
  v8 = Request;
  context.m_pUrb = 0LL;
  v9 = pFxDriverGlobals;
  context.__vftable = (FxUsbUrbContext_vtbl *)FxUsbUrbContext::`vftable';
  FxSyncRequest::FxSyncRequest(&v17, pFxDriverGlobals, &context, (unsigned __int64)v8);
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_qq(v9, 5u, 0xEu, 0xBu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(v9, retaddr);
  _a3 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( _a3 >= 0 )
  {
    _a3 = FxValidateRequestOptions(v9, RequestOptions, v11);
    if ( _a3 >= 0 )
    {
      buf.DataType = FxRequestBufferBuffer;
      buf.u.Memory.Memory = Urb;
      buf.u.Mdl.Length = 0;
      _a3 = FxFormatUrbRequest(v9, pUsbDevice, v17.m_TrueRequest, &buf, pUsbDevice->m_UrbType, pUsbDevice->m_USBDHandle);
      if ( _a3 >= 0 )
      {
        if ( v9->FxVerboseOn )
        {
          if ( !v17.m_TrueRequest->m_ObjectSize
            || (_a2 = (const void *)((unsigned __int64)v17.m_TrueRequest ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          {
            _a2 = v17.m_TrueRequest;
          }
          WPP_IFR_SF_qq(v9, 5u, 0xEu, 0xCu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, _a2);
        }
        _a3 = FxIoTarget::SubmitSync(pUsbDevice, v17.m_TrueRequest, RequestOptions, 0LL);
      }
      if ( v9->FxVerboseOn )
        WPP_IFR_SF_qqd(v9, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceApiKm_cpp_Traceguids, UsbDevice, Urb, _a3);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v17);
  return (unsigned int)_a3;
}
