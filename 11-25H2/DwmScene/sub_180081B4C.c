/*
 * XREFs of sub_180081B4C @ 0x180081B4C
 * Callers:
 *     sub_180082044 @ 0x180082044 (sub_180082044.c)
 * Callees:
 *     sub_180073C8C @ 0x180073C8C (sub_180073C8C.c)
 *     sub_180081C48 @ 0x180081C48 (sub_180081C48.c)
 *     sub_180081ED0 @ 0x180081ED0 (sub_180081ED0.c)
 *     sub_1800824B8 @ 0x1800824B8 (sub_1800824B8.c)
 */

char __fastcall sub_180081B4C(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 i; // rsi
  __int64 v10; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4) )
  {
    sub_1800824B8(a1, a3);
    v7 = *a1;
LABEL_11:
    v10 = sub_180081C48(a2, v5, v7, a1);
    i = v10;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v3) >> 4);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_180081ED0(v3, a2);
      v7 = a1[1];
      v3 += 48LL;
      a2 += 48LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 48 * v5; v5; --v5 )
  {
    sub_180081ED0(v3, a2);
    v3 += 48LL;
    a2 += 48LL;
  }
  LOBYTE(v10) = sub_180073C8C(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return v10;
}
