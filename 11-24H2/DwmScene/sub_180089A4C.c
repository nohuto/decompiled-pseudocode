/*
 * XREFs of sub_180089A4C @ 0x180089A4C
 * Callers:
 *     sub_18008958C @ 0x18008958C (sub_18008958C.c)
 *     sub_18008A8A8 @ 0x18008A8A8 (sub_18008A8A8.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_18008976C @ 0x18008976C (sub_18008976C.c)
 *     sub_18008A3D8 @ 0x18008A3D8 (sub_18008A3D8.c)
 *     sub_18008A598 @ 0x18008A598 (sub_18008A598.c)
 */

void __fastcall sub_180089A4C(char *a1, char *a2, float *a3, __int64 a4, __int64 a5, void *a6, __int64 a7, char a8)
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
            sub_18008976C((float *)a1, (float *)a2, v11, a4, v12, a6, a7, a8);
          else
            sub_18008A598(a1);
        }
        else
        {
          sub_18008A3D8(a1);
        }
        return;
      }
      a1 += 16;
      --a4;
    }
  }
}
