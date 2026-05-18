/*
 * XREFs of sub_180016784 @ 0x180016784
 * Callers:
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001A8DC @ 0x18001A8DC (sub_18001A8DC.c)
 */

char *__fastcall sub_180016784(void **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  size_t v10; // rbx
  unsigned __int64 v11; // rsi
  char *v12; // rdx
  char *result; // rax

  v3 = (char *)*a1;
  v7 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  if ( a3 > v7 )
  {
    v8 = 0x3FFFFFFFFFFFFFFFLL;
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v9 = v7 >> 1;
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v9 + v7;
      if ( v9 + v7 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      sub_180010234(v3, 4 * v7);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_18001A8DC(a1, v8);
    v3 = (char *)*a1;
    v10 = 4 * a3;
    goto LABEL_13;
  }
  v11 = ((_BYTE *)a1[1] - v3) >> 2;
  if ( a3 <= v11 )
  {
    v10 = 4 * a3;
LABEL_13:
    v12 = a2;
    goto LABEL_14;
  }
  memmove(*a1, a2, 4 * v11);
  v3 = (char *)a1[1];
  v12 = &a2[4 * v11];
  v10 = 4 * (a3 - v11);
LABEL_14:
  memmove(v3, v12, v10);
  result = &v3[v10];
  a1[1] = &v3[v10];
  return result;
}
