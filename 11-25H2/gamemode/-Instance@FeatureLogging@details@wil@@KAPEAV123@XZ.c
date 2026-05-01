/*
 * XREFs of ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A91C
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800096E0 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001008 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     atexit @ 0x180002390 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct wil::details::FeatureLogging *wil::details::FeatureLogging::Instance(void)
{
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &v1, (LPVOID *)&v2) && v1 )
  {
    qword_180016B70 = 0LL;
    dword_180016B7C = 0;
    v2 = &qword_180016B68;
    qword_180016B68 = (__int64)&wil::details::FeatureLogging::`vftable';
    byte_180016B78 = 0;
    CallbackContext = &`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    qword_180016B70 = (__int64)CallbackContext;
    byte_180016B78 = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)CallbackContext);
    dword_180016B7C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180016B68 + 8))(&qword_180016B68);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &qword_180016B68);
  }
  return (struct wil::details::FeatureLogging *)v2;
}
