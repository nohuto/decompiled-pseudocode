/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18007B7BC
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18007B340 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x18009F474 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180076304 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009B974 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v10) && v8 )
  {
    qword_180129C00 = 0LL;
    dword_180129C0C = 0;
    v10 = &qword_180129BF8;
    qword_180129BF8 = (__int64)&WindowFrameLogging::`vftable';
    v6 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    byte_180129C08 = 0;
    qword_180129C10 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v6, v4, v5);
  }
  return v10;
}
