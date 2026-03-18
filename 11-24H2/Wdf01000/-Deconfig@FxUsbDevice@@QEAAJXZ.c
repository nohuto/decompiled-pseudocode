/*
 * XREFs of ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EF90
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009D510 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x14004F230 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x14005057C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x14009F178 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxUsbDevice::Deconfig(FxUsbDevice *this)
{
  unsigned __int8 v2; // dl
  int v3; // ebx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+20h] [rbp-E0h] BYREF
  FxSyncRequest request; // [rsp+30h] [rbp-D0h] BYREF
  _URB_SELECT_CONFIGURATION urb; // [rsp+160h] [rbp+60h] BYREF

  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, 0LL);
  v3 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v3 >= 0 )
  {
    FxUsbDevice::PipesGotoRemoveState(this, v2);
    memset(&urb, 0, sizeof(urb));
    urb.ConfigurationDescriptor = 0LL;
    urb.Hdr.Length = 88;
    FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
    options.Timeout = 0LL;
    options.Size = 16;
    options.Flags = 4;
    v3 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v3;
}
