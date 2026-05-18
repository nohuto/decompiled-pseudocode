/*
 * XREFs of sub_18008A3D8 @ 0x18008A3D8
 * Callers:
 *     sub_180089A4C @ 0x180089A4C (sub_180089A4C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 */

void *__fastcall sub_18008A3D8(char *Src, _OWORD *a2, float *a3, float *a4)
{
  __int64 v4; // rbx
  float *v8; // rdi
  char *v9; // r8
  float *v10; // rax
  _OWORD *v11; // rbp
  float *v12; // rsi
  char *v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm6
  size_t v17; // r14
  void *result; // rax

  v4 = (char *)a2 - Src;
  v8 = a4;
  memmove(a4, Src, (char *)a2 - Src);
  v9 = (char *)v8 + v4;
  v10 = (float *)((char *)v8 + v4 - 16);
  *(_OWORD *)Src = *a2;
  v11 = Src + 16;
  v12 = (float *)(a2 + 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = (char *)(v11 + 1);
      if ( *v12 > *v8 )
        break;
      v15 = *(_OWORD *)v8;
      v8 += 4;
      *v11++ = v15;
      if ( v8 == v10 )
      {
        v16 = *(_OWORD *)v10;
        v17 = (char *)a3 - (char *)v12;
        result = memmove(v13, v12, v17);
        *(_OWORD *)&v13[v17] = v16;
        return result;
      }
    }
    v14 = *(_OWORD *)v12;
    v12 += 4;
    *v11 = v14;
    if ( v12 == a3 )
      break;
    ++v11;
  }
  return memmove(v11 + 1, v8, v9 - (char *)v8);
}
