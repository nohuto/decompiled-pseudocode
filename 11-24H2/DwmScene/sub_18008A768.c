/*
 * XREFs of sub_18008A768 @ 0x18008A768
 * Callers:
 *     sub_180089C9C @ 0x180089C9C (sub_180089C9C.c)
 *     sub_18008A8A8 @ 0x18008A8A8 (sub_18008A8A8.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 */

char *__fastcall sub_18008A768(char *Src, char *a2)
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
        if ( COERCE_FLOAT(*(_OWORD *)v5) <= *(float *)Src )
        {
          for ( i = v5; ; v7 = i )
          {
            i -= 4;
            if ( *(float *)&v6 <= *i )
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
