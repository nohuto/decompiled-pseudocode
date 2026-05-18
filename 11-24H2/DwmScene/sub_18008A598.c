/*
 * XREFs of sub_18008A598 @ 0x18008A598
 * Callers:
 *     sub_180089A4C @ 0x180089A4C (sub_180089A4C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 */

void *__fastcall sub_18008A598(float *Src, char *a2, __int64 a3, float *a4)
{
  __int64 v5; // rbx
  __int128 v9; // xmm0
  _OWORD *v10; // rdi
  float *v11; // r8
  float *v12; // rsi
  __int128 v13; // xmm0
  _OWORD *v14; // rdi
  void *result; // rax
  _OWORD *v16; // rdi

  v5 = a3 - (_QWORD)a2;
  memmove(a4, a2, a3 - (_QWORD)a2);
  v9 = *((_OWORD *)a2 - 1);
  v10 = (_OWORD *)(a3 - 16);
  v11 = (float *)((char *)a4 + v5 - 16);
  v12 = (float *)(a2 - 32);
  *v10 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      --v10;
      if ( *v11 > *v12 )
        break;
      v13 = *(_OWORD *)v11;
      v11 -= 4;
      *v10 = v13;
      if ( a4 == v11 )
      {
        v14 = v10 - 1;
        *v14 = *(_OWORD *)v12;
        result = memmove((char *)v14 - ((char *)v12 - (char *)Src), Src, (char *)v12 - (char *)Src);
        *(_OWORD *)Src = *(_OWORD *)a4;
        return result;
      }
    }
    *v10 = *(_OWORD *)v12;
    if ( Src == v12 )
      break;
    v12 -= 4;
  }
  v16 = v10 - 1;
  *v16 = *(_OWORD *)v11;
  return memmove((char *)v16 - ((char *)v11 - (char *)a4), a4, (char *)v11 - (char *)a4);
}
