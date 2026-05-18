/*
 * XREFs of sub_18001D698 @ 0x18001D698
 * Callers:
 *     sub_18001DFF8 @ 0x18001DFF8 (sub_18001DFF8.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18001A81C @ 0x18001A81C (sub_18001A81C.c)
 *     sub_18001E324 @ 0x18001E324 (sub_18001E324.c)
 */

char *__fastcall sub_18001D698(__int64 *a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  __int64 v7; // rbx
  __int64 v8; // r10
  size_t v9; // rbx
  unsigned __int64 v10; // rbp
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v10 = (a1[1] - (__int64)v3) >> 2;
    if ( a3 <= v10 )
    {
      v9 = 4 * a3;
    }
    else
    {
      memmove(v3, a2, 4 * v10);
      v3 = (char *)a1[1];
      a2 = &v5[4 * v10];
      v9 = 4 * (a3 - v10);
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      sub_180013178();
    v7 = sub_18001E324(a1, a3);
    if ( v3 )
    {
      sub_180010134(v3, 4 * v8);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_18001A81C(a1, v7);
    v3 = (char *)*a1;
    v9 = 4 * a3;
    a2 = v5;
  }
  memmove(v3, a2, v9);
  result = &v3[v9];
  a1[1] = (__int64)&v3[v9];
  return result;
}
