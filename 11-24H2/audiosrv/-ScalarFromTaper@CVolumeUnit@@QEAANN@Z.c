/*
 * XREFs of ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18004E61C
 * Callers:
 *     ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x18004E444 (-CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E578 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1801155B8 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     pow @ 0x1800A4E54 (pow.c)
 */

double __fastcall CVolumeUnit::ScalarFromTaper(CVolumeUnit *this, double a2)
{
  double v2; // xmm2_8
  double v3; // xmm1_8

  v2 = a2;
  if ( *(_DWORD *)this == 1 )
  {
    v3 = *((double *)this + 7);
    if ( v2 > 1.0 )
    {
      *(_QWORD *)&v3 ^= _xmm;
      v2 = 2.0 - v2;
    }
    return pow(v2, v3);
  }
  else if ( *(_DWORD *)this == 2 )
  {
    return pow(a2, *((double *)this + 7)) * *((double *)this + 5);
  }
  return v2;
}
