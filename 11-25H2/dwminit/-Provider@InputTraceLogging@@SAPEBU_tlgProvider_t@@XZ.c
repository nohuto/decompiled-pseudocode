/*
 * XREFs of ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18000FD3C
 * Callers:
 *     ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18000FAE4 (-EnterWait@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x18000FB54 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18001028C (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180010590 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     atexit @ 0x180002574 (atexit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct _tlgProvider_t *InputTraceLogging::Provider(void)
{
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v1, (LPVOID *)&v2) && v1 )
  {
    qword_18001D6C8 = 0LL;
    dword_18001D6D4 = 0;
    v2 = &qword_18001D6C0;
    qword_18001D6C0 = (__int64)&wil::details::FeatureLogging::`vftable';
    byte_18001D6D0 = 0;
    CallbackContext = &`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    qword_18001D6C8 = (__int64)CallbackContext;
    byte_18001D6D0 = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)CallbackContext);
    dword_18001D6D4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18001D6C0 + 8))(&qword_18001D6C0);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_18001D6C0);
  }
  return (const struct _tlgProvider_t *)v2[1];
}
