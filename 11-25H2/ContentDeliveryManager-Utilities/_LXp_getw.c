/*
 * XREFs of _LXp_getw @ 0x18000D6EC
 * Callers:
 *     _Dtento @ 0x18000DC00 (_Dtento.c)
 *     _LDtento @ 0x18000E6C0 (_LDtento.c)
 * Callees:
 *     <none>
 */

double __fastcall LXp_getw(double *a1, int a2)
{
  double v3; // xmm3_8
  double v4; // xmm2_8
  double v5; // xmm4_8
  double v6; // xmm0_8

  if ( !a2 )
    return 0.0;
  if ( a2 == 1 )
    return *a1;
  v3 = *a1;
  if ( *a1 == 0.0 )
    return *a1;
  v4 = a1[1];
  if ( v4 == 0.0 )
    return *a1;
  if ( a2 != 2 && a1[2] != 0.0 )
  {
    v5 = v4 + v3;
    if ( a1[3] != 0.0 )
      *((_WORD *)a1 + 8) |= 1u;
    v6 = a1[2];
    if ( v5 - v3 == v4 )
      return v6 + v5;
    v4 = v4 + v6;
  }
  return v4 + v3;
}
