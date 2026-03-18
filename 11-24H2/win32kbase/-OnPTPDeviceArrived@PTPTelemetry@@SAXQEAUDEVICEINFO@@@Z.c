/*
 * XREFs of ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x14020E0D4
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x14020F4F0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x1401427CC (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 */

void __fastcall PTPTelemetry::OnPTPDeviceArrived(struct DEVICEINFO *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( PTPTelemetry::ShouldPtpSettingFire((__int64)a1) )
  {
    PTPTelemetry::PTPConfigUpdateEx(a1);
    if ( *(_BYTE *)(W32GetUserSessionState(v2) + 12066) )
      *(_BYTE *)(W32GetUserSessionState(v3) + 12064) = 1;
  }
}
