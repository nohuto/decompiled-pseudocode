/*
 * XREFs of ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x14003DF70
 * Callers:
 *     ?Provider@AudioProcessingObjectTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x14003DF50 (-Provider@AudioProcessingObjectTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14004639C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x140059194 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(
         &`AudioProcessingObjectTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    qword_1400C45A0 = 0LL;
    dword_1400C45AC = 0;
    v8 = &qword_1400C4598;
    qword_1400C4598 = (__int64)&AudioDgTelemetryProvider::`vftable';
    v4 = &`AudioProcessingObjectTelemetryProvider::Instance'::`2'::wrapper;
    byte_1400C45A8 = 0;
    qword_1400C45B0 = (__int64)&`AudioProcessingObjectTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v4);
  }
  return v8;
}
