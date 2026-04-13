/*
 * XREFs of _LXp_mulx @ 0x18000E468
 * Callers:
 *     _Stoldx @ 0x18000606C (_Stoldx.c)
 *     _LDtento @ 0x18000E6C0 (_LDtento.c)
 * Callees:
 *     _LXp_addx @ 0x18000E1E8 (_LXp_addx.c)
 *     _LXp_mulh @ 0x18000E260 (_LXp_mulh.c)
 *     memcpy_0 @ 0x1800227D6 (memcpy_0.c)
 */

long double *__fastcall LXp_mulx(long double *a1, int a2, double *a3, int a4, char *Src)
{
  __int64 v5; // rbp
  __int64 v7; // rbx
  char *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp

  v5 = a4;
  v7 = a2;
  if ( a2 && a4 )
  {
    if ( *a3 == 0.0 || a3[1] == 0.0 )
    {
      LXp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[8 * a2];
      memcpy_0(Src, a1, 8LL * a2);
      LXp_mulh(a1, v7, *a3);
      v10 = v5;
      if ( v5 > 1 )
      {
        v11 = 1LL;
        do
        {
          if ( a3[v11] == 0.0 )
            break;
          memcpy_0(v9, Src, 8 * v7);
          LXp_mulh((long double *)v9, v7, a3[v11]);
          LXp_addx(a1, v7, (double *)v9, v7);
          ++v11;
        }
        while ( v11 < v10 );
      }
    }
  }
  return a1;
}
