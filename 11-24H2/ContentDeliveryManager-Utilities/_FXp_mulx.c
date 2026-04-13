/*
 * XREFs of _FXp_mulx @ 0x18000CC44
 * Callers:
 *     _Stofx @ 0x180004E90 (_Stofx.c)
 *     _FDtento @ 0x18000CE90 (_FDtento.c)
 * Callees:
 *     _FXp_addx @ 0x18000C920 (_FXp_addx.c)
 *     _FXp_mulh @ 0x18000CA44 (_FXp_mulh.c)
 *     memcpy_0 @ 0x1800227E6 (memcpy_0.c)
 */

float *__fastcall FXp_mulx(float *a1, int a2, float *a3, int a4, char *Src)
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
      FXp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[4 * a2];
      memcpy_0(Src, a1, 4LL * a2);
      FXp_mulh(a1, v7, *a3);
      v10 = v5;
      if ( v5 > 1 )
      {
        v11 = 1LL;
        do
        {
          if ( a3[v11] == 0.0 )
            break;
          memcpy_0(v9, Src, 4 * v7);
          FXp_mulh((float *)v9, v7, a3[v11]);
          FXp_addx(a1, v7, (float *)v9, v7);
          ++v11;
        }
        while ( v11 < v10 );
      }
    }
  }
  return a1;
}
