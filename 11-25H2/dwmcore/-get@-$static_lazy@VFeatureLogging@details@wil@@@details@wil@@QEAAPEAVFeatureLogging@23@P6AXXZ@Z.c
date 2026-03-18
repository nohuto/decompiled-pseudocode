/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180238F94
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800C8F00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x18025F9A0 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ @ 0x1801D94B8 (--1Completer@-$static_lazy@VCompositorTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18025C2D4 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
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
    qword_1804062A8 = 0LL;
    dword_1804062B4 = 0;
    v10 = &qword_1804062A0;
    qword_1804062A0 = (__int64)&CompositorTracing::`vftable';
    v6 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    byte_1804062B0 = 0;
    qword_1804062B8 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
