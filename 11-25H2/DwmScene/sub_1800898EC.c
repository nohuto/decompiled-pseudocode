/*
 * XREFs of sub_1800898EC @ 0x1800898EC
 * Callers:
 *     sub_18008942C @ 0x18008942C (sub_18008942C.c)
 *     sub_18008A748 @ 0x18008A748 (sub_18008A748.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_18008960C @ 0x18008960C (sub_18008960C.c)
 *     sub_18008A278 @ 0x18008A278 (sub_18008A278.c)
 *     sub_18008A438 @ 0x18008A438 (sub_18008A438.c)
 */

void __fastcall sub_1800898EC(char *a1, char *a2, float *a3, __int64 a4, __int64 a5, void *a6, __int64 a7, char a8)
{
  float *v8; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v13; // xmm6
  size_t v14; // rdi
  __int128 v15; // xmm6

  if ( a2 != (char *)a3 )
  {
    v8 = a3;
    while ( a1 != a2 )
    {
      if ( *(float *)a2 > *(float *)a1 )
      {
        do
        {
          v11 = (__int64)v8;
          v12 = a5;
          v8 -= 4;
          --a5;
          if ( a2 == (char *)v8 )
          {
            v15 = *(_OWORD *)a2;
            memmove((char *)v8 - (a2 - a1) + 16, a1, a2 - a1);
            *(_OWORD *)a1 = v15;
            return;
          }
        }
        while ( *v8 <= *((float *)a2 - 4) );
        if ( a4 == 1 )
        {
          v13 = *(_OWORD *)a1;
          v14 = v11 - (_QWORD)a2;
          memmove(a1, a2, v14);
          *(_OWORD *)&a1[v14] = v13;
        }
        else if ( a4 > v12 || a4 > a7 )
        {
          if ( v12 > a7 )
            sub_18008960C((float *)a1, (float *)a2, v11, a4, v12, a6, a7, a8);
          else
            sub_18008A438(a1);
        }
        else
        {
          sub_18008A278(a1);
        }
        return;
      }
      a1 += 16;
      --a4;
    }
  }
}
