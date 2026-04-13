/*
 * XREFs of _LXp_addx @ 0x18000E1E8
 * Callers:
 *     _Stoldx @ 0x18000606C (_Stoldx.c)
 *     _LXp_mulx @ 0x18000E468 (_LXp_mulx.c)
 * Callees:
 *     _LXp_addh @ 0x18000DE84 (_LXp_addh.c)
 */

long double *__fastcall LXp_addx(long double *a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    LXp_addh(a1, a2, *a3);
    ++i;
  }
  return a1;
}
