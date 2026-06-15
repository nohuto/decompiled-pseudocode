/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004AF44
 * Callers:
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x18004AE10 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x18004AED0 (-FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180085840 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180086208 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180086720 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180114FA0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?WiperFromTaper@CVolumeUnit@@IEAANNNN@Z @ 0x18004AFF8 (-WiperFromTaper@CVolumeUnit@@IEAANNNN@Z.c)
 *     pow @ 0x1800A4E54 (pow.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  CVolumeUnit *v2; // rcx
  double v3; // xmm0_8
  double v4; // xmm4_8

  v3 = pow(10.0, *((float *)this + 1) / 20.0);
  v4 = v3;
  if ( *(_DWORD *)this == 1 )
  {
    if ( v3 > 1.0 )
    {
      v4 = 2.0 - pow(v3, -1.0 / *((double *)this + 7));
      return fmax(0.0, fmin(1.0, CVolumeUnit::WiperFromTaper(v2, v4, *((double *)this + 3), *((double *)this + 4))));
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return fmax(0.0, fmin(1.0, CVolumeUnit::WiperFromTaper(v2, v4, *((double *)this + 3), *((double *)this + 4))));
    v3 = v3 / *((double *)this + 5);
  }
  v4 = pow(v3, 1.0 / *((double *)this + 7));
  return fmax(0.0, fmin(1.0, CVolumeUnit::WiperFromTaper(v2, v4, *((double *)this + 3), *((double *)this + 4))));
}
