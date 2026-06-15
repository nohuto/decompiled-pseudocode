/*
 * XREFs of ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x18014E9B4
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18014EA78 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18011410C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18014EAEC (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18014EB38 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall NUIAudioTracing::NuiAudioTrace<char (&)[512]>(char *a1)
{
  wil::TraceLoggingProvider *v2; // rax
  __int64 v3; // rcx
  NUIAudioTracing *v4; // rcx

  v2 = (wil::TraceLoggingProvider *)wil::details::static_lazy<NUIAudioTracing>::get(
                                      a1,
                                      _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v2, 0, 0LL) )
  {
    wil::details::static_lazy<NUIAudioTracing>::get(
      v3,
      _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
    NUIAudioTracing::NuiAudioTrace_(v4, a1);
  }
}
