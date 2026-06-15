/*
 * XREFs of ?WiperFromTaper@CVolumeUnit@@IEAANNNN@Z @ 0x18004AFF8
 * Callers:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004AF44 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall CVolumeUnit::WiperFromTaper(CVolumeUnit *this, double a2, double a3, double a4)
{
  if ( a4 == a3 )
    return DOUBLE_1_0;
  else
    return (a2 - a3) / (a4 - a3);
}
