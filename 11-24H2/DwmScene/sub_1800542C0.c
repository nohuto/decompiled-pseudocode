/*
 * XREFs of sub_1800542C0 @ 0x1800542C0
 * Callers:
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18001D8FC @ 0x18001D8FC (sub_18001D8FC.c)
 *     sub_18001E4C0 @ 0x18001E4C0 (sub_18001E4C0.c)
 *     sub_180025EF4 @ 0x180025EF4 (sub_180025EF4.c)
 *     sub_1800306E0 @ 0x1800306E0 (sub_1800306E0.c)
 *     sub_1800549A8 @ 0x1800549A8 (sub_1800549A8.c)
 */

char __fastcall sub_1800542C0(__int64 *a1, __int64 a2, unsigned __int64 a3)
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
      sub_180013278();
    v7 = sub_18001E4C0(a1, a3);
    if ( v3 )
    {
      sub_18001D8FC(v3, a1[1]);
      sub_180010234((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_180025EF4(a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = (v8 - v3) >> 5;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_1800306E0(v3, a2);
      v8 = a1[1];
      v3 += 32LL;
      a2 += 32LL;
    }
    v4 -= v9;
LABEL_14:
    v11 = sub_1800549A8(a2, v4, v8, a1);
    a1[1] = v11;
    return v11;
  }
  for ( i = v3 + 32 * v4; v4; --v4 )
  {
    sub_1800306E0(v3, a2);
    v3 += 32LL;
    a2 += 32LL;
  }
  LOBYTE(v11) = sub_18001D8FC(i, a1[1]);
  a1[1] = i;
  return v11;
}
