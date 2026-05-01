/*
 * XREFs of ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x180486960
 * Callers:
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@1AEBU_GUID@@$$QEA_N555AEB_N65555000000005AEA_NAEAU?$atomic@_N@std@@$$QEAH7@Z @ 0x180484B98 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEBU123@AEAY07$$CBGAEBU_GUI.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ@Z @ 0x180488390 (-get@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ.c)
 */

char __fastcall TouchKeyboardTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<TouchKeyboardTelemetry>::get(
         a1,
         _lambda_1bb754991d9aec61d6443053699089ac_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
