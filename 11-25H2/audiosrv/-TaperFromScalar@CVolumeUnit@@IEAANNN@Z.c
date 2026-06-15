/*
 * XREFs of ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18005249C
 * Callers:
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180051A98 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18010D938 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 * Callees:
 *     pow @ 0x1800A8B64 (pow.c)
 */

double __fastcall CVolumeUnit::TaperFromScalar(CVolumeUnit *this, double a2, double a3)
{
  double v4; // xmm1_8
  double v5; // xmm0_8

  if ( *(_DWORD *)this == 1 )
  {
    v4 = DOUBLE_1_0;
    v5 = a2;
    if ( a2 > 1.0 )
      return 2.0 - pow(a2, -1.0 / *((double *)this + 7));
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
      return a2;
    v4 = DOUBLE_1_0;
    v5 = a2 / a3;
  }
  return pow(v5, v4 / *((double *)this + 7));
}
