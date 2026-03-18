/*
 * XREFs of ?OnSettingsAvailable@PTPTelemetry@@SAXXZ @ 0x140158320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::OnSettingsAvailable(__int64 a1)
{
  *(_BYTE *)(W32GetUserSessionState(a1) + 12065) = 1;
}
