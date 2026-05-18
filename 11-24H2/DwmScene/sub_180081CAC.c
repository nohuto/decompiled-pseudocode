/*
 * XREFs of sub_180081CAC @ 0x180081CAC
 * Callers:
 *     sub_1800821A4 @ 0x1800821A4 (sub_1800821A4.c)
 * Callees:
 *     sub_180073DEC @ 0x180073DEC (sub_180073DEC.c)
 *     sub_180081DA8 @ 0x180081DA8 (sub_180081DA8.c)
 *     sub_180082030 @ 0x180082030 (sub_180082030.c)
 *     sub_180082618 @ 0x180082618 (sub_180082618.c)
 */

char __fastcall sub_180081CAC(__int64 *a1, __int64 a2, unsigned __int64 a3)
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
    sub_180082618(a1, a3);
    v7 = *a1;
LABEL_11:
    v10 = sub_180081DA8(a2, v5, v7, a1);
    i = v10;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v3) >> 4);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_180082030(v3, a2);
      v7 = a1[1];
      v3 += 48LL;
      a2 += 48LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 48 * v5; v5; --v5 )
  {
    sub_180082030(v3, a2);
    v3 += 48LL;
    a2 += 48LL;
  }
  LOBYTE(v10) = sub_180073DEC(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return v10;
}
