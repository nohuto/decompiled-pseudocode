/*
 * XREFs of sub_180054160 @ 0x180054160
 * Callers:
 *     sub_1800567F0 @ 0x1800567F0 (sub_1800567F0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18001D79C @ 0x18001D79C (sub_18001D79C.c)
 *     sub_18001E360 @ 0x18001E360 (sub_18001E360.c)
 *     sub_180025D94 @ 0x180025D94 (sub_180025D94.c)
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_180054848 @ 0x180054848 (sub_180054848.c)
 */

char __fastcall sub_180054160(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 i; // rbp
  __int64 v11; // rax

  v3 = *a1;
  v4 = a3;
  if ( a3 > (a1[2] - *a1) >> 5 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFLL )
      sub_180013178();
    v7 = sub_18001E360(a1, a3);
    if ( v3 )
    {
      sub_18001D79C(v3, a1[1]);
      sub_180010134((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_180025D94(a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = (v8 - v3) >> 5;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_180030580(v3, a2);
      v8 = a1[1];
      v3 += 32LL;
      a2 += 32LL;
    }
    v4 -= v9;
LABEL_14:
    v11 = sub_180054848(a2, v4, v8, a1);
    a1[1] = v11;
    return v11;
  }
  for ( i = v3 + 32 * v4; v4; --v4 )
  {
    sub_180030580(v3, a2);
    v3 += 32LL;
    a2 += 32LL;
  }
  LOBYTE(v11) = sub_18001D79C(i, a1[1]);
  a1[1] = i;
  return v11;
}
