/*
 * XREFs of ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1401427CC
 * Callers:
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140142770 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x14020E0D4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall PTPTelemetry::ShouldPtpSettingFire(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( !*(_BYTE *)(W32GetUserSessionState(a1) + 12064) )
    return *(_BYTE *)(W32GetUserSessionState(v1) + 12065) != 0;
  return v2;
}
