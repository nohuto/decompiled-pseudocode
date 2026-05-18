/*
 * XREFs of sub_18008A804 @ 0x18008A804
 * Callers:
 *     sub_180089DEC @ 0x180089DEC (sub_180089DEC.c)
 *     sub_18008A9A0 @ 0x18008A9A0 (sub_18008A9A0.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 */

char *__fastcall sub_18008A804(char *Src, char *a2)
{
  char *v4; // rbp
  float *v5; // rbx
  __int128 v6; // xmm6
  float *v7; // rcx
  float *i; // rax

  if ( Src != a2 )
  {
    v4 = Src + 16;
    v5 = (float *)(Src + 16);
    if ( Src + 16 != a2 )
    {
      do
      {
        v6 = *(_OWORD *)v5;
        v7 = v5;
        if ( *(float *)Src <= COERCE_FLOAT(*(_OWORD *)v5) )
        {
          for ( i = v5; ; v7 = i )
          {
            i -= 4;
            if ( *i <= *(float *)&v6 )
              break;
            *(_OWORD *)v7 = *(_OWORD *)i;
          }
          *(_OWORD *)v7 = v6;
        }
        else
        {
          memmove(v4, Src, (char *)v5 - Src);
          *(_OWORD *)Src = v6;
        }
        v5 += 4;
      }
      while ( v5 != (float *)a2 );
    }
  }
  return a2;
}
