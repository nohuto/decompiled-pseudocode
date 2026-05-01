/*
 * XREFs of _lambda_e7a8be4bc4c1531f81954e303b61972a_::operator() @ 0x1803615C8
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x1802151D0 (_dynamic_initializer_for__g_header_init_ResultLoggingInitialize__.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 lambda_e7a8be4bc4c1531f81954e303b61972a_::operator()()
{
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[160]; // [rsp+20h] [rbp-B8h] BYREF

  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))wil::ErrorHandlingHelpers::FallbackTelemetryCallback;
  return 1LL;
}
