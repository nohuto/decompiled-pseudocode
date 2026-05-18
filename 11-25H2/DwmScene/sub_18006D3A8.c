/*
 * XREFs of sub_18006D3A8 @ 0x18006D3A8
 * Callers:
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18006D534 @ 0x18006D534 (sub_18006D534.c)
 *     sub_18006D574 @ 0x18006D574 (sub_18006D574.c)
 */

char *__fastcall sub_18006D3A8(char **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  __int64 v7; // rbx
  __int64 v8; // r10
  size_t v9; // rbx
  unsigned __int64 v10; // rbp
  char *result; // rax

  v3 = *a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 3 )
  {
    v10 = (a1[1] - v3) >> 3;
    if ( a3 <= v10 )
    {
      v9 = 8 * a3;
    }
    else
    {
      memmove(v3, a2, 8 * v10);
      v3 = a1[1];
      a2 = &v5[8 * v10];
      v9 = 8 * (a3 - v10);
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      sub_180013178();
    v7 = sub_18006D574(a1, a3);
    if ( v3 )
    {
      sub_180010134(v3, 8 * v8);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_18006D534(a1, v7);
    v3 = *a1;
    v9 = 8 * a3;
    a2 = v5;
  }
  memmove(v3, a2, v9);
  result = &v3[v9];
  a1[1] = &v3[v9];
  return result;
}
