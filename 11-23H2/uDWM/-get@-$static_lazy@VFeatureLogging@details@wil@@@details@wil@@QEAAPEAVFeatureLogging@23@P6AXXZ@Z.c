/*
 * XREFs of ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18001E638
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18001E5C0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAA@XZ @ 0x18000B740 (--1Completer@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005CBB8 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<wil::details::FeatureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`wil::details::FeatureLogging::Instance'::`2'::wrapper;
    v9 = &qword_18014BC98;
    qword_18014BC98 = (__int64)&WindowFrameLogging::`vftable';
    qword_18014BCB0 = (__int64)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<WindowFrameLogging>::Completer::~Completer(&v6, v4, v5);
  }
  return v9;
}
