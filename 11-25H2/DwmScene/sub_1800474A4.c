/*
 * XREFs of sub_1800474A4 @ 0x1800474A4
 * Callers:
 *     sub_180048380 @ 0x180048380 (sub_180048380.c)
 * Callees:
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 *     sub_180047730 @ 0x180047730 (sub_180047730.c)
 *     sub_180047D1C @ 0x180047D1C (sub_180047D1C.c)
 *     sub_180049AC8 @ 0x180049AC8 (sub_180049AC8.c)
 */

__int64 __fastcall sub_1800474A4(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 i; // rsi
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3) )
  {
    sub_180049AC8(a1, a3);
    v7 = *a1;
LABEL_11:
    result = sub_180047730(a2, v5, v7);
    i = result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0x2E8BA2E8BA2E8BA3LL * ((v7 - v3) >> 3);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_180047D1C(v3, a2);
      v7 = a1[1];
      v3 += 88LL;
      a2 += 88LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 88 * v5; v5; --v5 )
  {
    sub_180047D1C(v3, a2);
    v3 += 88LL;
    a2 += 88LL;
  }
  result = sub_1800475E0(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return result;
}
