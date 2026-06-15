/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E578
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E314 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180086720 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180114FA0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1801152A0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18004E61C (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     _o_log10_0 @ 0x1800A4E48 (_o_log10_0.c)
 *     pow @ 0x1800A4E54 (pow.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm6_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  __int64 result; // rax

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = CVolumeUnit::ScalarFromTaper(this, (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3));
  if ( pow(10.0, -9.6) <= v3 )
    v4 = o_log10_0(v3) * 20.0;
  else
    v4 = DOUBLE_N192_0;
  v5 = v4;
  result = 0LL;
  *((float *)this + 1) = fminf(v5, *((float *)this + 5));
  return result;
}
