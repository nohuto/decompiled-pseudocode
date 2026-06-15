/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__ @ 0x140002B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_WilInitialize_ResultMacros_DesktopOrSystem__())(wil::details *__hidden this)
{
  unsigned __int8 (__fastcall *result)(wil::details *__hidden); // rax

  wil::details::g_pfnRtlNtStatusToDosErrorNoTeb = (__int64)wil::details::RtlNtStatusToDosErrorNoTeb;
  result = wil::details::RtlDllShutdownInProgress;
  wil::details::g_pfnDllShutdownInProgress = (__int64)wil::details::RtlDllShutdownInProgress;
  return result;
}
