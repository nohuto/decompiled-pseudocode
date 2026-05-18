/*
 * XREFs of sub_180089F3C @ 0x180089F3C
 * Callers:
 *     sub_18008958C @ 0x18008958C (sub_18008958C.c)
 *     sub_18008967C @ 0x18008967C (sub_18008967C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_18008ABF4 @ 0x18008ABF4 (sub_18008ABF4.c)
 */

char *__fastcall sub_180089F3C(char *a1, char *Src, char *a3, __int64 a4, __int64 a5, void *Srca, __int64 a7)
{
  char *v7; // rsi
  size_t v11; // rsi
  size_t v12; // rbx

  v7 = a3;
  if ( a4 )
  {
    if ( !a5 )
      return a1;
    if ( a4 <= a5 && a4 <= a7 )
    {
      memmove(Srca, a1, Src - a1);
      v11 = v7 - Src;
      memmove(a1, Src, v11);
      memmove(&a1[v11], Srca, Src - a1);
      return &a1[v11];
    }
    if ( a5 <= a7 )
    {
      v12 = a3 - Src;
      memmove(Srca, Src, a3 - Src);
      memmove(&v7[-(Src - a1)], a1, Src - a1);
      memmove(a1, Srca, v12);
      return &a1[v12];
    }
    if ( a1 != Src )
    {
      if ( Src == a3 )
      {
        return a1;
      }
      else
      {
        ((void (*)(void))sub_18008ABF4)();
        sub_18008ABF4(Src, v7);
        sub_18008ABF4(a1, v7);
        return &a1[(v7 - Src) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return v7;
}
