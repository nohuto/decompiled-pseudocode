/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180065B58
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x180065C8C (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4
  __int64 v2; // r8

  result = FLOAT_1_0;
  if ( CAccent::_AnyTransparentBackground(this) )
    return (float)*(unsigned __int8 *)(v2 + 315) / 255.0;
  return result;
}
