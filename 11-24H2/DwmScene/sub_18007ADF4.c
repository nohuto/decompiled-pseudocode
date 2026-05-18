/*
 * XREFs of sub_18007ADF4 @ 0x18007ADF4
 * Callers:
 *     sub_18007B3FC @ 0x18007B3FC (sub_18007B3FC.c)
 * Callees:
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_18007B070 @ 0x18007B070 (sub_18007B070.c)
 *     sub_18007B43C @ 0x18007B43C (sub_18007B43C.c)
 *     sub_18007CB14 @ 0x18007CB14 (sub_18007CB14.c)
 */

__int64 __fastcall sub_18007ADF4(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 i; // rbp
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3) )
  {
    sub_18007CB14(a1, a3);
    v7 = *a1;
LABEL_11:
    result = sub_18007B070(a2, v5, v7);
    i = result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((v7 - v3) >> 3);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_18007B43C(v3, a2);
      v7 = a1[1];
      v3 += 40LL;
      a2 += 40LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 40 * v5; v5; --v5 )
  {
    sub_18007B43C(v3, a2);
    v3 += 40LL;
    a2 += 40LL;
  }
  result = sub_180078718(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return result;
}
