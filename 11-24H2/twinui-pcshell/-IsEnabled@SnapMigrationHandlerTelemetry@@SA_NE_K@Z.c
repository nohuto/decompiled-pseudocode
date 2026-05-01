/*
 * XREFs of ?IsEnabled@SnapMigrationHandlerTelemetry@@SA_NE_K@Z @ 0x1805B6074
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B60C0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x1805B6708 (-get@-$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTel.c)
 */

char __fastcall SnapMigrationHandlerTelemetry::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<SnapMigrationHandlerTelemetry>::get(
         a1,
         _lambda_09eb35d4d8d12ef89a70d65a1032a73e_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
