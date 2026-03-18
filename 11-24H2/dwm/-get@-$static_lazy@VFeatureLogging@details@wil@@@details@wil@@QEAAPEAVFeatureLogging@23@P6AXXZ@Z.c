/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x14000B62C
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1400075D0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x140009478 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     atexit @ 0x140004C14 (atexit.c)
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x140006BD0 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_14001C380 = 0LL;
    dword_14001C38C = 0;
    v8 = &qword_14001C378;
    qword_14001C378 = (__int64)&wil::details::FeatureLogging::`vftable';
    v4 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    byte_14001C388 = 0;
    qword_14001C390 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
