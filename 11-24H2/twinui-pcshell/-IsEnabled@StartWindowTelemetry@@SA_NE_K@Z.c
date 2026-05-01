/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x1801BE8EC
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1801BE4DC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801DB3E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x1801BEA3C (-get@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z.c)
 */

char __fastcall StartWindowTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<StartWindowTelemetry>::get(
         a1,
         _lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
