/*
 * XREFs of _lambda_37662d109df7bf1399c2ed68bd4c11ee_::operator() @ 0x18058B9F0
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__ @ 0x180013440 (_dynamic_initializer_for__g_header_init_ResultStowedExceptionInitialize__.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 lambda_37662d109df7bf1399c2ed68bd4c11ee_::operator()()
{
  const struct wil::FailureInfo *v1; // rdx
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[168]; // [rsp+20h] [rbp-A8h] BYREF

  if ( wil::details::g_pfnOriginateCallback
    && (char *)wil::details::g_pfnOriginateCallback != (char *)wil::details::RaiseRoOriginateOnWilExceptions )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v1);
  }
  wil::details::g_pfnOriginateCallback = (__int64 (__fastcall *)(_QWORD))wil::details::RaiseRoOriginateOnWilExceptions;
  if ( wil::details::g_pfnFailfastWithContextCallback
    && (char *)wil::details::g_pfnFailfastWithContextCallback != (char *)wil::details::FailfastWithContextCallback )
  {
    memset_0(v3, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnFailfastWithContextCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))wil::details::FailfastWithContextCallback;
  return 1LL;
}
