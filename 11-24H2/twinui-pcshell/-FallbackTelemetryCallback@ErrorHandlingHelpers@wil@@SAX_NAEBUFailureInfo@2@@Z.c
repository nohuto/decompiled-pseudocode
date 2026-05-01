/*
 * XREFs of ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x1801B9330
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VErrorHandlingHelpers@wil@@@details@wil@@QEAAPEAVErrorHandlingHelpers@3@P6AXXZ@Z @ 0x1801B9374 (-get@-$static_lazy@VErrorHandlingHelpers@wil@@@details@wil@@QEAAPEAVErrorHandlingHelpers@3@P6AXX.c)
 */

void __fastcall wil::ErrorHandlingHelpers::FallbackTelemetryCallback(__int64 a1, const struct wil::FailureInfo *a2)
{
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rdx

  v3 = a1;
  v4 = wil::details::static_lazy<wil::ErrorHandlingHelpers>::get(
         a1,
         _lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
  LOBYTE(v5) = v3;
  (*(void (__fastcall **)(__int64, __int64, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL))(v4, v5, a2);
}
