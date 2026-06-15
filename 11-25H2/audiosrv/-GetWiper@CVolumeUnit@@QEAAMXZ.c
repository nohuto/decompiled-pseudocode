/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180052294
 * Callers:
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180051CB0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180052160 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x180052220 (-FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x18010D3D0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     pow @ 0x1800A8B64 (pow.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  double v2; // xmm0_8
  double v3; // xmm2_8
  double v4; // xmm7_8

  v2 = pow(10.0, *((float *)this + 1) / 20.0);
  v3 = v2;
  v4 = *((double *)this + 4);
  if ( *(_DWORD *)this == 1 )
  {
    if ( v2 > 1.0 )
    {
      v3 = 2.0 - pow(v2, -1.0 / *((double *)this + 7));
      return fmax(0.0, fmin(1.0, (v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3))));
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return fmax(0.0, fmin(1.0, (v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3))));
    v2 = v2 / *((double *)this + 5);
  }
  v3 = pow(v2, 1.0 / *((double *)this + 7));
  return fmax(0.0, fmin(1.0, (v3 - *((double *)this + 3)) / (v4 - *((double *)this + 3))));
}
