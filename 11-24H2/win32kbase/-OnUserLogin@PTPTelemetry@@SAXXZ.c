/*
 * XREFs of ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140142770
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1401427CC (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 */

void __fastcall PTPTelemetry::OnUserLogin(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  *(_BYTE *)(W32GetUserSessionState(a1) + 12065) = 1;
  if ( PTPTelemetry::ShouldPtpSettingFire() )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    if ( *(_BYTE *)(W32GetUserSessionState(v1) + 12066) )
      *(_BYTE *)(W32GetUserSessionState(v2) + 12064) = 1;
  }
}
