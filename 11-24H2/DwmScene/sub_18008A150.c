/*
 * XREFs of sub_18008A150 @ 0x18008A150
 * Callers:
 *     sub_180089DEC @ 0x180089DEC (sub_180089DEC.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 */

void *__fastcall sub_18008A150(float *Src, __int64 a2, char *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v9; // r12
  __int64 v10; // rbp
  float *v11; // rbx
  __int64 v12; // rax
  float *v13; // rdx
  float *v14; // r15
  char *v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  size_t v18; // rbx

  v5 = a5;
  if ( a4 < a5 )
  {
    v9 = 2 * a4;
    do
    {
      v10 = v5 - a4;
      v11 = &Src[2 * v9];
      v12 = v10;
      v13 = v11;
      if ( v10 >= a4 )
        v12 = a4;
      v5 = v10 - v12;
      v14 = &Src[4 * v12 + 4 * a4];
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = a3 + 16;
          if ( *Src > *v13 )
            break;
          v17 = *(_OWORD *)Src;
          Src += 4;
          *(_OWORD *)a3 = v17;
          a3 += 16;
          if ( Src == v11 )
          {
            v18 = (char *)v14 - (char *)v13;
            goto LABEL_11;
          }
        }
        v16 = *(_OWORD *)v13;
        v13 += 4;
        *(_OWORD *)a3 = v16;
        if ( v13 == v14 )
          break;
        a3 += 16;
      }
      v18 = (char *)v11 - (char *)Src;
      v13 = Src;
LABEL_11:
      memmove(v15, v13, v18);
      a3 = &v15[v18];
      Src = v14;
    }
    while ( a4 < v5 );
  }
  return memmove(a3, Src, a2 - (_QWORD)Src);
}
