/*
 * XREFs of ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1400040A0
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1400053DC (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x140003F80 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1400041A8 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140004208 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140004CA4 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x140007730 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x140031C30 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x140071AB8 (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

__int64 __fastcall FxUsbPipe::Reset(FxUsbPipe *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int v3; // edi
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
  v3 = FxUsbPipe::FormatResetRequest(this, request.m_TrueRequest);
  if ( v3 >= 0 )
  {
    m_Reader = this->m_Reader;
    if ( m_Reader )
      FxUsbPipeContinuousReader::CancelRepeaters(m_Reader);
    else
      FxIoTarget::CancelSentIo(this);
    Options.Timeout = 0LL;
    Options.Size = 16;
    Options.Flags = 4;
    v3 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &Options, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(&context);
  return (unsigned int)v3;
}
