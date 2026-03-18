/*
 * XREFs of ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x140043458
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140043260 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 */

unsigned __int8 __fastcall WDFDEVICE_INIT::ShouldCreateSecure(WDFDEVICE_INIT *this)
{
  if ( this->Security.DeviceClassSet || this->Security.Sddl )
    return 1;
  if ( this->DeviceName || (this->Characteristics & 0x80u) != 0 )
  {
    if ( this->InitType != FxDeviceInitTypePdo )
      return 1;
    WPP_IFR_SF_q(this->DriverGlobals, 3u, 0x12u, 0xDu, WPP_FxDeviceInit_cpp_Traceguids, this->Driver);
  }
  return 0;
}
