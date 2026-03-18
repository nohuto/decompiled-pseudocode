/*
 * XREFs of ?Reset@FxUsbPipe@@QEAAJXZ @ 0x14004D148
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140006D40 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x14004CD5C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x14004D250 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14004D2B0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x14004F110 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxUsbPipe::Reset(FxUsbPipe *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int64 v3; // rdx
  int v4; // edi
  unsigned __int8 v5; // r8
  FxUsbPipeContinuousReader *m_Reader; // rcx
  _WDF_REQUEST_SEND_OPTIONS Options; // [rsp+20h] [rbp-E0h] BYREF
  FxSyncRequest request; // [rsp+30h] [rbp-D0h] BYREF
  FxUsbPipeRequestContext context; // [rsp+160h] [rbp+60h] BYREF

  FxUsbRequestContext::FxUsbRequestContext(&context, 0x12u);
  m_Globals = this->m_Globals;
  context.m_USBDHandle = 0LL;
  context.__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  context.m_Urb = &context.m_UrbLegacy;
  FxSyncRequest::FxSyncRequest(&request, m_Globals, &context, 0LL);
  v4 = FxUsbPipe::FormatResetRequest(this, request.m_TrueRequest);
  if ( v4 >= 0 )
  {
    m_Reader = this->m_Reader;
    if ( m_Reader )
      FxUsbPipeContinuousReader::CancelRepeaters(m_Reader);
    else
      FxIoTarget::CancelSentIo(this, v3, v5);
    Options.Timeout = 0LL;
    Options.Size = 16;
    Options.Flags = 4;
    v4 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &Options, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v4;
}
