/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18000C500
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18000C790 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     atexit @ 0x1800A7F5C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AE2AC (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOWrapperClient::IsInputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  unsigned int IsAudioFormatSupported; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-158h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-150h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+40h] [rbp-148h] BYREF
  int v13; // [rsp+48h] [rbp-140h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-138h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v12 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801CF7B0;
    qword_1801CF7B0 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801CF7B8 = 0LL;
    byte_1801CF7C0 = 0;
    dword_1801CF7C4 = 0;
    qword_1801CF7C8 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v12);
  }
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)Context + 1),
    "SystemEffect_IsInputFormatSupported",
    (const char *const)this + 124);
  IsAudioFormatSupported = CAPOWrapperClient::IsAudioFormatSupported((char *)this - 8, 0LL, a2, a3, a4);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return IsAudioFormatSupported;
}
